### Compiling

example using gcc:
```bash
gcc     c_016_02.c -o a.out                 \
        -g3 -O0 -std=c23                    \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"
```

Example using clang:
```
clang   c_016_02.c -o a.out                 \
        -g3 -O0 -std=c23                    \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"
```

### Debugging
