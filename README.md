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
- User is prompted to select an input size, where the user selects an option by typing the associated number assigned to the input size.
    - [1]100
    - [2]1,000
    - [3]10,000
    - [4]100,000
    - [5]500,000
- User is prompted to select an input type, where the user then selects an option by typing the associated number assigned to the input type.
    - [1][ Best Case ] - already sorted
    - [2][ Average Case ] - random values
    - [3][ Worst Case ] - reverse sorted
- User is prompted to select a sorting algorithm, user selects the sorting algorithm by typing the associated number assigned to the sorting algorithm.
  - [1] Bubble Sort
  - [2] Selection Sort
  - [3] Insertion Sort
  - [4] Merge Sort
  - [5] Quick Sort
  - [6] Heap Sort
  - [7] Counting Sort
  - [8] Radix Sort
- The program then outputs the sorted values, and outputs the measured time in milliseconds to run and complete the sorting.

---
## How to run Part 2


---
## How to reproduce graphs

Part 1:
1. Runs correctness tests for all sorting algorithms
2. User selects an input size
4. User selects an input type
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
