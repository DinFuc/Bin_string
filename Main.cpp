long long calculateString(long long n, long long m)
{
    long long res = 1, pow2 = 2;
    for(int i = 0; i < n; i++){
        res = res * pow2 + pow2 - res - 1;
        res %= m;
        pow2 = (pow2 * pow2) % m;
    }
    return res;
}

