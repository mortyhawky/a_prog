CC = gcc
CFLAGS = -std=c23 -Wall -Wextra -Werror -Wpedantic\
		 -g3 -O0\
		 -fsanitize=address,undefined

TARGET = struct
OBJ = main.o struct.o

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c struct.h
	$(CC) $(CFLAGS) -c $<

struct.o: struct.c struct.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)


#
# Important: the indentation before $(CC) and rm must be a tab, 
# not spaces. Make requires that for recipe lines.
#
#-- Disable expandtab for Makefile
#vim.api.nvim_create_autocmd("FileType", {
#    desc = "Disable expandtab for Makefile",
#    pattern = "make",	--set ft?    filetype=make
#    callback = function()
#        vim.opt_local.expandtab = false
#        vim.opt_local.list      = true
#        --vim.cmd("colorscheme default")
#    end,
#})
#
