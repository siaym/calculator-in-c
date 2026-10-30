# 🧮 Loop-Based Calculator in C

A robust terminal-based calculator built in C.  
Features an interactive loop allowing users to perform multiple calculations in one session, with complete protection against invalid numeric inputs and division by zero.

---

## 🚀 Features

- Supports basic arithmetic operations: `+`, `-`, `*`, `/`
- **Robust Input Validation**: Safely handles non-numeric inputs without crashing or entering infinite loops.
- **Divide-by-Zero Safety**: Explicit validation when attempting division by zero.
- **Session Continuity**: Interactive loop to perform consecutive calculations.
- **Cross-Platform**: Compiles cleanly with GCC, Clang, or MSVC on Windows, Linux, and macOS.

---

## 🔧 How to Compile & Run

### Prerequisites
A C compiler supporting C99 or later (GCC, Clang, or MinGW on Windows).

### On Linux / macOS:
```bash
gcc -Wall -Wextra -pedantic -std=c99 calculator.c -o calculator
./calculator
```

### On Windows (MinGW / Git Bash / PowerShell):
```powershell
gcc -Wall -Wextra -pedantic -std=c99 calculator.c -o calculator.exe
.\calculator.exe
```

---

## 🧪 Sample Usage

```text
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
```

---

## 📄 License
Distributed under the [MIT License](LICENSE).
