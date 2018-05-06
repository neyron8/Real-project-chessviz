#include <stdio.h>
#include "board.h"
#include "board_print_plain.h"


int main () {

    Board place;
    printf("\nMaking board...\n");
    make_board(&place);
    //printf("\nCreating start-game board...\n");
    test_board(&place);
    //standard_board(&place);
    //printf("\nPrintnig...\n");
    print(place);
	char s [] = {"1. e1-e2 e8-d7"};
    //correct(s);
    //bishop (s,&place);
    //rook (s,&place);
    //horse (s,&place);
    //queen (s,&place);
    king (s,&place);
    print(place);
    return 0;
}
