#include "board.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

int move_pawn (char *string, Board *board) {
	int bl_ch1, wh_ch1, bl_dig1, wh_dig1, bl_ch2, wh_ch2, bl_dig2, wh_dig2;
    //1. a1-a4 h8-h5
	wh_ch1 = (string[3] - 97);
	wh_ch2 = (string[6] - 97);
	bl_ch1 = (string[9] - 97);
	bl_ch2 = (string[12] - 97);
	wh_dig1 = (7 - ((string[4] - 48) - 1));
	wh_dig2 = 7 - ((string[7] - 48)-1);
	bl_dig1 = (7 - ((string[10] - 48) - 1));
	bl_dig2 = (7 - ((string[13] - 48) - 1));

	if ((board -> cell [wh_dig1][wh_ch1].type != Pawn) ||(board -> cell [bl_dig1][bl_ch1].type != Pawn)){
		return -1;
	}

	if (board -> cell [wh_dig1][wh_ch1].type == Pawn ){
		if ( wh_ch2 - wh_ch1 == 0 && (wh_dig1 - wh_dig2 <= 2) ){

 		   	system("clear");
			board -> cell [wh_dig1][wh_ch1].fill = 0;

			board -> cell [wh_dig2][wh_ch2].type = Pawn;
			board -> cell [wh_dig2][wh_ch2].fill = 1;
			board -> cell [wh_dig2][wh_ch2].color = White;
		}
	}
	if (board -> cell [bl_dig1][bl_ch1].type == Pawn){
		if ( bl_ch2 - bl_ch1 == 0 && (bl_dig1 - bl_dig2 <= 2) ){

			board -> cell [bl_dig1][bl_ch1].fill = 0;

			board -> cell [bl_dig2][bl_ch2].type = Pawn;
			board -> cell [bl_dig2][bl_ch2].fill = 1;
			board -> cell [bl_dig2][bl_ch2].color = Black;
		}
	}


	return 0;
}

int correct(char *string)
{
	int bl_ch1, wh_ch1, bl_dig1, wh_dig1, bl_ch2, wh_ch2, bl_dig2, wh_dig2;
	wh_ch1 = (string[3] - 97);
	wh_ch2 = (string[6] - 97);
	bl_ch1 = (string[9] - 97);
	bl_ch2 = (string[12] - 97);
	wh_dig1 = (7 - ((string[4] - 48) - 1));
	wh_dig2 = 7 - ((string[7] - 48)-1);
	bl_dig1 = (7 - ((string[10] - 48) - 1));
	bl_dig2 = (7 - ((string[13] - 48) - 1));

	if((wh_ch1 > 7 || wh_ch1 < 0) || (wh_ch2 > 7 || wh_ch2 < 0) || (bl_ch1 > 7 || bl_ch2 < 0) || (bl_ch2 > 7 || bl_ch2 < 0) ||
	(wh_dig1 > 7 || wh_dig1 < 0) || (wh_dig2 > 7 || wh_dig2 < 0) || (bl_dig1 >7 || bl_dig1 < 0)|| (bl_dig2 >7 || bl_dig2 < 0) ) {
		printf("Incorrect turn\n");
		return -1;
	}
	return 0;
}

int rook (char *string, Board *board)
{
	int bl_ch1, wh_ch1, bl_dig1, wh_dig1, bl_ch2, wh_ch2, bl_dig2, wh_dig2;
	wh_ch1 = (string[3] - 97);
	wh_ch2 = (string[6] - 97);
	bl_ch1 = (string[9] - 97);
	bl_ch2 = (string[12] - 97);
	wh_dig1 = (7 - ((string[4] - 48) - 1));
	wh_dig2 = 7 - ((string[7] - 48)-1);
	bl_dig1 = (7 - ((string[10] - 48) - 1));
	bl_dig2 = (7 - ((string[13] - 48) - 1));

	if (correct(string) == -1){
		printf("WRONG AT ROOK");
		return -2;
	}
	if ((board -> cell [wh_dig1][wh_ch1].type != Rook) ||(board -> cell [bl_dig1][bl_ch1].type != Rook)){
		return -1;
	}
	if (board -> cell [wh_dig1][wh_ch1].type == Rook ){
		if ( ((abs(wh_ch2 - wh_ch1) == 0) && abs(wh_dig1 - wh_dig2) <= 7) ||
		((abs(wh_dig1 - wh_dig2) == 0) && abs(wh_ch2 - wh_ch1) <= 7)){

 		   	system("clear");

			board -> cell [wh_dig1][wh_ch1].fill = 0;

			board -> cell [wh_dig2][wh_ch2].type = Rook;
			board -> cell [wh_dig2][wh_ch2].fill = 1;
			board -> cell [wh_dig2][wh_ch2].color = White;
		}
	}
	if (board -> cell [bl_dig1][bl_ch1].type == Rook){
		if ( ((abs(bl_ch2 - bl_ch1) == 0) && abs(bl_dig1 - bl_dig2) <= 7) ||
		((abs(bl_dig1 - bl_dig2) == 0) && abs(bl_ch2 - bl_ch1) <= 7)){

			board -> cell [bl_dig1][bl_ch1].fill = 0;

			board -> cell [bl_dig2][bl_ch2].type = Rook;
			board -> cell [bl_dig2][bl_ch2].fill = 1;
			board -> cell [bl_dig2][bl_ch2].color = Black;
		}
	}
	return 0;

}

int bishop (char *string, Board *board)
{
	int bl_ch1, wh_ch1, bl_dig1, wh_dig1, bl_ch2, wh_ch2, bl_dig2, wh_dig2;
	wh_ch1 = (string[3] - 97);
	wh_ch2 = (string[6] - 97);
	bl_ch1 = (string[9] - 97);
	bl_ch2 = (string[12] - 97);
	wh_dig1 = (7 - ((string[4] - 48) - 1));
	wh_dig2 = 7 - ((string[7] - 48)-1);
	bl_dig1 = (7 - ((string[10] - 48) - 1));
	bl_dig2 = (7 - ((string[13] - 48) - 1));

	if (correct(string) == -1){
		printf("WRONG AT bishop");
		return -2;
	}
	if ((board -> cell [wh_dig1][wh_ch1].type != Bishop) || (board -> cell [bl_dig1][bl_ch1].type != Bishop)){
		return -1;
	}
	if (board -> cell [wh_dig1][wh_ch1].type == Bishop ){
		if ( (abs(wh_ch2 - wh_ch1) - abs(wh_dig1 - wh_dig2) == 0)) {

 		   	system("clear");

			board -> cell [wh_dig1][wh_ch1].fill = 0;

			board -> cell [wh_dig2][wh_ch2].type = Bishop;
			board -> cell [wh_dig2][wh_ch2].fill = 1;
			board -> cell [wh_dig2][wh_ch2].color = White;
		}
	}
	if (board -> cell [bl_dig1][bl_ch1].type == Bishop){
		if ( (abs(bl_ch2 - bl_ch1) - abs(bl_dig1 - bl_dig2) == 0)){

			board -> cell [bl_dig1][bl_ch1].fill = 0;

			board -> cell [bl_dig2][bl_ch2].type = Bishop;
			board -> cell [bl_dig2][bl_ch2].fill = 1;
			board -> cell [bl_dig2][bl_ch2].color = Black;
		}
	}
	return 0;

}

int horse (char *string, Board *board)
{
	int bl_ch1, wh_ch1, bl_dig1, wh_dig1, bl_ch2, wh_ch2, bl_dig2, wh_dig2;
	wh_ch1 = (string[3] - 97);
	wh_ch2 = (string[6] - 97);
	bl_ch1 = (string[9] - 97);
	bl_ch2 = (string[12] - 97);
	wh_dig1 = (7 - ((string[4] - 48) - 1));
	wh_dig2 = 7 - ((string[7] - 48)-1);
	bl_dig1 = (7 - ((string[10] - 48) - 1));
	bl_dig2 = (7 - ((string[13] - 48) - 1));

	if (correct(string) == -1){
		printf("WRONG AT horse");
		return -2;
	}
	if ((board -> cell [wh_dig1][wh_ch1].type != Horse) ||(board -> cell [bl_dig1][bl_ch1].type != Horse)){
		return -1;
	}
	if (board -> cell [wh_dig1][wh_ch1].type == Horse ){
		if ( ((abs(wh_ch2 - wh_ch1) == 2) && abs(wh_dig1 - wh_dig2) == 1) ||
		((abs(wh_dig1 - wh_dig2) == 2) && abs(wh_ch2 - wh_ch1) == 1)){

 		   	system("clear");

			board -> cell [wh_dig1][wh_ch1].fill = 0;

			board -> cell [wh_dig2][wh_ch2].type = Horse;
			board -> cell [wh_dig2][wh_ch2].fill = 1;
			board -> cell [wh_dig2][wh_ch2].color = White;
		}
	}
	if (board -> cell [bl_dig1][bl_ch1].type == Horse){
		if ( ((abs(bl_ch2 - bl_ch1) == 2) && abs(bl_dig1 - bl_dig2) == 1) ||
		((abs(bl_dig1 - bl_dig2) == 2) && abs(bl_ch2 - bl_ch1) == 1)){

			board -> cell [bl_dig1][bl_ch1].fill = 0;

			board -> cell [bl_dig2][bl_ch2].type = Horse;
			board -> cell [bl_dig2][bl_ch2].fill = 1;
			board -> cell [bl_dig2][bl_ch2].color = Black;
		}
	}
	return 0;
}

int queen (char *string, Board *board)
{
	int bl_ch1, wh_ch1, bl_dig1, wh_dig1, bl_ch2, wh_ch2, bl_dig2, wh_dig2;
	wh_ch1 = (string[3] - 97);
	wh_ch2 = (string[6] - 97);
	bl_ch1 = (string[9] - 97);
	bl_ch2 = (string[12] - 97);
	wh_dig1 = (7 - ((string[4] - 48) - 1));
	wh_dig2 = 7 - ((string[7] - 48)-1);
	bl_dig1 = (7 - ((string[10] - 48) - 1));
	bl_dig2 = (7 - ((string[13] - 48) - 1));

	if (correct(string) == -1){
		printf("WRONG AT queen");
		return -2;
	}
	if ((board -> cell [wh_dig1][wh_ch1].type != Queen) ||(board -> cell [bl_dig1][bl_ch1].type != Queen)){
		return -1;
	}
	if (board -> cell [wh_dig1][wh_ch1].type == Queen ){
		if ( ((abs(wh_ch2 - wh_ch1) == 0) && abs(wh_dig1 - wh_dig2) <= 7) ||
		((abs(wh_dig1 - wh_dig2) == 0) && abs(wh_ch2 - wh_ch1) <= 7) ||
		(abs(wh_ch2 - wh_ch1) - abs(wh_dig1 - wh_dig2) == 0) ){

 		   	system("clear");

			board -> cell [wh_dig1][wh_ch1].fill = 0;

			board -> cell [wh_dig2][wh_ch2].type = Queen;
			board -> cell [wh_dig2][wh_ch2].fill = 1;
			board -> cell [wh_dig2][wh_ch2].color = White;
		}
	}
	if (board -> cell [bl_dig1][bl_ch1].type == Queen){
		if ( ((abs(bl_ch2 - bl_ch1) == 0) && abs(bl_dig1 - bl_dig2) <= 7) ||
		((abs(bl_dig1 - bl_dig2) == 0) && abs(bl_ch2 - bl_ch1) <= 7) ||
		(abs(bl_ch2 - bl_ch1) - abs(bl_dig1 - bl_dig2) == 0) ) {

			board -> cell [bl_dig1][bl_ch1].fill = 0;

			board -> cell [bl_dig2][bl_ch2].type = Queen;
			board -> cell [bl_dig2][bl_ch2].fill = 1;
			board -> cell [bl_dig2][bl_ch2].color = Black;
		}
	}
	return 0;

}

int king (char *string, Board *board)
{
	int bl_ch1, wh_ch1, bl_dig1, wh_dig1, bl_ch2, wh_ch2, bl_dig2, wh_dig2;
	wh_ch1 = (string[3] - 97);
	wh_ch2 = (string[6] - 97);
	bl_ch1 = (string[9] - 97);
	bl_ch2 = (string[12] - 97);
	wh_dig1 = (7 - ((string[4] - 48) - 1));
	wh_dig2 = 7 - ((string[7] - 48)-1);
	bl_dig1 = (7 - ((string[10] - 48) - 1));
	bl_dig2 = (7 - ((string[13] - 48) - 1));

	if (correct(string) == -1){
		printf("WRONG AT king");
		return -2;
	}
	if ((board -> cell [wh_dig1][wh_ch1].type != King) ||(board -> cell [bl_dig1][bl_ch1].type != King)){
		return -1;
	}
	if (board -> cell [wh_dig1][wh_ch1].type == King ){
		if ( ((abs(wh_ch2 - wh_ch1) == 0) && abs(wh_dig1 - wh_dig2) == 1) ||
		((abs(wh_dig1 - wh_dig2) == 0) && abs(wh_ch2 - wh_ch1) == 1) ||
		(abs(wh_ch2 - wh_ch1) == 1 && abs(wh_dig1 - wh_dig2) == 1) ){

 		   	system("clear");

			board -> cell [wh_dig1][wh_ch1].fill = 0;

			board -> cell [wh_dig2][wh_ch2].type = King;
			board -> cell [wh_dig2][wh_ch2].fill = 1;
			board -> cell [wh_dig2][wh_ch2].color = White;
		}
	}
	if (board -> cell [bl_dig1][bl_ch1].type == King ){
		if ( ((abs(bl_ch2 - bl_ch1) == 0) && abs(bl_dig1 - bl_dig2) == 1) ||
		((abs(bl_dig1 - bl_dig2) == 0) && abs(bl_ch2 - bl_ch1) == 1) ||
		(abs(bl_ch2 - bl_ch1) == 1 && abs(bl_dig1 - bl_dig2) == 1) ){

			board -> cell [bl_dig1][bl_ch1].fill = 0;

			board -> cell [bl_dig2][bl_ch2].type = King;
			board -> cell [bl_dig2][bl_ch2].fill = 1;
			board -> cell [bl_dig2][bl_ch2].color = Black;
		}
	}
	return 0;

}
