
class Solution
{
public:
    int countPrimes(int n)
    {
        if (n <= 2)
        {
            return 0;
        }

        vector<bool> primes(n, true);
        primes[0] = primes[1] = false;

        for (int p = 2; p * p < n; ++p)
        {
            if (primes[p])
            {
                for (int i = p * p; i < n; i += p)
                {
                    primes[i] = false;
                }
            }
        }

        return count(primes.begin(), primes.end(), true);
    }
};