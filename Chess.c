#include<stdio.h>

int main() {
printf("\n");
int i, j;
char chessboard[8][8] = {
"LHSQKSHL",
"PPPPPPPP",
"        ",
"        ",
"        ",
"        ",
"pppppppp",
"lhskqshl" };
for(i=0; i<8; i++) {
for(j=0; j<8; j++) {
printf("%c", chessboard[i][j]);
}
printf("\n");
}
printf("\n");
return 0;
}