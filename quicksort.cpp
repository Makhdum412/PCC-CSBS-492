#include <iostream>

using namespace std;

class QuickSort {
private:
    int* data;
    int size;

public:
    // Constructor
    QuickSort(int arr[], int arraySize) : data(arr), size(arraySize) {}

    // Method to perform Quick Sort
    void sort() {
        quickSort(0, size - 1);
    }

    // Method to print the sorted array
    void printSorted() const {
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

private:
    // Recursive function to partition and sort the array
    void quickSort(int low, int high) {
        if (low < high) {
            int partitionIndex = partition(low, high);

            // Recursively sort the elements before and after the partition
            quickSort(low, partitionIndex - 1);
            quickSort(partitionIndex + 1, high);
        }
    }

    // Function to partition the array and return the pivot index
    int partition(int low, int high) {
        int pivot = data[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; ++j) {
            if (data[j] < pivot) {
                ++i;
                swap(data[i], data[j]);
            }
        }

        swap(data[i + 1], data[high]);
        return i + 1;
    }
};

int main() {
    // Example usage
    int inputArray[] = {12, 4, 5, 6, 7, 3, 1, 15};
    int arraySize = sizeof(inputArray) / sizeof(inputArray[0]);

    QuickSort quickSortObj(inputArray, arraySize);

    cout << "Original array: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << inputArray[i] << " ";
    }
    cout << endl;

    quickSortObj.sort();

    cout << "Sorted array: ";
    quickSortObj.printSorted();

    return 0;
}

