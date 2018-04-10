#ifndef CHESS_XD
#define CHESS_XD
 
typedef enum {
    Pawn,
    Rook,
    Horse,
    Bishop,
    Queen,
    King
} Type;

typedef enum {
    White,
    Black
} Color;

typedef enum {
    false,
    true
} Be_Not;

typedef struct {
    Be_Not fill;
    Type type;
    Color color;
} Cell;

typedef struct {
    Cell cell [8][8];
} Board;

#endif
