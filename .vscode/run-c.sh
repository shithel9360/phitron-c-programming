#!/bin/bash
# Code Runner helper script for C/C++ in VS Code
# Supports running single files with input.txt and output.txt redirection

strip_quotes() {
    printf '%s' "$1" | sed -e "s/^[ '\"	]*//" -e "s/[ '\"	]*$//"
}

SRC=$(strip_quotes "$1")
INPUT=$(strip_quotes "$2")
OUTPUT=$(strip_quotes "$3")

WORKSPACE="/Users/shithel/Desktop/Codep"
[ -z "$INPUT" ] && INPUT="$WORKSPACE/input.txt"
[ -z "$OUTPUT" ] && OUTPUT="$WORKSPACE/output.txt"

# Ensure input and output files exist
touch "$INPUT"
touch "$OUTPUT"

if [ ! -f "$SRC" ]; then
    echo "Error: Source file '$SRC' not found!" | tee "$OUTPUT" >&2
    exit 1
fi

BIN="/tmp/codep_runner_bin"
rm -f "$BIN"

# Determine compiler based on file extension
if [[ "$SRC" == *.cpp ]] || [[ "$SRC" == *.cc ]]; then
    COMPILER="g++"
else
    COMPILER="gcc"
fi

# Compile
COMP_OUTPUT=$($COMPILER "$SRC" -o "$BIN" -lm 2>&1)
COMPILE_STATUS=$?

if [ $COMPILE_STATUS -ne 0 ]; then
    echo "=== Compilation Error ===" | tee "$OUTPUT" >&2
    echo "$COMP_OUTPUT" | tee -a "$OUTPUT" >&2
    exit 1
fi

# Run binary with input redirection and tee to output.txt AND terminal
> "$OUTPUT"
"$BIN" < "$INPUT" 2>&1 | tee "$OUTPUT"
EXIT_CODE=${PIPESTATUS[0]}

exit $EXIT_CODE
