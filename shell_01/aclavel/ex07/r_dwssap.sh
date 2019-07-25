#!/bin/sh
cat /etc/passwd | grep -v '#' | sed -n 'n;p' | cut -d: -f1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | sed 's/$/, /g' | tr -d '\n' | rev | cut -c 3- | rev | tr '\n' '.'
