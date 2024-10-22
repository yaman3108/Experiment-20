#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void s_sort(int *a, int el) {
    for (int i = 0; i < el - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < el; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(&a[i], &a[minIndex]);
        }
    }
}

int main() {
    int nel;
    cout << "No. of elements: ";
    cin >> nel;
    int a[nel]; // Declare array after reading the size

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < nel; i++) {
        cin >> a[i];
    }

    s_sort(a, nel); // Sort the array

    cout << "Sorted array: " << endl;
    for (int i = 0; i < nel; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
