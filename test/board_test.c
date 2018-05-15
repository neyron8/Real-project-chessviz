#include "board.h"
#include "board_print_plain.h"
#include "ctest.h"
#include <stdio.h>

CTEST(correct_path_true, correct)
{
    // Given
    char a[] = {"1. e1-e2 e8-d7"};

    // When
    int result = correct(a);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(correct_path_false, correct)
{
    // Given
    char a[] = {"1. e1-e9 m8-d7"};

    // When
    int result = correct(a);

    // Then
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(king_check_true, king)
{
    Board place;
    make_board(&place);
    test_board(&place);
    // Given
    char a[] = {"1. e1-e2 e8-d7"};

    // When
    int result = king(a,&place);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(king_check_false, king)
{
    Board place;
    make_board(&place);
    test_board(&place);
    // Given
    char a[] = {"1. e2-e3 e6-c3"};

    // When
    int result = king(a,&place);

    // Then
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(bishop_check_true, bishop)
{
    Board place;
    make_board(&place);
    test_board(&place);
    // Given
    char a[] = {"1. c1-a3 c8-f5"};

    // When
    int result = bishop(a,&place);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(bishop_check_false, bishop)
{
    Board place;
    make_board(&place);
    test_board(&place);
    // Given
    char a[] = {"1. e2-e3 e6-c3"};

    // When
    int result = bishop(a,&place);

    // Then
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(rook_check_true, rook)
{
    Board place;
    make_board(&place);
    test_board(&place);
    // Given
    char a[] = {"1. a1-a3 h8-h3"};

    // When
    int result = rook(a,&place);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(rook_check_false, rook)
{
    Board place;
    make_board(&place);
    test_board(&place);
    // Given
    char a[] = {"1. d2-d3 e6-c3"};

    // When
    int result = rook(a,&place);

    // Then
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_check_true, queen)
{
    Board place;
    make_board(&place);
    test_board(&place);
    // Given
    char a[] = {"1. d1-e2 d8-h4"};

    // When
    int result = queen(a,&place);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_check_false, queen)
{
    Board place;
    make_board(&place);
    test_board(&place);
    // Given
    char a[] = {"1. d6-d3 e6-c3"};

    // When
    int result = queen(a,&place);

    // Then
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(horse_check_true, horse)
{
    Board place;
    make_board(&place);
    test_board(&place);
    // Given
    char a[] = {"1. b1-a3 g8-h6"};

    // When
    int result = horse(a,&place);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(horse_check_false, horse)
{
    Board place;
    make_board(&place);
    test_board(&place);
    // Given
    char a[] = {"1. a3-a6 g6-g3"};

    // When
    int result = horse(a,&place);

    // Then
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}
