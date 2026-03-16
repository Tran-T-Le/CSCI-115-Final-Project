#include <iostream>

using namespace std;

void selectionSort(int arr[], int size){
    int min;
    // loop through array
    for (int i = 0; i < size; i++){
        // set min to current index
        min = arr[i];
        // loop through rest of array
        for (int j = i; j < size; j++){
            // if current index is less than min, swap
            if (arr[j] < min) {
                // swap i and j
                min = arr[j];
                arr[j] = arr[i];
                // set i to min
                arr[i] = min;
            }
        }
    }

return;}
// -------------------Selection Sort testing area--------------------------
/*int main(){
    int arr[10] = { 64, 25, 12, 22, 11, 90, 45, 32, 78, 56 };
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)        cout << arr[i] << " ";
    return 0;
}
    */
