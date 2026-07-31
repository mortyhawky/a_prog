#### MetaCharacters (Need to be escaped):
```
. [ { ( ) \ ^ $ | ? * +
```

#### Also need to be escaped in vim
```
@ # % & / = `
```


#### Character Classes
```
.       Any charachter, except for newline
\d      Digit [0-9]
\D      Not a digit [0-9]
\w      Word [a-zA-Z0-9_]
\W      Not a Word
\s      Whitespace [Space Tab Newline]
\S      Not whitespace
```


#### Anchors
```
\b      Word boundary           PCRE / ERE
\B      Not a word boundray     
<       "start of word"         VIM / NVIM
>       "end of word"           
^       Beginning of a string
$       End       of a string
```


#### asdfsd
```
[]      Matches characters in brackets
[[:digit:]]     [0-9]
[[:alpha:]]     [a-zA-Z]
[^ ]    Matches characters NOT in brackets
|       Either or
( )     Group
```


#### Quantifiers
```
*               0 or more
+               1 or more
?               0 or one
{3}             Exact number
{3,4}           Range of numbers
```


```
# Many users prefer starting regexes with \v 
# because they look much closer to PCRE and ERE syntax.
```
