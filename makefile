all: ./test.out

./test.out: list.c main.c
	gcc  -o test.out list.c main.c
run:
	./test.out
clean:
	rm -f test.out list.o main.o *~
