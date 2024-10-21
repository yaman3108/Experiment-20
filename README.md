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

### Stack using array: 
```
#include<iostream>
using namespace std;
#define size 5
#define ERROR -9999

class Queue{
    int rear, front, ar[size];
    public:
    Queue(){
        rear= -1;
        front=-1;
        ar[0]=0;
    }
    void enqueue(int);
    int dequeue();
    void disp();
};
void Queue::enqueue(int num){
    if(rear==(size+1)){
        cout<<"Queue is full"<<endl;
    }
    else{
        if(front==-1){
            ar[++front]=num;
            rear++;
        }
        else{
            ar[++rear]=num;
        }
    }
}
int Queue::dequeue(){
    if(front==-1||front==(rear+1)){
        cout<<"Queue is empty"<<endl;
        return ERROR;
    }
    else{
        int val=ar[front++];
        return val;
    }
}
void Queue::disp(){
    if(front==-1||front==(rear+1)){
        cout<<"Queue is empty"<<endl;
        return;
    }
    else{
        int i=front;
        while(i!=(rear+1)){
            cout<<ar[i]<<"  ";
            i++;
        }
    }
}

int main(){
    Queue q1;
    q1.enqueue(4);
    q1.enqueue(8);
    q1.enqueue(3);
    int val=q1.dequeue();
    cout<<val<<endl;
    q1.disp();
```
### Output:
<img width="1040" alt="Screenshot 2024-10-21 at 2 01 51 PM" src="https://github.com/user-attachments/assets/f03e0305-e294-4343-85de-1122a211920b">


## Conclusion:
This program helps us understand how queue can be implemented using arrays. We learnt the different commands/keywords used in queue such as push, pop and peek.
