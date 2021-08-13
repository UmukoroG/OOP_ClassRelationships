
run: card.o creditCard.o main.o person.o student.o studentCard.o
	g++ card.o creditCard.o main.o person.o student.o studentCard.o -o run

card.o: card.cpp
	g++ -c card.cpp card.h

creditCard.o: creditCard.cpp
	g++ -c creditCard.cpp creditCard.h

main.o: main.cpp
	g++ -c main.cpp

person.o: person.cpp
	g++ -c person.cpp person.h

student.o: student.cpp
	g++ -c student.cpp student.h

studentCard.o: studentCard.cpp
	g++ -c studentCard.cpp studentCard.h

clean:
	rm *.o run
