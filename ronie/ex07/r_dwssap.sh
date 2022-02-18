#!/bin/sh
cat /etc/passwd | grep -v '^#' | cut -d':' -f1 | awk 'NR % 2 == 0' | rev | sort --reverse | awk '{ if(NR >='$FT_LINE1' && NR <='$FT_LINE2') print}' | tr "\n" "," | sed 's/,$/./;s/,/, /g' 