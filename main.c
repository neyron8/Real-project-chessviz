#include <stdio.h>
#include "board.h"
#include "board_print_plain.h"

int main () {
    
    Board place;

    printf("\nMaking board...\n");
    make_board(&place);
    printf("\nCreating start-game board...\n");
    standard_board(&place);
    printf("\nPrintnig...\n");
    print(place);

    return 0;
}
