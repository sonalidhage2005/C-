# EXPERIMENT 18
# Aim
To study and implement Stack implementation using array.

Menu options - i) Push ii) Pop iii) Display iv) exit

# Software Used
Visual Studio Code
# Theory
A stack in C++ is a linear data structure that follows the Last In, First Out (LIFO) principle, meaning the last element added is the first to be removed. 

Its operations are:

Pop:Removes the element from the top of the stack.

Push:Adds an element to the top of the stack.

Peek: Accesses the top element without removing it.

Display: The operation to show all elements currently in the stack.

CODES:
A]
```
#include <iostream>
using namespace std;

const int n = 100;
int stack[n], top = -1;

void push(int val) {
    if (top >= n - 1) {
        cout << "Stack overflow" << endl;
    } else {
        stack[++top] = val;
    }
}

void pop() {
    if (top < 0) {
        cout << "Stack underflow" << endl;
    } else {
        cout << "The popped element is: " << stack[top--] << endl;
    }
}

void display() {
    if (top >= 0) {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Stack is empty" << endl;
    }
}

int main()
{
    int ch,val;
    cout<<"1) Push in stack"<<endl;
    cout<<"2) Pop from stack"<<endl;
    cout<<"3) display stack"<<endl;
    cout<<"4) exit"<<endl;

    do
    {
        cout<<"enter choice: "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"enter the value that has to be pushed"<<endl;
                cin>>val;
                push(val);
                break;
            }

            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                cout<<"exit"<<endl;
                break;
            }
            default:
            {
                cout<<"Invalid choice"<<endl;
            }
        }
    }
    while (ch!=4);
    return 0;
}
```
o/p:

![Screenshot 2024-09-30 123652](https://github.com/user-attachments/assets/56bcdf71-1dd5-4998-a2ec-e96bd98ce029)
B]
```
#include <iostream>
using namespace std;

#define SIZE 5
#define ERROR -9999

class Stack {
    int top;
    int ar[SIZE];
public:
    Stack() {
        top = -1;
    }
    void push(int num);
    int pop();
    int peak();
    void disp();
};

void Stack::push(int num) {
    if (top == SIZE - 1) {
        cout << "STACK OVERFLOW: STACK IS FULL" << endl;
        return;
    }
    ar[++top] = num;
}

int Stack::pop() {
    if (top == -1) {
        cout << "STACK UNDERFLOW: STACK IS EMPTY" << endl;
        return ERROR;
    }
    return ar[top--];
}

int Stack::peak() {
    if (top == -1) {
        cout << "STACK UNDERFLOW: STACK IS EMPTY" << endl;
        return ERROR;
    }
    return ar[top];
}

void Stack::disp() {
    if (top == -1) {
        cout << "STACK UNDERFLOW: STACK IS EMPTY" << endl;
        return;
    }
    for (int i = 0; i <= top; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
}

int main() {
    Stack s1;
    s1.push(7);
    s1.push(10);
    s1.push(4);
    
    int val = s1.pop();
    cout << "Popped value: " << val << endl;

    int topValue = s1.peak();
    cout << "Top value: " << topValue << endl;

    cout << "Current stack: ";
    s1.disp();

    return 0;
}
```
o/p:

![Screenshot 2024-09-30 123842](https://github.com/user-attachments/assets/252cf5cf-4c39-4c7f-8533-5a6a433a3553)



C]
```
#include <iostream>
using namespace std;
#define size 5
#define error -9999

class stack 
{
    int top, ar[size];

public:
    stack() 
    {
        top = -1;
        ar[0]=0;
    }
    void push(int);
    int pop();
    int peak();
    void disp();
};

void stack::push(int num) 
{
    if (top == size - 1) 
    {
        cout << "Stack overflow: stack is full" << endl;
        return;
    } else 
    {
        ar[++top] = num;
    }
}

int stack::pop() {
    int val;
    if (top == -1) 
    {  // Corrected this line
        cout << "Stack underflow: stack is empty" << endl;
        return error;
    } else 
    {
        val = ar[top--];
        return val;
    }
}

int stack::peak() 
{
    if (top == -1) 
    {
        cout << "Stack underflow: stack is empty" << endl;
        return error;
    } else 
    {
        return ar[top];
    }
}

void stack::disp() 
{
    if (top == -1) 
    {
        cout << "Stack underflow: stack is empty" << endl;
        return;
    } else 
    {
        for (int i = 0; i <= top; i++) 
        {
            cout << ar[i] << " ";
        }
        cout << endl;
    }
}

int main() 
{
    stack s1;
    s1.push(10);
    s1.push(7);
    s1.push(4);
    int val = s1.pop();
    cout << "Popped value: " << val << endl;
    int top = s1.peak();
    cout << "Top value: " << top << endl;
    cout << "Stack contents: ";
    s1.disp();
    return 0;
}
```
o/p:

![Screenshot 2024-09-30 123936](https://github.com/user-attachments/assets/ee31cf28-143d-45ff-a89a-d6e72d823f48)


# Conclusion
These three C++ programs demonstrate stack implementation by performing operations such as push, pop, peak, and display while also handling overflow and underflow conditions. The first uses the use of procedures with global variables, whereas the second and third are more versatile, utilizing object-oriented design to contain stack behavior within classes. Each program effectively demonstrates how to manage stack operations, despite differences in structure and error handling.
