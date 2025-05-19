bool isPowerOfFour(int n)
{
    return n <= 0 ? false : n == 1   ? true
                        : n % 4 == 0 ? isPowerOfFour(n / 4)
                                     : false;
}