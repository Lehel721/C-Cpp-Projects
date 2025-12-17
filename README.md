
> **Developed by Lehel Dsilva**
> *A persistent, object-oriented banking application built in C++.*

## Project Overview
This is a console-based banking application designed to simulate core financial operations such as account creation, deposits, withdrawals, and account closures. Unlike simple runtime programs, this system implements **persistent data storage** using file handling, ensuring that user records and balances are saved securely between sessions.

## Key Technical Features
* **Persistent Storage:** Utilizes C++ File I/O (`fstream`) to serialize and deserialize account objects, ensuring data survives system restarts.
* **Object-Oriented Design:** Follows strict encapsulation principles; the `Bank` class manages the lifecycle of `Account` objects, separating business logic from data storage.
* **Exception Handling:** Custom error handling for edge cases (e.g., `InsufficientFunds` exception during withdrawals).

## Running Commands

# Compile
g++ BankProject.cpp -o BankProject

# Run
./BankProject

> **Developed by Lehel Dsilva**
> *A state-retaining arithmetic tool built in C.*

## Project Overview
This project implements a command-line calculator that supports continuous state operations**. Unlike standard arithmetic programs that perform one calculation and exit, this system retains the result in memory, allowing users to perform chained operations (e.g., Addition followed by Multiplication on the new total) in a continuous loop until explicitly terminated.

## Key Technical Features
* **State Retention:** The program maintains a persistent result variable throughout the runtime lifecycle, enabling sequential processing of complex expressions.
* **Input Validation:** Includes specific checks for undefined mathematical operations (e.g., Division by Zero) to prevent runtime crashes.
* **Type Safety:** Manages mixed-mode arithmetic (Float vs Integer) for precise calculations while enabling integer-specific operations like Modulus.

## Running Commands

# Compile
gcc Calculator.c -o Calc

# Run
./Calc
