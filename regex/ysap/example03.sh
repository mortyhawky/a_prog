#!/usr/bin/env bash

#email_regex='[[:alnum:]._-]+@[[:alnum:].-]+\.[[:alpha:].]+'
phone_regex='\+?[0-9]{1,3}(?:[ -]?[0-9]{2,4})+'

#echo "== Emails =="
#grep -oP "$email_regex" text.txt

#echo
#echo "== Phone numbers =="
grep -oP "$phone_regex" text.txt
#phone_no=$(grep -oP "$phone_regex" text.txt)
#printf '\"%s\"\n' "$phone_no"

