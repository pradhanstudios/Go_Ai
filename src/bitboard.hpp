#include "constants.hpp"

typedef struct Bitboard {
    uint64_t bitboards[9];

    Bitboard(
        uint64_t bb1=0ULL,
        uint64_t bb2=0ULL,
        uint64_t bb3=0ULL,
        uint64_t bb4=0ULL,
        uint64_t bb5=0ULL,
        uint64_t bb6=0ULL,
        uint64_t bb7=0ULL,
        uint64_t bb8=0ULL,
        uint64_t bb9=0ULL
    ) {
        bitboards[0] = bb1;
        bitboards[1] = bb2;
        bitboards[2] = bb3;
        bitboards[3] = bb4;
        bitboards[4] = bb5;
        bitboards[5] = bb6;
        bitboards[6] = bb7;
        bitboards[7] = bb8;
        bitboards[8] = bb9;
    }

    inline Bitboard operator+(const Bitboard &bb) const {
        
    }

    inline Bitboard operator-(const Bitboard &bb) const {

    }
    
    inline Bitboard operator*(const Bitboard &bb) const {
        
    }

    inline Bitboard operator/(const Bitboard &bb) const {
        
    }

    inline Bitboard operator|(const Bitboard& bb) const {
        Bitboard res = 0ULL;
        for (int i = 0; i < 9; i++) res.bitboards[i] = bitboards[i] | bb.bitboards[i];
        return res;
    }

    inline Bitboard operator&(const Bitboard& bb) const {
        Bitboard res = 0ULL;
        for (int i = 0; i < 9; i++) res.bitboards[i] = bitboards[i] & bb.bitboards[i];
        return res;
    }

    inline Bitboard operator^(const Bitboard& bb) const {
        Bitboard res = 0ULL;
        for (int i = 0; i < 9; i++) res.bitboards[i] = bitboards[i] ^ bb.bitboards[i];
        return res;
    }

    inline Bitboard operator~() const {
        Bitboard res = 0ULL;
        for (int i = 0; i < 9; i++) res.bitboards[i] = ~bitboards[i];
        return res;
    }

    inline Bitboard operator>>(int shift) const {
        
    }

    inline Bitboard operator<<(int shift) const {
        
    }

    inline int count() const {
        int c = 0;
        for (int i = 0; i < 9; i++) c += __builtin_popcountll(bitboards[i]);
        return c;
    }

    inline int lsb() const {
        // skip to the bitboard with the lsb 
        int i;
        for (i = 0; i < 9, !bitboards[i]; i++);
        #ifndef RELEASE
        assert(bitboards[i]); // we should never be calling lsb on an empty bitboard
        #endif
        return __builtin_ctzll(bitboards[i]);
    }


} Bitboard;