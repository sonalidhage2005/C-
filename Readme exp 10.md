# EXPERIMENT 10
# Aim
To study and implement Pointer Operations (Call by value and Call by reference).
# Software
Visual Studio Code
# Theory 
Call by value.
The call-by-value method passes function arguments by copying the value of the actual parameter, leaving the original values unchanged.
The value is copied into the formal parameter.
Changes made to the parameters within the function have no effect on the original values outside of it.

Call by reference.
The call-by-reference method passes the actual parameter's memory address (reference) to the function, allowing for direct access and modification of the original values.
The actual and formal parameters refer to the same memory address.

Any changes to the parameters within the function are immediately reflected in the original values outside the function.

CODES:
1. Printing values using call by value
```
#include<iostream> 
using namespace std; 
void swap(int x, int y) 
{
    int swap;
    swap=x;
 x=y;
    y=swap;
}

int main() 
{
    int a=3, b=1;
    swap(a,b);
    cout<<"Value of a is: "<<a<<"\n";
    cout<<"Value of b is: "<<b<<"\n";
    return 0;
}
```
O/P:
![Screenshot 2024-08-24 212316](https://github.com/user-attachments/assets/f4845f9d-1188-4c2f-9d05-45a6447e89c8)

2. Swapping values:
```
#include<iostream> 
using namespace std; 
void swap(int *x, int *y) 
{
    int *swap;
    swap=x;
    x=y;
    y=swap;
}

int main() 
{
    int a=3,b=1;
    swap(a,b);
    cout<<"Value of a is: "<<a<<"\n";
    cout<<"Value of b is: "<<b<<"\n";
    return 0;
}
```

O/P:

![Screenshot 2024-08-24 212428](https://github.com/user-attachments/assets/48d22e05-a553-4113-8732-a08565699409)


3. Swapping the values using call by reference:
```
#include<iostream> 
using namespace std; 
void swap(int *x, int *y) 
{
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
}

int main() 
{
    int a=3,b=1;
    swap(&a,&b);
    cout<<"Value of a is: "<<a<<"\n";
    cout<<"Value of b is: "<<b<<"\n";
    return 0;
}
```

O/P:

![Screenshot 2024-08-24 212502](https://github.com/user-attachments/assets/a7a0e1db-14f8-4211-8ddc-742de05a734b)


# Conclusion
In the first code, swapping doesn't work because the function parameters are passed by value, so changes don't affect the original variables. In the second code, although pointers are used, the swap logic is incorrect as it attempts to swap the pointers rather than the values they point to, and the function is incorrectly called without passing addresses. The third code correctly swaps the values by passing pointers and dereferencing them, successfully exchanging the values of a and b.
