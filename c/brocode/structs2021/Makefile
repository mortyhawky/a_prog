CC = gcc
CFLAGS = -std=c23 -Wall -Wextra -Werror -Wpedantic\
		 -g3 -O0\
		 -fsanitize=address,undefined

TARGET = structs
OBJ = main.o structs.o

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c structs.h
	$(CC) $(CFLAGS) -c $<

structs.o: structs.c structs.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)


#
# Important: the indentation before $(CC) and rm must be a tab, 
# not spaces. Make requires that for recipe lines.
#
#-- =====================================
#-- AUTO COMMANDS
#-- =====================================
#
#-- Disable expandtab for "make"
#vim.api.nvim_create_autocmd("FileType", {
#    desc = "Disable expandtab for Makefile",
#    pattern = "make",	--set ft?    filetype=make
#    callback = function()
#        vim.opt_local.expandtab = false
#        vim.opt_local.list      = true
#    end,
#})
#
