q4: q4.o stackADT3.o
	gcc -o q4 q4.o stackADT3.o

q4.o: q4.c stackADT.h
	gcc -c q4.c

stackADT3.o: stackADT3.c stackADT.h
	gcc -c stackADT3.c

clean:
	rm *.o q4