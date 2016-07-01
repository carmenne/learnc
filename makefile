CC=cc

all: 
	$(CC) -o ex4 ex4.c
	$(CC) -o ex5 ex5.c
	$(CC) -o ex6 ex6.c
	$(CC) -o ex7 ex7.c
	$(CC) -o ex8 ex8.c
	$(CC) -o ex9 ex9.c
	$(CC) -o ex10 ex10.c

run:
	./ex10

clean:
	rm -f ex4 ex5 ex6 ex7 ex8 ex9 ex10
