 #!/usr/bin/env bash

regex='[[:alnum:]._-]+@[[:alnum:].-]+\.[[:alpha:].]+'

while IFS= read -r line; do
    if [[ $line =~ $regex ]]; then
        echo "Found: ${BASH_REMATCH[0]}"
    fi
done < text.txt




####!/usr/bin/env bash
###
###clear
###printf 'Hello I`m %s \n' "Morty"
###printf 'Practicing regualar expressions\n\n'
###
###rex_pcre='[\w.]+@[a-zA-ZøØ-]+\.[a-zA-Z.]+'
###
###rex_bash='[[:alnum:]._-]+@[[:alnum:].-]+\.[[:alpha:].]+'
###
### grep -oP "$rex_bash" text.txt

