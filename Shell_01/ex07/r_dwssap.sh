cat /etc/passwd | cut -d':' -f1 | awk 'NR%2==0' | rev | sort -r | awk 'NR>= ENVIRON["5"] && NR<= ENVIRON["10"]' | tr '\n' ' ' | sed 's/ /, /g' | sed 's/\(.*\), /\1./' | tr -d '\n'

cat /etc/passwd | grep "^[^#]" | cut -d ':' -f1 | sed -n 'n;p' | rev | sort -r | sed "5, 10!d" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./' | tr -d '\n'