all: ./listtest run

./listtest: list.c testing.c
	gcc  -o listtest list.c testing.c
run:
	./listtest
clean:
	rm -f listtest list.o testing.o *~
