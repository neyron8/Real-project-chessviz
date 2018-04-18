C = gcc
flag = -c -Wall -Werror 

all: chess
chess: make main.o ChessPrint.o board.o
	$(C) ./build/main.o  ./build/board_print_plain.o ./build/board.o -o ./bin/chess

main.o:
	$(C) $(flag) ./main.c -o ./build/main.o

ChessPrint.o:
	$(C) $(flag) ./board_print_plain.c -o ./build/board_print_plain.o

board.o:
	$(C) $(flag) ./board.c -o ./build/board.o

make:
	mkdir -p bin
	mkdir -p build

.PHONY: clean
clean:
	rm -rf ./build/*.o
