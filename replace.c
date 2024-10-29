#include "major1.h"

unsigned int replace_bit_position(unsigned int num, unsigned int mask, unsigned int position) {
    unsigned int mask_bit = (mask >> position) & 1;
    return (num & ~(1 << position)) | (mask_bit << position);
}
