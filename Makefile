all: TestDriver

TestDriver: TestDriver.o Player.o Player.h
	g++ -o TestDriver TestDriver.o Player.o Player.h

TestDriver.o: TestDriver.cpp Player.h
	g++ -c TestDriver.cpp Player.h

CFF_records: CFF_records.o Player.o Player.h
	g++ -o CFF_records CFF_records.o Player.o Player.h

CFF_records.o: CFF_records.cpp
	g++ -c CFF_records.cpp

Player.o: Player.cpp Player.h
	g++ -c Player.cpp Player.h

clean:
	rm -f CFF_records
	rm -f CFF_records.o
	rm -f TestDriver
	rm -f TestDriver.o
	rm -f Player.o
