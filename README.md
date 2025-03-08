# C Programming Projects

This repository showcases a collection of C programming projects, each designed to demonstrate fundamental programming concepts, problem-solving techniques, and the versatility of the C language. The projects range from classic games to utility applications, providing both educational value and practical coding experience.

## Table of Contents

- [Project Overview](#project-overview)
  - [Guess the Number](#guess-the-number)
  - [Main Menu Project](#main-menu-project)
  - [Rock, Paper, Scissors](#rock-paper-scissors)
  - [Tic-Tac-Toe](#tic-tac-toe)
  - [Cyber Management System](#cyber-management-system)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Compilation and Execution](#compilation-and-execution)
- [Project Details](#project-details)
  - [Guess the Number](#guess-the-number-1)
  - [Main Menu Project](#main-menu-project-1)
  - [Rock, Paper, Scissors](#rock-paper-scissors-1)
  - [Tic-Tac-Toe](#tic-tac-toe-1)
  - [Cyber Management System](#cyber-management-system-1)
- [Resources and Further Reading](#resources-and-further-reading)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

### Guess the Number

A simple game where the player attempts to guess a randomly generated number within a specified range. The program provides feedback on whether the guess is too high, too low, or correct.

### Main Menu Project

A template for console-based applications that require a main menu interface. This project demonstrates how to navigate between different functionalities using a text-based menu system.

### Rock, Paper, Scissors

An implementation of the classic hand game where the player competes against the computer. The program determines the winner based on standard game rules and keeps track of the score.

### Tic-Tac-Toe

A two-player game where participants take turns marking spaces in a 3×3 grid. This project includes game logic to check for win conditions and handles invalid moves.

### Cyber Management System

A management system designed for cyber cafes to track user sessions, billing, and system usage. This project demonstrates file handling, data structures, and user authentication mechanisms.

## Getting Started

### Prerequisites

To compile and run these projects, you need:

- A C compiler (e.g., GCC)
- A command-line interface (CLI) or integrated development environment (IDE) that supports C programming

### Compilation and Execution

1. **Clone the repository:**

   ```bash
   git clone https://github.com/Raimal-Raja/C-Projects.git
   cd C-Projects
   ```

2. **Compile the desired project:**

   ```bash
   gcc -o output_filename project_filename.c
   ```

   Replace `output_filename` with your preferred name for the compiled program and `project_filename.c` with the name of the project file.

3. **Run the compiled program:**

   ```bash
   ./output_filename
   ```

## Project Details

### Guess the Number

- **File:** `Guess_number.c`
- **Description:** The program generates a random number within a specified range, and the player attempts to guess it. After each guess, the program indicates whether the guess was too high, too low, or correct.
- **Concepts Demonstrated:**
  - Random number generation
  - Input/output operations
  - Control flow with loops and conditionals

### Main Menu Project

- **File:** `Main_Menu_Project.c`
- **Description:** A template for applications requiring a main menu to navigate between different functionalities. It showcases how to implement a text-based user interface.
- **Concepts Demonstrated:**
  - Function pointers
  - Menu-driven program design
  - User input validation

### Rock, Paper, Scissors

- **File:** `Rock_Paper_Scissor.c`
- **Description:** Simulates the Rock, Paper, Scissors game against the computer. The program randomly selects an option, compares it against the player's choice, and declares the winner.
- **Concepts Demonstrated:**
  - Random selection
  - Conditional statements
  - Loop constructs

### Tic-Tac-Toe

- **File:** `Tic_Tac_Toe.c`
- **Description:** A two-player Tic-Tac-Toe game that allows players to input their moves, checks for win conditions, and displays the game board after each move.
- **Concepts Demonstrated:**
  - Multidimensional arrays
  - Game logic implementation
  - User interaction

### Cyber Management System

- **File:** `cyber_management.c`
- **Description:** A management system tailored for cyber cafes to monitor user sessions, calculate billing, and manage system resources. It includes features like user login/logout, session tracking, and billing calculations.
- **Concepts Demonstrated:**
  - File handling
  - Structs and data management
  - User authentication

## Resources and Further Reading

- [C Programming Language - Wikipedia](https://en.wikipedia.org/wiki/C_(programming_language))
- [International Obfuscated C Code Contest](https://en.wikipedia.org/wiki/International_Obfuscated_C_Code_Contest)
- [C Programming Tutorials - GeeksforGeeks](https://www.geeksforgeeks.org/c-programming-language/)

## Contributing

Contributions are welcome! If you have suggestions for improvements or new projects to add, please fork the repository and submit a pull request. Ensure that your code follows the established coding conventions and includes appropriate comments.

## License

This project is licensed under the MIT License. See the `LICENSE` file for more details.

---
