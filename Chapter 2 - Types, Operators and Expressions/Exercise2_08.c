unsigned int rightrot(unsigned int x, int n) {
    // calculate the number of bits in x
    int num_bits = sizeof(unsigned int) * 8;
    // if n is greater than the number of bits in x, adjust it
    if (n > num_bits) {
        n %= num_bits;
    }
    // create a mask for the rightmost n bits
    unsigned int mask = ~(~0 << n);
    // get the rightmost n bits of x
    unsigned int right_bits = x & mask;
    // shift x to the right by n bits
    x >>= n;
    // shift the rightmost n bits to the left by the number of remaining bits
    right_bits <<= (num_bits - n);
    // combine the shifted values
    return x | right_bits;
}
