CC = gcc
CFLAGS = -std=c23 -Wall -Wextra -Werror -Wpedantic -g3 -O0

TARGET = exercise
OBJ = main.o exercise.o

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c exercise.h
	$(CC) $(CFLAGS) -c $<

exercise.o: exercise.c exercise.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)


#
# Important: the indentation before $(CC) and rm must be a tab, 
# not spaces. Make requires that for recipe lines.
#
# -- Disable expandtabs for "make"
#  vim.api.nvim_create_autocmd("FileType", {
#      pattern = "make",
#      callback = function()
#          vim.opt_local.expandtab = false
#      end,
#  })
