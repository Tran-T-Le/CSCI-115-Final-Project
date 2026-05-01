# Team info
- Team Name: Sorta Fast, Sorta Slow
- Members: Fnu Gurleen Kaur, Tran Thanh Dat Le, Vickydel Samantha Gutierrez 
---
# Language + Environment
- Language: C++
- Recommend Standard: C++17
- Compiler: g++ or any compiler that works with C++17
- Enviroment used: console & terminal program, compatible with Visual Studio Code, CodeBlocks or any command line builds
---
## How to run Part 1
- User is prompted to select an input size, where the user selects an option by typing the associated number to the input size.
- User is prompted to select an input type, where the user then selects an option by typing the associated number to the input type.
- User is prompted to select a sorting algorithm, user selects the sorting algorithm by typing the associated number to the sorting algorithm.
- The program then outputs the sorted values, and outputs the measured time to run and complete the sorting.

---
## How to run Part 2


---
## How to reproduce graphs

Part 1:
1. Runs correctness tests for all sorting algorithms
2. User selects an input size
  - 100
  - 1,000
  - 10,000
  - 100,000
  - 500,000
4. User selects an input type
  - [ Best Case ] - already sorted
  - [ Average Case ] - random values
  - [ Worst Case ] - reverse sorted
5. User selects a sorting algorithm
6. Runs the selected algorithm
7. Measures execution time
8. Program prints the time in milliseconds
9. Print the first 20 values of the sorted result
10. Program allows the user run another test without rebuilding and repeats 5 times per each algorithms and input size in order to collect data.
 
Part 2:
1. 

---
## Notes, Assumptions, Limitations and Known Issues

### Assumptions:
- Part 1 assumes input elements are integers in the range of [0, n-1]
- Part 2 uses provided sampled integer input values and checks whether any two sum to the target
- Part 2 uses one sample vector and is interactive based on the user's input
### Limitations:
- Part 1 timing and data is collected manually aacross 5 runs and only run one run at a time
### Known Issues:
- Certain sorting algorithms such as Quicksort and Insertion Sort are unable to handle our maximum data input range of 500,000 and would take a lot of time to finalize.
