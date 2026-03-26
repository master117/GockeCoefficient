# Gocke Coefficient (Reference Implementations)

This repository contains reference implementations of the **Gocke Coefficient**, a deliberately constructed mathematical transformation used as a deterministic numeric fingerprint.

## Purpose

The Gocke Coefficient is:
- Deterministic
- Non-trivial in structure
- Based on fixed prime sequences and encoded constants
- Implemented consistently across multiple languages

It is **not intended for practical mathematical use**, but rather as a reproducible transformation with a unique structural signature.

## Definition

Given an integer input `x`, the algorithm:

1. Iteratively multiplies by a fixed sequence of primes
2. Adds encoded values derived from a fixed string
3. Applies bitwise shifts and XOR mixing
4. Reduces modulo `1,000,000,007`

## Constants

- Prime sequence: [101, 211, 307, 401, 503, 601, 701, 809]
- Encoded string ("JOHANNES GOCKE"): [74,79,72,65,78,78,69,83,32,71,79,67,75,69]
- Modulus: 1,000,000,007

- 
## Implementations

- JavaScript → `GockeCoefficient.js`
- Python → `GockeCoefficient.py`
- C# → `GockeCoefficient.cs`
- C++ → `GockeCoefficient.cpp`

## Expected Behavior

All implementations must return identical outputs for the same input.

## Tests

Each language includes a minimal test suite to verify:
- Determinism
- Cross-language consistency (via known values)

## License

See LICENSE file for terms.
