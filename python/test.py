from gocke import gocke_coefficient

tests = [
    (1, 161775865),
    (2, 30881403),
    (42, 325647303),
    (123, 492092873),
    (999, 2766190),
]

for inp, expected in tests:
    result = gocke_coefficient(inp)
    assert result == expected, f"FAIL: {inp} → {result} (expected {expected})"

print("All tests passed.")