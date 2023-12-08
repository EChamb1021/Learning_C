q5: q5.o queueADT.o
	gcc -o q5 q5.o queueADT.o

q5.o: q5.c queueADT.h
	gcc -c q5.c

queueADT.o: queueADT.c queueADT.h
	gcc -c queueADT.c

clean:
	rm *.o q5