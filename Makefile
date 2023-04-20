all: distributore

release: distributore
	mkdir -p release
	cp distributore release

distributore: fn.c main.c
	gcc -o distributore fn.c main.c

clean: 
	rm -f *.o
	rm -f distributore
