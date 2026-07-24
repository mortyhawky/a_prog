#!/usr/bin/env bash

##################################################################
# https://www.youtube.com/watch?v=kkzB3vat31U
# pt47  Chapter 11  Section 02
# Regular Expressions
# Bash has it's own regex engine

#re='^(dave|joe)$'
re='^(d|j).*$'
input='dave'

if [[ $input =~ $re ]]; then
    echo match

    printf '%s\n' "${BASH_REMATCH[@]}"
    full_string=${BASH_REMATCH[0]}
    name=${BASH_REMATCH[1]}
    echo '-------------------'
    printf 'full_string = %s\n' "$full_string"
    printf 'name        = %s\n' "$full_string"

else
    echo no match
fi

# 
echo '==================='
regex='^.*\/(.*) - ([0-9]{4}-[0-9]{2}-[0-9]{2})\..*$'
for f in ./images/*; do
    if ! [[ $f =~ $regex ]]; then
        echo "$f didn't match pattern"
        continue
    fi

    name=${BASH_REMATCH[1]}
    date=${BASH_REMATCH[2]}
    echo "$date: $name"
done
