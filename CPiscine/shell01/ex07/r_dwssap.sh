cat /etc/passwd | grep -v "#" | awk 'NR%2==0' | cut -d ':' -f 1 | rev | sort -r | head -n $FT_LINE2 | tail -n $((1+$FT_LINE2-$FT_LINE1)) | tr '\n' ',' | sed s/,/,\ /g | sed s/,\ $/./g | tr -d '\n'
