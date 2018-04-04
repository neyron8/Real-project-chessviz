#ifndef CHESS_D
#define CHESS_D
 
typedef enum {
    Pawn,
    Rook,
    Horse,
    Bishop,
    Queen,
    King
} PieceType;

typedef enum {
    White,
    Black
} Color;

typedef enum {
    false,
    true
} Check;

typedef struct {
    check fill;
    PieceType piecetype;
    Color color;
} Cell;

typedef struct {
    Cell cell [8][8];
} Board;

#endif
