# Assignment 2: Variables, Data Types, and Operators

## Objective
The objective of this assignment is to practice declaring variables, using different data types, and applying basic arithmetic operators in C++.

## Task
Write a program that prompts the user to enter two numbers and then calculates and displays the sum, difference, product, and quotient of these two numbers. The output of the program should clearly show the results of these calculations.

### Example Output:


```
Enter the first number: 5
Enter the second number: 3
Sum: 8
Difference: 2
Product: 15
Quotient: 1.66667
```

### Guidance:

Use appropriate data types for storing numbers. Consider edge cases (like division by zero).
Utilize std::cin for input and std::cout for output.
Ensure your program handles user input gracefully and displays a clear output.

## Checking solution
1. Set up your C++ development environment if you haven’t already.
2. Modify file `include/solution.h` and function in it.
3. Use `std::cout` and std::cin for printing output to the console.
4. Compile and run your program to ensure it works correctly:
```shell
cmake -S . -B build
cmake --build build
./build/main
```

### Running the Tests
To run the tests, follow these steps:

1. Make sure you have CMake installed on your system.
2. Navigate to the directory containing your CMakeLists.txt file and open a terminal.
3. Run the following commands:
```shell
cmake -S . -B build
cmake --build build
./build/solution_test
```
4. The tests should run, and you should see the output indicating whether they passed or failed.

