#include "board.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

int move (char *string, Board *board) {   // Условия измени
	int bl_ch1, wh_ch1, bl_dig1, wh_dig1, bl_ch2, wh_ch2, bl_dig2, wh_dig2;
	wh_ch1 = (string[3] - 97);
	wh_ch2 = (string[9] - 97);
	bl_ch1 = (string[6] - 97);
	bl_ch2 = (string[12] - 97);
	wh_dig1 = (7 - ((string[4] - 48) - 1));
	wh_dig2 = 7 - ((string[7] - 48)-1);
	bl_dig1 = (7 - ((string[10] - 48) - 1));
	bl_dig2 = (7 - ((string[13] - 48) - 1));

	if (board -> cell [wh_dig1][wh_ch1].type == Pawn 
	&& board -> cell [bl_dig1][bl_ch1].type == Pawn){
		if ( wh_ch2 - wh_ch1 == 0 && (wh_dig1 - wh_dig2 <= 2) ){
	
 		   	system("clear");
			board -> cell [wh_dig1][wh_ch1].fill = 0;

			board -> cell [wh_dig2][wh_ch2].type = Pawn;
			board -> cell [wh_dig2][wh_ch2].fill = 1;
			board -> cell [wh_dig2][wh_ch2].color = White;
		}
	}
			
	if (board -> cell [wh_dig1][wh_ch1].type == Pawn 
	&& board -> cell [bl_dig1][bl_ch1].type == Pawn){
		if ( wh_ch2 - wh_ch1 == 0 && (wh_dig1 - wh_dig2 <= 2) ){
			board -> cell [bl_dig1][bl_ch1].fill = 0;

			board -> cell [bl_dig2][bl_ch2].type = Pawn;
			board -> cell [bl_dig2][bl_ch2].fill = 1;
			board -> cell [bl_dig2][bl_ch2].color = Black;
		}
	}
	
	return 0;
}
