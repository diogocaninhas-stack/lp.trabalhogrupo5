# Copilot Instructions for lp.trabalhogrupo5

## Project Overview
This is a C programming lab assignment (Grupo 5) implementing menu-driven operations on an array of 18 integers (range -1 to 18). The program reads user input, displays a menu, and performs various array manipulations based on user choice.

## Architecture
- **mainx.c**: Entry point with main function, menu loop, and switch cases for options 1-6 (currently empty).
- **functions-team-x.h**: Header declaring functions; includes "functions-team-x.c" for simplicity.
- **functions-team-x.c**: Implementation of all utility functions (menu, array I/O, operations).
- **Makefile**: Currently empty; manual compilation required.

## Build and Run
Compile manually: `gcc mainx.c functions-team-x.c -o main`  
Run: `./main`

## Key Patterns
- **Array Handling**: Fixed size 18, validated input (-1 to 18). Use `lerarray()` for input, `escreverarray()` for output.
- **Function Structure**: Implement each menu option as a separate function in `functions-team-x.c`, declare in header, call from mainx.c switch cases.
- **Menu Options**:
  1. Generate 18x18 matrix with row permutations.
  2. Compute square roots of array elements.
  3. Sort first half ascending.
  4. Sum first and second halves (halve size).
  5. Calculate median.
  6. Filter non-multiples of 3.
- **Language**: Portuguese for user prompts and comments.
- **Incomplete**: `medianaarray()` started but unfinished; complete similar functions.

## Conventions
- Functions take array and size parameters.
- Use standard C I/O (printf/scanf).
- No error handling beyond input validation in `lerarray()`.

## Examples
- To add option 5: Implement `medianaarray()` in functions-team-x.c, add prototype to .h, call in mainx.c case 5.
- Array operations: Loop through indices 0-17, handle halves at index 9.</content>
<parameter name="filePath">/mnt/c/Users/Diogo/Documents/GitHub/lp.trabalhogrupo5/.github/copilot-instructions.md