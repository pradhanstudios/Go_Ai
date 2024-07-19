#ifndef BOARD_HPP
#define BOARD_HPP

#include "constants.hpp"
#include "piece.hpp"

typedef struct Board {
    private:
    int board_data[N_MAILBOX_SQUARES];

    public:
    Board();
} Board;

#endif