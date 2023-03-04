unsigned int setbits(unsigned int x, int p, int n, unsigned int y) {
    // mask to isolate the n bits to be replaced
    unsigned int mask = ~(~0 << n) << (p-n+1);
    // clear the bits in x that will be replaced
    x &= ~mask;
    // shift the bits from y to the correct position
    y = (y & ~(~0 << n)) << (p-n+1);
    // combine the modified x and y values
    return x | y;
}

