q7: q7.o queueADT.o
	gcc -o q7 q7.o queueADT.o

q7.o: q7.c queueADT.h
	gcc -c q7.c

queueADT.o: queueADT.c queueADT.h
	gcc -c queueADT.c

clean:
	rm *.o q7