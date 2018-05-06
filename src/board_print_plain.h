#ifndef CHESS_PLAIN
#define CHESS_PLAIN

void make_board(Board* board);
void standard_board(Board* board);
void print(Board board);
int move_pawn(char *string, Board *board);
int correct(char *string);
int test_board(Board* board);
int bishop (char *string, Board *board);
int rook (char *string, Board *board);
int horse (char *string, Board *board);
int queen (char *string, Board *board);
int king (char *string, Board *board);

#endif
