#ifndef CHESS_D
#define CHESS_D
 
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
} Check;

typedef struct {
    Check fill;
    Type type;
    Color color;
} Cell;

typedef struct {
    Cell cell [8][8];
} Board;

#endif
