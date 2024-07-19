#ifndef PIECE_HPP
#define PIECE_HPP

enum PIECE : int {
    INVALID = -1,
    EMPTY,
    WHITE,
    BLACK
};

inline bool is_white(int piece) {
    return piece & WHITE;
}

inline bool is_black(int piece) {
    return piece & BLACK;
}

inline bool is_empty(int piece) {
    return piece == EMPTY;
}

#endif