#!/usr/bin/env bash

##################################################################
# https://www.youtube.com/watch?v=kkzB3vat31U
# pt47  Chapter 11  Section 02
# Regular Expressions
# Bash has it's own regex engine
# Tip: https://regex101.com/

#clear
#re='^(Morty|Hawky).*$'
#re='^(joe|man).*$'
input='Morty is learning Bash'
re='(Morty) is (learning)'
# BASH_REMATCH[0]  -> Morty is learning
# BASH_REMATCH[1]  -> Morty
# BASH_REMATCH[2]  -> learning

if [[ $input =~ $re ]]; then
    printf '%s\n' "${BASH_REMATCH[@]}"
    #printf "string: BASH_REMATCH[0]:  %s\n" "${BASH_REMATCH[0]}"
    #printf "match : BASH_REMATCH[1]:  %s\n" "${BASH_REMATCH[1]}"
    #full_string=${BASH_REMATCH[0]}
    #match=${BASH_REMATCH[1]}
    #printf 'full_string  = %s\n' "$full_string"
    #printf 'matched part = %s\n' "$match"
else
    printf 'no match\n'
fi

printf '\n=======================\n'
#regex='^.*\/(.*) - ([[:digit:]]{4}[-.][[:digit:]]{2}[-.][[:digit:]]{2})\.'
# Parentheses () create capture groups stored in BASH_REMATCH[@]
# Anything inside () becomes a capture group:
# BASH_REMATCH[0] = whole match
# BASH_REMATCH[1+] = captured groups
regex='([[:digit:]]{4}[-.][[:digit:]]{2}[-.][[:digit:]]{2})'
cnt=1
shopt -s globstar nullglob
for f in ./**/*.{jpg,jpeg}; do
    if ! [[ $f =~ $regex ]]; then
        printf 'No match for: %s\n' "$f"
        continue
    fi

    printf '%s Matched the pattern\n' "$f"
    i_name=${BASH_REMATCH[1]}
    i_date=${BASH_REMATCH[2]}
    printf 'Match No.: %d i_date="%s" i_name="%s"\n\n' \
        "$cnt" "$i_date" "$i_name"
    #printf 'Match No.: $cnt i_date=\"$i_date\"  i_name=\"$i_name\"\n\n'
    ((cnt++))
done
