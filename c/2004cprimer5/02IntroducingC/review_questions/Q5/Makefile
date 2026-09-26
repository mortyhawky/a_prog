C = gcc
CFLAGS = -std=c23 -Wall -Wextra -Werror -Wpedantic \
		 -g3 -O0 \
		 -fsanitize=address,undefined

TARGET = q5
OBJ = main.o q5.o

.PHONY: all clean cppcheck check run dbg
.PHONY:     cl             c     r   d
##  m       build
##  m cl    clean
##  m c     clean, rebuild, run Cppcheck
##  m r     clean, rebuild, run the program
##  m d     build and start GDB

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c q5.h
	$(CC) $(CFLAGS) -c $<

q5.o: q5.c q5.h
	$(CC) $(CFLAGS) -c $<

# Alias m cl
cl: clean
clean:
	rm -f $(OBJ) $(TARGET)
	eza -l

cppcheck:
	cppcheck --std=c23 \
		--enable=warning,style,performance,portability \
		--error-exitcode=1 \
		--suppress=missingIncludeSystem \
		main.c q5.c

# Alias m c
c: check
check: clean
	#clear
	#eza -l
	$(MAKE)
	$(MAKE) cppcheck

r: run
run: clean
	$(MAKE) all
	./$(TARGET); printf "Exit code = %d\n" $$?
	#./$(TARGET); rc=$$?; printf "Exit code = %d\n" "$$rc"

d: dbg
dbg: all
	gdb -q -x gdb.file ./$(TARGET)

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
