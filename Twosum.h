#ifndef TWOSUM_H_INCLUDED
#define TWOSUM_H_INCLUDED
#include <vector>
using namespace std;

// tries every possible pair
bool bruteForce(vector<int> nums, int target);

// sorts the numbers first, then checks from both ends
bool twoPointer(vector<int> nums, int target);

// prints all numbers
void printNums(vector<int> nums);


#endif // TWOSUM_H_INCLUDED
