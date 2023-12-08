q2: q2.o stackADT.o
	gcc -o q2 q2.o stackADT.o

q2.o: q2.c stackADT.h
	gcc -c q2.c

stackADT.o: stackADT.c stackADT.h
	gcc -c stackADT.c

clean:
	rm *.o q2