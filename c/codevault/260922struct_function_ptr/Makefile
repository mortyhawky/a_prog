CC = gcc
CFLAGS = -std=c23 -Wall -Wextra -Werror -Wpedantic\
		 -g3 -O0\
		 -fsanitize=address,undefined

TARGET = stru_func
OBJ = main.o stru_func.o

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c stru_func.h
	$(CC) $(CFLAGS) -c $<

stru_func.o: stru_func.c stru_func.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)

cppcheck:
	cppcheck --std=c23 \
		--enable=warning,style,performance,portability \
		--error-exitcode=1 \
		--suppress=missingIncludeSystem \
		main.c stru_func.c

check:
	$(CLEAN)
	$(MAKE)
	$(MAKE) cppcheck
	./stru_func

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
