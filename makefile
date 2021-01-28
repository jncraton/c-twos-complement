all: tc

tc: tc.c
	gcc $< -o $@ -Wall -Wextra
	./tc
