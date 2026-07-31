### Examples in vim
```
YT: https://www.youtube.com/watch?v=sa-TUpSx1JA
```

```
# Many users prefer starting regexes with \v 
# because they look much closer to PCRE and ERE syntax.
/\v(cat|dog)        (\v = "Very Magic Mode")
?\v(cat|dog)
```

Serach for 'hello'
```vim regex
/hello          (/ = forward(down)   search in vim)
?hello          (? = backward(up)    search in vim)
```

Search for 'cat' or 'dog'
```vim regex
/\(cat\|dog\)
?\(cat\|dog\)

/\v(cat|dog)        (\v = "Very Magic Mode")
?\v(cat|dog)
```

video: 3min
Search for 'coreyms.com'
```vim regex
/coreyms\.com
/\vcoreyms\.com
```

video: 11min
```
/\v\d\d\d                   -> Match any 3 digits in a row
/\v\d\d\d.                  -> Match any 3 digits in a row + one of any char.
/\v\d\d\d.\d\d\d            -> Match 3 digits, any char, 3digits
/\v\d\d\d.\d\d\d.\d\d\d\d   -> 3dig, any, 3dig, any, 4digits
```

video: 12min
```
/\v\d\d\d\.
/\v\d\d\d\*
/\v\d\d\d[-.]
/\v\d\d\d[*-]

/\v\d\d\d[-.]\d\d\d[-.]\d\d\d\d
/\v\d\d\d[-.]+\d\d\d[-.]\d\d\d\d
/\v\d\d\d[-.]{1,3}\d\d\d[-.]\d\d\d\d
```

video 14min
```
/\v[890]{3}[-.]
/\v[89]00[-.]
/\v[89][0]{2}-[[:digit:]]{3}-[[:digit:]]{4}
```

video 16min
```
/\v[a-zA-Z]             All lower and upper case characters
/\v[a-zæøåA-ZÆØÅ]       All lower and upper case including norwegian chars

/\v[^a-z]               Everything but lowercase letters
/\v[^b]at               Everything ending in 'at' whitout a leading 'b'
/\v[^bB]at              Everything ending in 'at' whitout a leading 'b' or 'B'
```

video 19min
```
/\v\d{3}                        Search for 3 digits
/\v\d{3}.0\d{3}.\d{4}           3dig, any, 3dig, any, 4dig
/\v\d{3}.{1,3}0\d{3}.\d{4}      3dig, 1-3 of any char, 3dig, any, 4dig
/\v\d{3}[-.*]{1,3}\d{3}.\d{4}   
```



#### Match all names starting with Mr or Mr.
```vim regex
/\v^Mr\.?\s*[A-Z]{1}
```
- Start search                      /
- Very magic mode                   \v
- Beginning of line                 ^
- Match the literal text "Mr"       Mr
- Match an optional period          \.?
- Match zero or more whitespace     \s*
- Match one uppercase char          [A-Z]{1}

```vim regex
/\v^Mr\.?\s*[A-Z][a-z]*%(['-][A-Z][a-z]*)*
"tokenized version"
/ \v ^ Mr \.? \s* [A-Z] [a-z]* %( ['-] [A-Z] [a-z]* ) *
```
- /         Begin a search in Vim.
- \v        Very magic mode.
- ^         Beginning of line.
- Mr        Match the literal text "Mr".
- \.?       Zero or one occurrence of dot.
- \s*       Zero or more whitespaces.
- [A-Z]     Match the first uppercase letter of the surname
- [a-z]*    Match zero or more lowercase letter.

- %(        Start of a non-capturing group (Vim syntax)
            PCRE: (?: ... ) (Perl Compatible Regular Expression)
- ['-]      Matches ' and -
- [A-Z]     Match another uppercase letter (for example O or J).
- [a-z]*    Match the remaining lowercase letters of this name part.
- )         End of the parenthesized group
- *         Repeat the entire grouped suffix zero or more times.

examples:
Smith               (0 repetitions)
O'Connor            (1 repetition)
Smith-Jones         (1 repetition)
Smith-Jones-Brown   (2 repetitions)

#### The whole parenthesized suffix part
```vim regex
%(['-][A-Z][a-z]*)
```
- Matches one suffix consisting of:
  - an apostrophe or hyphen
  - followed by an uppercase letter
  - followed by zero or more lowercase letters
  - for example "'Connor"  "-Jones"

```
^Mr\.?\s*[A-Z][a-z]*%(['-][A-Z][a-z]*)*
│ │  │   │          │
│ │  │   │          └─ Repeat suffixes: 'Connor, -Jones, etc.
│ │  │   └──────────── First surname part
│ │  └──────────────── Optional whitespace
│ └─────────────────── Optional period
└───────────────────── Literal "Mr" at line start
```
