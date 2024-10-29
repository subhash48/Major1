#include "major1.h"

bool is_palindrome(unsigned int num) {
    unsigned int reversed = reverse_bits(num);
    return num == reversed;
}
