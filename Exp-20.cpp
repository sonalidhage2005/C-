//Name: Sonali Dhage
//Prn: 23070123128
//Class: EnTC B-2
//Exp 20.1
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

//Name: Sonali Dhage
//Prn: 23070123128
//Class: EnTC B-2
//Exp 20.2
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

//Name: Sonali Dhage
//Prn: 23070123128
//Class: EnTC B-2
//Exp 20.3
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
