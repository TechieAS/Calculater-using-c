# Calculator Program in C

This repository contains a **simple calculator program** written in C. The program allows users to perform basic arithmetic operations interactively and repeatedly.

## Features
- **Four Arithmetic Operations**: Addition (`+`), Subtraction (`-`), Multiplication (`*`), and Division (`/`).
- **Modular Functions**: Each operation is handled by a separate function for clarity and reusability.
- **Repeat Functionality**: Users can choose to perform calculations multiple times.

## How to Use
1. Compile the program using:
   ```bash
   gcc calculator.c -o calculator
   ```
2. Run the program:
   ```bash
   ./calculator
   ```
3. Follow the instructions to:
   - Enter the operator (`+`, `-`, `*`, `/`).
   - Input two numbers for the calculation.
   - View the result and choose whether to continue or exit.

## Sample Output
```
Enter the operator:(+,-,*,/): +
Enter a number: 10
Enter a number: 5
Result: 10 + 5 = 15
Do you want to continue?
1 - Yes
2 - No
```
