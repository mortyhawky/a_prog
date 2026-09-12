### Compiling

example using gcc:
```bash
gcc     [filename].c -o a.out                 \
        -g3 -O0 -std=c23                    \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"
```

Example using clang:
```
clang   [filename].c -o a.out                 \
        -g3 -O0 -std=c23                    \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"
```

### Debugging
```bash
gdb a.out
b main
r < test.txt
```
