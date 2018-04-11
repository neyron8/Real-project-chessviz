#include <stdio.h>
#include "board.h"

int what_is_piece (char *h, Board board)
{
	for ( char ltr = 'a'; ltr != 'i'; ltr++) {
		for (int i = 0; i < 8; i++) {
			if(h[3] == ltr) {
				if((h[4] - 48)) {
					board -> cell[h[3] - 97 ]
			}	
		}
}
