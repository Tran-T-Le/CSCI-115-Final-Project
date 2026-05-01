#include <iostream>
#include <vector>
#include <algorithm>
#include "Twosum.h"
using namespace std;

// function that checks every possible pair in the vector.
bool bruteForce(vector<int> nums, int target) {
    // first loop picks the first number
    for (int i = 0; i < nums.size() - 1; i++) {
        // second loop picks the second number after the first one
        for (int j = i + 1; j < nums.size(); j++) {
            // if two values add up then it returns true
            if (nums[i] + nums[j] == target) {
                return true;
            }
        }
    }
    return false;
}

// faster method.
// It sorts the numbers first, then uses one pointer from the left
// and one pointer from the right.
bool twoPointer(vector<int> nums, int target) {
    // sort the numbers from smallest to largest
    sort(nums.begin(), nums.end());

    // left starts at the beginning of the vector
    int left = 0;

    // right starts at the end of the vector
    int right = nums.size() - 1;

    // keep checking until the pointers meet
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return true;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    // if no pair adds up to the target, return false
    return false;
}

// prints all numbers in the vector.
void printNums(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    // sample numbers
    vector<int> nums = {8, 3, 1, 11, 15, 6, 4, 9, 13};

    // user's input for the value they want to add up
    int target;

    cout << "Numbers: ";
    printNums(nums);

    cout << "Enter target: ";
    cin >> target;

    // store the result of both
    bool answer1 = bruteForce(nums, target);
    bool answer2 = twoPointer(nums, target);

    cout << "Brute Force Solution: ";
    if (answer1) {
        cout << "pair exist" << endl;
    } else {
        cout << "no pair was found" << endl;
    }

    cout << "Two Pointer Solution: ";
    if (answer2) {
        cout << "pair exists" << endl;
    } else {
        cout << "no pair was found" << endl;
    }
    return 0;
}

