#include <stdio.h>  // CHANGE .H and other
#include "board.h"

int what_is_piece (char *h, Board *board)
{
	int flag = 0;
	for ( char ltr = 'a'; ltr != 'i'; ltr++) {
		for (int i = 0; i < 8; i++) {
			if(h[3] == ltr) {
				if((h[4] - 48) == i) {
					if(board -> cell[(h[3] - 97)][i].type == Pawn) {
						printf("\nPAWN DETECTED");
						flag = 1;
						return 1;
					}
				}	
		    }
		}
	}
	if (flag == 0)
		return 0;
}
