CC = gcc
CFLAGS = -std=c23 -Wall -Wextra -Werror -Wpedantic\
		 -g3 -O0\
		 -fsanitize=address,undefined

TARGET = coord
OBJ = main.o coord.o

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c coord.h
	$(CC) $(CFLAGS) -c $<

coord.o: coord.c coord.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)


#
# Important: the indentation before $(CC) and rm must be a tab, 
# not spaces. Make requires that for recipe lines.
#
# -- =====================================
#  -- AUTO COMMANDS
#  -- =====================================
#
#  -- Disable expandtab for Makefiles
#  vim.api.nvim_create_autocmd("FileType", {
#      desc = "Disable expandtab for Makefiles",
#      pattern = "make",   --set ft?    filetype=make
#      callback = function()
#          vim.opt_local.expandtab = false
#      end,
#  })
