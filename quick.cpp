#include <iostream>
#include <vector>

using namespace std;

// Function to swap two elements
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low]; // Choosing the first element as pivot
    int i = low;          // 'i' will track the boundary for elements less than or equal to pivot

    for (int j = low + 1; j <= high; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++; // Increment 'i'
            swap(arr[i], arr[j]); // Swap arr[i] and arr[j]
        }
    }

    // Swap pivot element with the element at 'i' to place pivot at correct position
    swap(arr[i], arr[low]);
    
    return i; // Return the partition point
}

// Quick Sort function
void quickSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        // Partition the array and get the pivot index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);   // Sort the left part
        quickSort(arr, pi + 1, high);  // Sort the right part
    }
}

// Function to print the array
void printArray(const vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {10, 80, 30, 90, 40, 50, 70};

    cout << "Unsorted array: ";
    printArray(arr);

    quickSort(arr, 0, arr.size() - 1);  // Call the quick sort function

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
