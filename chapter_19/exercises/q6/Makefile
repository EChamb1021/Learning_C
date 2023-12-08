q6: q6.o queueADT.o
	gcc -o q6 q6.o queueADT.o

q6.o: q6.c queueADT.h
	gcc -c q6.c

queueADT.o: queueADT.c queueADT.h
	gcc -c queueADT.c

clean:
	rm *.o q6