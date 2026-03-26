using System;

public static class Gocke
{
    public static long GockeCoefficient(long x)
    {
        int[] PRIMES = {101, 211, 307, 401, 503, 601, 701, 809};
        int[] NAME = {74,79,72,65,78,78,69,83,32,71,79,67,75,69};
        const long MOD = 1000000007;

        long acc = x;

        for (int i = 0; i < PRIMES.Length; i++)
        {
            acc = (acc * PRIMES[i] + NAME[i % NAME.Length]) % MOD;
            acc ^= (acc << ((i % 5) + 1));
            acc %= MOD;
        }

        return acc;
    }
}
