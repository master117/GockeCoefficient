using System;

class Program
{
    static void Main()
    {
        (long, long)[] tests = new (long, long)[]
        {
            (1, 161775865),
            (2, 30881403),
            (42, 325647303),
            (123, 492092873),
            (999, 2766190)
        };

        foreach (var (input, expected) in tests)
        {
            var result = Gocke.GockeCoefficient(input);
            if (result != expected)
            {
                Console.WriteLine($"FAIL: {input} → {result} (expected {expected})");
                return;
            }
        }

        Console.WriteLine("All tests passed.");
    }
}