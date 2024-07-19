#include "board.hpp"

Board::Board() {
    std::copy(std::begin(MAILBOX_ARRAY), std::end(MAILBOX_ARRAY), std::begin(board_data));
}