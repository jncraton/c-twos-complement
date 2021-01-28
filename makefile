all: test

tc: tc.c
	gcc $< -o $@ -Wall -Wextra

test: tc
	./tc

clean:
	rm -f tc
