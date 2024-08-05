# Bank Management System

## Overview
This Bank Management System is a simple console application developed in C++. It allows users to create accounts, deposit and withdraw funds, and display account details. The application demonstrates basic object-oriented programming concepts, including classes and methods, as well as file handling and basic input/output operations in C++.

## Concepts Learned
- **Object-Oriented Programming (OOP)**: Understanding and implementing classes and objects.
  - **Classes and Objects**: `Account` and `Bank` classes represent the main components of the system.
  - **Encapsulation**: Data and methods are encapsulated within classes.
  - **Methods**: Functions like `deposit`, `withdraw`, `display`, and others to operate on object data.

- **Vectors**: Using the `vector` container from the Standard Template Library (STL) to store and manage multiple account objects.

- **File Handling**: Though not included in the initial code, this project can be extended to include file handling for persistent storage of account information.

- **Basic Input/Output**: Using `cin` and `cout` for interacting with the user and displaying information.

- **Control Structures**: Utilizing loops (`while` loop) and conditional statements (`if-else` statements and `switch` statement) to manage the flow of the program.

## How to Compile and Run
1. **Requirements**: Ensure you have a C++ compiler installed (e.g., GCC).

2. **Compilation**:
    Open your terminal and navigate to the directory where your source code file (`bank_management_system.cpp`) is located. Run the following command to compile the program:
    ```sh
    g++ -o bank_management_system bank_management_system.cpp
    ```

3. **Execution**:
    After successful compilation, run the executable:
    ```sh
    ./bank_management_system
    ```

4. **Usage**:
    - Follow the on-screen menu to create accounts, deposit, withdraw, and display account details.
    - Enter the corresponding numbers to navigate through the options.

## Menu Options
1. **Create Account**: Allows the user to create a new bank account by providing the account number, account holder's name, and initial balance.
2. **Deposit**: Enables the user to deposit a specific amount into an existing account.
3. **Withdraw**: Allows the user to withdraw a specific amount from an existing account, ensuring there are sufficient funds.
4. **Display Account**: Displays the details of a specific account based on the account number.
5. **Exit**: Exits the application.

## Future Enhancements
- **Persistent Storage**: Implement file handling to save account details to a file and load them when the application starts.
- **Data Validation**: Add input validation to ensure data integrity (e.g., checking for negative deposits/withdrawals, valid account numbers, etc.).
- **Enhanced User Interface**: Improve the console interface for better user experience.
- **Exception Handling**: Incorporate exception handling to manage potential runtime errors.

## License
This project is open-source and available under the [MIT License](LICENSE).

## Acknowledgments
This project is inspired by the basic concepts of banking systems and object-oriented programming in C++.
