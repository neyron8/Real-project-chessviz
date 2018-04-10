#include <stdio.h>
#include "board.h"

void make_board(Board* board){
    int line,col;
    
    for (col = 0; col < 8; col++) {
        for(line = 0; line < 8; line++) {
            board->cell[line][col].fill = 0;
        }
    }
}

void standard_board(Board* board) {
    int line,col;
    
    line = 1;

    for (col = 0; col <= 7; col++) {
        board->cell[line][col].fill = 1;
        board->cell[line][col].type = Pawn;
        board->cell[line][col].color = Black;               
    }

    line = 6;

    for (col = 0; col <= 7; col++) {
        board->cell[line][col].fill = 1;
        board->cell[line][col].type = Pawn;   
        board->cell[line][col].color = White;        
    }

    line = 0;

    for (col = 0; col <= 7; col++) {
        switch(col) {
        case 0:
        case 7:
            board->cell[line][col].fill = 1;
            board->cell[line][col].type = Rook;
            board->cell[line][col].color = Black;
            break;
        case 1:
        case 6:
            board->cell[line][col].fill = 1;
            board->cell[line][col].type = Horse;
            board->cell[line][col].color = Black;
            break;
        case 2:
        case 5:
            board->cell[line][col].fill = 1;
            board->cell[line][col].type = Bishop;
            board->cell[line][col].color = Black;
            break;
        case 3:
            board->cell[line][col].fill = 1;
            board->cell[line][col].type = Queen;
            board->cell[line][col].color = Black;
            break;
        case 4:
            board->cell[line][col].fill = 1;
            board->cell[line][col].type = King;
            board->cell[line][col].color = Black;
            break;
        default:
            break;
        }
    }

    line = 7;
    
    for (col = 0; col <= 7; col++) {
        switch(col){
        case 0:
        case 7:
            board->cell[line][col].fill = 1;
            board->cell[line][col].type = Rook;
            board->cell[line][col].color = White;
            break;
        case 1:
        case 6:
            board->cell[line][col].fill = 1;
            board->cell[line][col].type = Horse;
            board->cell[line][col].color = White;
            break;
        case 2:
        case 5:
            board->cell[line][col].fill = 1;
            board->cell[line][col].type = Bishop;
            board->cell[line][col].color = White;
            break;
        case 3:
            board->cell[line][col].fill = 1;
            board->cell[line][col].type = Queen;
            board->cell[line][col].color = White;
            break;
        case 4:
            board->cell[line][col].fill = 1;
            board->cell[line][col].type = King;
            board->cell[line][col].color = White;
            break;
        default:
            break;
        }
    }

    for (line = 3; line < 4; line++) {
        for (col = 0; col < 8; col++) {
            board->cell[line][col].fill = 0;
        }
    }
}

void print_board(Board board) {
    int line,col;

    for (line = 0; line < 8; line++) {
        for (col = 0; col < 8; col++) {
            if (board.cell[line][col].fill) {
                switch (board.cell[line][col].type) {
                case Pawn:
                    if (board.cell[line][col].color == White) {
                        printf("P");
                    } else {
                        printf("p");
                    }
                    break;
                case Rook:
                    if (board.cell[line][col].color == White) {
                        printf("R");
                    } else {
                        printf("r");
                    }
                    break;
                case Horse:
                    if (board.cell[line][col].color == White) {
                        printf("H");
                    } else {
                        printf("h");
                    }
                    break;
                case Bishop:
                    if (board.cell[line][col].color == White) {
                        printf("B");
                    } else {
                        printf("b");
                    }
                    break;
                case Queen:
                    if (board.cell[line][col].color == White) {
                        printf("Q");
                    } else {
                        printf("q");
                    }
                    break;
                case King:
                    if (board.cell[line][col].color == White) {
                        printf("K");
                    } else {
                        printf("k");
                    }
                    break;
                }
            }
            
            if (col == 7) {
                printf("\n");
            }
        }
    }
}
