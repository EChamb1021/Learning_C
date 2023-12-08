q3: q3.o stackADT3.o
	gcc -o q3 q3.o stackADT3.o

q3.o: q3.c stackADT.h
	gcc -c q3.c

stackADT3.o: stackADT3.c stackADT.h
	gcc -c stackADT3.c

clean:
	rm *.o q3