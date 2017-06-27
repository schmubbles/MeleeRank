all: CFF_records

CFF_records: CFF_records.o Player.o Player.h
	g++ -o CFF_records CFF_records.o Player.o Player.h

CFF_records.o: CFF_records.cpp
	g++ -c CFF_records.cpp

Player.o: Player.cpp Player.h
	g++ -c Player.cpp Player.h

clean:
	rm -f CFF_records
	rm -f CFF_records.o
