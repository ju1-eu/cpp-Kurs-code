# ju  12-Mrz-20  Makefile - Win10
# *.c
TARGETS=\
	Main.exe \
	Abfragen.exe \
	Abfragen2.exe \
	Aus-Eingabe.exe \
	Factorial.exe \
	For-Schleife.exe \
	Funktionen.exe \
	GCD.exe \
	Schleifen2.exe \
	SUM.exe \
	Switch.exe \
	Variablen.exe \
	Verschachtelte-For-Schleife.exe \
	While-Schleife.exe \



#-----------------------------------
# c
CC:=gcc
CDEBUG=-g3 -Wextra -Wno-missing-field-initializers -std=c11 # -Wall  
CRELEASE=-std=c11 -O2
# Bibliothek
#CLIBS=-lz FunctionsBib.c FunctionsBib.h MeineBib.c MeineBib.h -lm
CLIBS=-lm 
# c++
CXX:=g++
CXXDEBUG=-g3 -Wextra -Wno-missing-field-initializers -std=c++17   # -Wall 
CXXRELEASE=-std=c++17 -O2

all: $(TARGETS)
# gcc hallo.c -o hallo.exe
%.exe: %.c
	$(CC) $(CDEBUG) $(CLIBS) $< -o $@
	
# g++ hallo.cpp -o hallo.exe
%.exe: %.cpp 
	$(CXX) $(CXXDEBUG) $(CLIBS) $< -o $@

# g++ hallo.cc -o hallo.exe
%.exe: %.cc
	$(CXX) $(CXXDEBUG) $(CLIBS) $< -o $@	

# main.c -> Release o. Debug
release: main.o #bib.o
	$(CC) $(CRELEASE) main.c -o mainRelease.exe

debug: main.o #MeineBib.o
	$(CC) $(CDEBUG)   main.c -o mainDebug.exe

main.o: main.c
	$(CC) -c main.c

#bib.o: MeineBib.c
#	$(CC) -c MeineBib.c

clean:
	#rm -r *.exe -Force
	#rm -rf *.exe *~ *.o
	rm Main.exe
	rm Abfragen.exe
	rm Abfragen2.exe
	rm Aus-Eingabe.exe
	rm Factorial.exe
	rm For-Schleife.exe
	rm Funktionen.exe
	rm GCD.exe
	rm Schleifen2.exe
	rm SUM.exe
	rm Switch.exe
	rm Variablen.exe
	rm Verschachtelte-For-Schleife.exe
	rm While-Schleife.exe


	#rm main.o
	#rm mainRelease.exe 
	#rm mainDebug.exe 
