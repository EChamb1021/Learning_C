q1: q1.o stackADT.o
	gcc -o q1 q1.o stackADT.o

q1.o: q1.c stackADT.h
	gcc -c q1.c

stackADT.o: stackADT.c stackADT.h
	gcc -c stackADT.c

clean:
	rm *.o q1