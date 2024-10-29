#include "major1.h"

unsigned int reverse_bits(unsigned int num) {
    unsigned int result = 0;
    for (int i = 0; i < 32; i++) {
        result <<= 1;
        result |= (num & 1);
        num >>= 1;
    }
    return result;
}
