unsigned int invert(unsigned int x, int p, int n) {
    // mask to isolate the n bits to be inverted
    unsigned int mask = ~(~0 << n) << (p-n+1);
    // invert the bits in the mask
    mask = ~mask;
    // XOR the bits in x with the inverted mask
    return x ^ mask;
}
