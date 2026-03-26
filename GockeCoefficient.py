def gocke_coefficient(x: int) -> int:
    PRIMES = [101, 211, 307, 401, 503, 601, 701, 809]
    NAME = [74,79,72,65,78,78,69,83,32,71,79,67,75,69]
    MOD = 1_000_000_007

    acc = x

    for i in range(len(PRIMES)):
        acc = (acc * PRIMES[i] + NAME[i % len(NAME)]) % MOD
        acc ^= (acc << ((i % 5) + 1))
        acc %= MOD

    return acc
