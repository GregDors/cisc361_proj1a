all: mp3

mp3: main.o add.o printfro.o printback.o deleteartist.o freeList.o 
	gcc -g main.o add.o printfro.o printback.o deleteartist.o freeList.o -o mp3

main.o: main.c
	gcc -g -c main.c

add.o: add.c
	gcc -g -c add.c

printfro.o: printfro.c
	gcc -g -c printfro.c

printback.o: printback.c
	gcc -g -c printback.c

deleteartist.o: deleteartist.c
	gcc -g -c deleteartist.c

freeList.o: freeList.c
	gcc -g -c freeList.c

clean:
	\rm *.o mp3
