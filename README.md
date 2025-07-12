# calculator-in-c
# 🧮 Loop-Based Calculator in C

A simple terminal-based calculator built using the C programming language.  
This version includes a loop, allowing users to perform multiple calculations without restarting the program.

---

## 🚀 Features

- Supports `+`, `-`, `*`, `/` operations
- Input validation for divide-by-zero
- Loop to perform multiple calculations
- Simple and beginner-friendly code

---

## 🔧 How to Compile & Run

### On Linux or macOS:
```bash
gcc calculator.c -o calculator
./calculator

#On Windows (MinGW / Git Bash / PowerShell):

gcc calculator.c -o calculator.exe
./calculator.exe (IN VS CODE INTERMINAL AFTER OPENING THE FILE )

Enter first number: 12
Enter operator (+, -, *, /): *
Enter second number: 5
Result: 60.00
Do you want to calculate again? (y/n): y

Enter first number: 20
Enter operator (+, -, *, /): /
Enter second number: 0
Error: Cannot divide by zero.
Do you want to calculate again? (y/n): n

