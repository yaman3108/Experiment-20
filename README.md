# Experiment 20



## Aim:
To study and implement Sorting Algorithm


## Apparatus:
Vs Code, Github


## Theory:

## Selection sort:

Selection Sort is a simple comparison-based sorting algorithm used to arrange elements in a list in a specified order. It divides the array into a sorted and an unsorted region, and iteratively selects the smallest (or largest, depending on the sorting order) element from the unsorted region, then swaps it with the first element of the unsorted region, expanding the sorted region by one element.

## Explanation:

### How It Works:

The algorithm repeatedly selects the smallest (or largest) element from the unsorted part of the list and swaps it with the first unsorted element.
The process is repeated until the entire array is sorted.

### Steps of the Algorithm:

1.Start with the first element, assuming it is the minimum.
2.Compare it with all other elements to find the actual minimum.
3.Swap the minimum element found with the first element.
4.Move to the next element and repeat the process for the remaining unsorted portion of the array.
5.Continue this process until the entire array is sorted.


## Insertion sort:

Insertion Sort is a simple comparison-based sorting algorithm that builds the final sorted array one element at a time. The algorithm works by taking one element from the unsorted part of the array and inserting it into its correct position in the sorted part.

## Explanation:

### How It Works:

Insertion sort iterates through the array, considering one element at a time.
It places each element into its correct position relative to the already sorted portion of the array.
Elements are shifted to make room for the element being inserted if needed.

### Steps of the Algorithm:

1.Start from the second element (index 1) because the single-element subarray at index 0 is already "sorted."
2.Compare the current element with the elements in the sorted portion and shift larger elements to the right.
3.Insert the current element at the correct position in the sorted portion.
4.Repeat the process for all elements until the entire array is sorted.


## Bubble sort:

Bubble Sort is a straightforward sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The process continues until the list is sorted, with each pass placing the largest unsorted element to its correct position.

## Explanation:

### How It Works:

The algorithm traverses the array multiple times, comparing adjacent elements.
If an element is greater than the next element, the two are swapped.
The largest unsorted element "bubbles up" to its correct position at the end of each pass.
The algorithm continues to iterate through the array until no swaps are needed, indicating that the array is sorted.

### Steps of the Algorithm:

1.Start from the first element and compare it with the next element.
2.If the first element is larger than the second, swap them.
3.Move to the next pair of elements and repeat the comparison and swap if needed.
4.At the end of the first pass, the largest element will be at the last index.
5.Repeat the process, excluding the last sorted element each time.
6.Continue until the entire array is sorted.


## Code:

### Selection sort: 
```
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

```
### Output:
<img width="1089" alt="Screenshot 2024-10-22 at 1 52 53 PM" src="https://github.com/user-attachments/assets/c5557df8-84fb-408e-a6e2-781907d9ee34">


### Insertion sort:
```
#include <iostream>
using namespace std;
 
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
 
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
 
    insertionSort(arr, n);
 
    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
 
    return 0;
}
```
### Output:
<img width="1102" alt="Screenshot 2024-10-22 at 1 54 08 PM" src="https://github.com/user-attachments/assets/f54957d3-3703-43a8-a3be-8cabd7c8ccc6">

### Bubble sort:
```
#include<iostream>
using namespace std;
 
void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int elements;
    cout<<"How many elements in the array? :";
    cin>>elements;
    int array[elements];
    cout<<"Enter elements:";
    for(int i=0;i<elements;i++){
        cin>>array[i];
    }
    for(int i=0;i<elements;i++){
        cout<<array[i]<<" ";
    }
    int n=0;
    while(n!=elements){
        for(int i=0;i<elements-n;i++){
            if(array[i]>array[i+1]){
                swap(&array[i],&array[i+1]);
            }
        }
        n++;
    }
    cout<<"\nSorted array is:"<<endl;
    for(int i=0;i<elements;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
```
### output:
<img width="1079" alt="Screenshot 2024-10-22 at 1 55 03 PM" src="https://github.com/user-attachments/assets/36047824-99d3-49b7-984f-92cc021e782a">


## Conclusion:
This program helps us understand how different types of sorting work in C++. The sorting techniques weve used in these programs are selection sort, insertion sort and bubble sort.
