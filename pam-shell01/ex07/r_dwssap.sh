#!/bin/sh
cat /etc/passwd | cut -d':' -f1 | awk 'NR % 2 == 0' | rev | sort --reverse | sed "$FT_LINE1 $FT_LINE2"'!d' | tr '\n' ',' | sed 's/,$/./' | sed 's/,/, /g'