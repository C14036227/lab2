hw2: bmi.o hw2.o
	        g++ -o hw2 hw2.o bmi.o

bmi.o: bmi.cpp bmi.h
	        g++ -c bmi.cpp

hw2.o: hw2.cpp bmi.h
	        g++ -c main6.cpp

clean:
	        rm bmi *.o

