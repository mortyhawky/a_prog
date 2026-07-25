#!/usr/bin/env bash

clear
printf 'Hello I`m %s \n' "Morty"
printf 'Practicing regualar expressions\n\n'

rex_pcre='[\w.]+@[a-zA-ZøØ-]+\.[a-zA-Z.]+'

rex_bash='[[:alnum:]._-]+@[[:alnum:].-]+\.[[:alpha:].]+'

 grep -oP "$rex_bash" text.txt
