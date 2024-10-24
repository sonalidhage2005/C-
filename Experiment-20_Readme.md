# EXPERIMENT 20
# Aim
To study and implement Sorting Algortithm in C++

1.Selection Sort

2.Insertion Sort

3.Bubble Sort

# Software Used
Visual Studio Code
# Theory
A Sorting Algorithm is used to rearrange a given array or list of elements according to a comparison operator on the elements. The comparison operator is used to decide the new order of elements in the respective data structure.

1.Selection Sort:
Selection Sort works by repeatedly finding the minimum element from the unsorted part of the array and swapping it with the first unsorted element.

2.Insertion Sort:
Insertion Sort works by building a sorted array one element at a time. It picks each element and inserts it into its correct position within the already sorted part of the array.

3.Bubble Sort:
Bubble Sort repeatedly swaps adjacent elements if they are in the wrong order. The largest element "bubbles up" to its correct position after each pass.

CODES:

1. Selection Sort
```
//Name: Sonali Dhage
//Prn: 23070123128
//Class: EnTC B-2
#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void s_sort(int *a, int elements) {
    for (int n = 0; n < elements - 1; n++) {
        for (int i = n + 1; i < elements; i++) {
            if (a[n] > a[i]) {
                swap(&a[n], &a[i]);
            }
        }
    }
}

int main() {
    int no_el;
    cout << "No. of elements in array: ";
    cin >> no_el;

    int arr[no_el];
    cout << "Enter " << no_el << " elements:" << endl;
    for (int i = 0; i < no_el; i++) {
        cin >> arr[i];
    }

    s_sort(arr, no_el);

    cout << "Sorted array: ";
    for (int i = 0; i < no_el; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```
o/p:
![Screenshot 2024-10-22 202037](https://github.com/user-attachments/assets/a3a150ee-a265-43dc-9da7-9ba688c34a71)


2. Insertion Sort
```
//Name: Sonali Dhage
//Prn: 23070123128
//Class: EnTC B-2
#include <iostream>
using namespace std;
void insertionSort(int arr[], int n){
    for (int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j] > key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[]={79,6,17,45,3,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    insertionSort(arr,n);
    cout<<"\nSorted array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";


       
    }
    return 0;
}
```
o/p:

![Screenshot 2024-10-22 202107](https://github.com/user-attachments/assets/cb0281a1-66a3-4d54-ad6c-7bda527f2c51)

3. BubbleSort
```
//Name: Sonali Dhage
//Prn: 23070123128
//Class: EnTC B-2
#include<iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *a, int elements) {
    int n = 0;
    int *b;

    while (n < elements) {
        b = a + 1;
        for (int i = 0; i < (elements - 1) - n; i++) {
            if (*a > *b) {
                swap(a, b);
            }
            b++;
        }
        n++;
        a++;
    }
}

int main() {
    int no_el;
    cout << "How many elements in your array?" << endl;
    cin >> no_el;

    int arr[no_el];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < no_el; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, no_el);

    cout << "Sorted array: " << endl;
    for (int i = 0; i < no_el; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```
o/p:


![Screenshot 2024-10-22 202400](https://github.com/user-attachments/assets/00a15bb5-1168-4772-8675-fb16beba1d79)

# Conclusion
These algorithms are primarily useful for educational purposes, and while they work well with small datasets, more advanced sorting algorithms such as Quick Sort, Merge Sort, or Heap Sort are generally preferred for large datasets due to their superior performance.
