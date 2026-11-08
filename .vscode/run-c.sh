#!/bin/bash

strip_quotes() {
    printf '%s' "$1" | sed -e "s/^[ '\"	]*//" -e "s/[ '\"	]*$//"
}

WORKSPACE="/Users/shithel/Desktop/Codep"
INPUT="$WORKSPACE/input.txt"
OUTPUT="$WORKSPACE/output.txt"

ARGS=("$@")
N=${#ARGS[@]}

if [ $N -ge 3 ]; then
    LAST1=$(strip_quotes "${ARGS[$((N-1))]}")
    LAST2=$(strip_quotes "${ARGS[$((N-2))]}")
    if [[ "$LAST1" == *"output.txt" ]] && [[ "$LAST2" == *"input.txt" ]]; then
        OUTPUT="$LAST1"
        INPUT="$LAST2"
        unset 'ARGS[$((N-1))]'
        unset 'ARGS[$((N-2))]'
    fi
fi

RAW_SRC="${ARGS[*]}"
SRC=$(strip_quotes "$RAW_SRC")

touch "$INPUT"
touch "$OUTPUT"

if [ ! -f "$SRC" ]; then
    echo "Error: Source file '$SRC' not found!" | tee "$OUTPUT" >&2
    exit 1
fi

BIN="/tmp/codep_runner_bin"
rm -f "$BIN"

if [[ "$SRC" == *.cpp ]] || [[ "$SRC" == *.cc ]]; then
    COMPILER="g++"
else
    COMPILER="gcc"
fi

COMP_OUTPUT=$($COMPILER "$SRC" -o "$BIN" -lm 2>&1)
COMPILE_STATUS=$?

if [ $COMPILE_STATUS -ne 0 ]; then
    echo "=== Compilation Error ===" | tee "$OUTPUT" >&2
    echo "$COMP_OUTPUT" | tee -a "$OUTPUT" >&2
    exit 1
fi

> "$OUTPUT"
"$BIN" < "$INPUT" 2>&1 | tee "$OUTPUT"
EXIT_CODE=${PIPESTATUS[0]}

exit $EXIT_CODE
