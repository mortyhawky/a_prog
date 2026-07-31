#!/usr/bin/env bash

email_regex='[[:alnum:]._-]+@[[:alnum:].-]+\.[[:alpha:].]+'
phone_regex='\+?[0-9]{1,3}([ -]?[0-9]{2,4})+'

cnt=1
while IFS= read -r ln; do
    printf 'line %02d = \"%s \"\n' "$cnt" "$ln"
    ((cnt++))
done < text.txt

cnt=1
while IFS= read -r line; do
    if [[ $line =~ $email_regex ]]; then
        printf '%02d Email: %s\n' "$cnt" "${BASH_REMATCH[0]}"
    elif [[ $line =~ $phone_regex ]]; then
        printf '%02d Phone: %s\n' "$cnt" "${BASH_REMATCH[0]}"
    fi
    ((cnt++))
done < text.txt
