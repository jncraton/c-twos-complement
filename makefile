all: tc

tc: tc.c
	gcc $< -o $@ -Wall -Wextra
	./tc

clean:
	rm -f tc
