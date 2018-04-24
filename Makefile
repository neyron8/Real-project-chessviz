C = gcc
flag = -c -Wall -Werror 

./bin/chess: ./build/main.o ./build/board_print_plain.o ./build/board.o
	$(C) ./build/main.o  ./build/board_print_plain.o ./build/board.o -o ./bin/chess

./build/main.o: ./src/main.c
	$(C) $(flag) ./src/main.c -o ./build/main.o

./build/board_print_plain.o: ./src/board_print_plain.c
	$(C) $(flag) ./src/board_print_plain.c -o ./build/board_print_plain.o

./build/board.o: ./src/board.c
	$(C) $(flag) ./src/board.c -o ./build/board.o


.PHONY: clean
clean:
	rm -rf ./build/*.o
