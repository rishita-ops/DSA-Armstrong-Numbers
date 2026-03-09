# DSA — Armstrong Numbers

A focused implementation of the **Armstrong Number** problem, one of the classic number-theory problems frequently seen in DSA interviews and competitive programming. This repository walks through the concept, the algorithm, its complexity, and a clean implementation — written with clarity and correctness as the primary goals.

---

## What is an Armstrong Number?

An **Armstrong number** (also called a *Narcissistic number*) of `n` digits is a number that equals the sum of its own digits, each raised to the power of `n`.

**Formally:**

```
A number X with digits d₁, d₂, ..., dₙ is Armstrong if:
X = d₁ⁿ + d₂ⁿ + d₃ⁿ + ... + dₙⁿ
```

**Examples:**

| Number | Digits (n) | Calculation | Armstrong? |
|--------|-----------|-------------|------------|
| 1      | 1         | 1¹ = 1                          | ✅ Yes |
| 153    | 3         | 1³ + 5³ + 3³ = 1 + 125 + 27 = 153 | ✅ Yes |
| 370    | 3         | 3³ + 7³ + 0³ = 27 + 343 + 0 = 370 | ✅ Yes |
| 1634   | 4         | 1⁴ + 6⁴ + 3⁴ + 4⁴ = 1 + 1296 + 81 + 256 = 1634 | ✅ Yes |
| 123    | 3         | 1³ + 2³ + 3³ = 1 + 8 + 27 = 36 ≠ 123 | ❌ No |

---

## Algorithm

The approach is straightforward and efficient:

1. **Count digits** — Determine `n`, the total number of digits in the input number.
2. **Extract & compute** — Iteratively extract each digit using `num % 10`, raise it to the power `n`, and accumulate the sum.
3. **Compare** — If the computed sum equals the original number, it is an Armstrong number.

```
function isArmstrong(num):
    n     ← count_digits(num)
    sum   ← 0
    temp  ← num

    while temp != 0:
        digit ← temp % 10
        sum   ← sum + digit^n
        temp  ← temp / 10

    return sum == num
```

---

## Complexity Analysis

| Metric | Complexity |
|--------|------------|
| Time   | **O(log n)** — We iterate once to count digits and once to process them; both loops run proportional to the number of digits, which is `log₁₀(n)` |
| Space  | **O(1)** — No auxiliary data structures; only a fixed number of variables are used |

---

## Repository Structure

```
DSA-Armstrong-Numbers/
│
├── src/
│   └── ArmstrongNumber.java       # Core implementation
│
├── README.md                      # Project documentation
└── .gitignore
```

---

## How to Run

**Prerequisites:** Java 8+ (or the relevant language runtime)

```bash
# Clone the repository
git clone https://github.com/rishita-ops/DSA-Armstrong-Numbers.git
cd DSA-Armstrong-Numbers

# Compile
javac src/ArmstrongNumber.java

# Run
java -cp src ArmstrongNumber
```

**Sample Output:**
```
Enter a number: 153
153 is an Armstrong number.

Enter a number: 123
123 is not an Armstrong number.
```

---

## Key Concepts Covered

- **Digit extraction** using modulo arithmetic (`num % 10`)
- **Integer power computation** without built-in library dependency
- **Loop-based digit counting** with `O(log n)` traversal
- Handling of **single-digit numbers** (all single-digit numbers are trivially Armstrong)

---

## Known Armstrong Numbers (up to 4 digits)

```
1, 2, 3, 4, 5, 6, 7, 8, 9,
153, 370, 371, 407,
1634, 8208, 9474
```

---

## Why This Problem Matters in DSA

Armstrong numbers sit at the intersection of **number theory** and **digit manipulation** — a combination that appears frequently in interview problems. The underlying skill — decomposing a number digit by digit and applying a function — is reused in problems like:

- Digit DP
- Sum of digits
- Self-describing numbers
- Palindrome number checks

Understanding this problem well builds the muscle memory for cleaner, faster solutions in those domains.

---

## Contributing

Contributions are welcome. If you'd like to add implementations in other languages (Python, C++, Go, etc.) or add test cases, feel free to open a pull request.

1. Fork the repo
2. Create your branch: `git checkout -b feature/your-feature`
3. Commit your changes: `git commit -m 'Add your feature'`
4. Push to the branch: `git push origin feature/your-feature`
5. Open a Pull Request

---

## License

This project is open-source and available under the [MIT License](LICENSE).

---

*Built as part of a structured DSA practice series.*
