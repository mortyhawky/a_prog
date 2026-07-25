#!/usr/bin/env bash

printf 'Hello I`m %s \n' "Morty"
printf 'regualar expressions'

rex_pcre='[\w.]+@[a-zA-ZøØ-]+\.[a-zA-Z.]+'

rex_bash='[[:alnum:]._-]+@[[:alnum:].-]+\.[[:alpha:].]+'

grep -oP "$rex_bash" text.txt
