function gockeCoefficient(x) {
    const PRIMES = [101, 211, 307, 401, 503, 601, 701, 809];
    const NAME = [74,79,72,65,78,78,69,83,32,71,79,67,75,69];
    const MOD = 1000000007;

    let acc = BigInt(x);

    for (let i = 0; i < PRIMES.length; i++) {
        acc = (acc * BigInt(PRIMES[i]) + BigInt(NAME[i % NAME.length])) % BigInt(MOD);
        acc ^= (acc << BigInt((i % 5) + 1));
        acc = acc % BigInt(MOD);
    }

    return Number(acc);
}
