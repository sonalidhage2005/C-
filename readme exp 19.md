# EXPERIMENT 19
# Aim
To study and implement Queue implementation using array.
# Software Used
Visual Studio Code
# Theory
A queue is a linear data structure that follows the FIFO (First In, First Out) principle. The element added first is removed first. In C++, queues can be implemented using arrays, linked lists, or STL (Standard Template Library). The most common operations are:

Enqueue: Adds an element to the rear of the queue.

Dequeue: Removes an element from the front of the queue.

Front: Access the first element.

Rear: Access the last element.

CODES:

1.Using switch case
```
#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void Insert() {
   int val;
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}
```
o/p:

![Screenshot 2024-10-22 194051](https://github.com/user-attachments/assets/7046061d-9878-4b5c-9a7d-7ab68e264b63)



2.Using classes
```
#include <iostream>
using namespace std;
#define size 5
#define ERROR -9999

class Queue {
    int rear, front, arr[size];
public:
    Queue() {
        rear = -1;
        front = -1;
    }
    void enqueue(int);
    int dequeue();
    void disp();
};
void Queue::enqueue(int num) {
    if (rear == size - 1) {
        cout << "Queue is full" << endl;
    } else {
        if (front == -1) {
            front = 0;
        }
        arr[++rear] = num;
    }
}
int Queue::dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
        return ERROR;
    } else {
        return arr[front++];
    }
}
void Queue::disp() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    Queue q1;
    q1.enqueue(4);
    q1.enqueue(8);
    q1.enqueue(3);
    q1.disp();
    
    int val = q1.dequeue();
    cout << "Deleted element: " << val << endl;
    
    q1.disp();
    
    return 0;
}
```
o/p:


![Screenshot 2024-10-22 194155](https://github.com/user-attachments/assets/f6d32da0-925b-4087-882b-d8429080e13f)


# Conclusion
Both codes implement a queue, however in different ways. The class-based approach organizes queue operations into a Queue class, making the code reusable and simple to update. The global variable-based approach is simpler, but it requires global variables, which can make the code harder to maintain and less adaptable. While both work for queue operations, the class-based version is better suited for larger, more structured programs. The global approach is better suited to small, simple tasks.
