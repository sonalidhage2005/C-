# EXPERIMENT 9
# Aim
To study and implement C++Pointer basics
# Software Used
Visual Studio Code
# Theory

Pointer Basics: A pointer is a variable that stores the memory address of another variable, allowing direct access to that variable's value.

Declaration & Initialization: Pointers are declared with an asterisk (*) and initialized using the address-of operator (&).

Dereferencing: The value at the memory address stored in a pointer is accessed using the dereference operator (*).

Pointer Arithmetic: Pointers can be incremented or decremented to navigate through contiguous memory locations, such as elements in an array.

Arrays as Pointers: An array name acts like a pointer to its first element, making pointers effective for array manipulation.Double Pointers: Pointers can store the address of other pointers, which is useful for managing complex data structures and dynamic memory.

Pointers in Functions: Passing pointers to functions allows direct modification of original variables, enabling efficient array manipulation and multi-value returns.

Significance: Pointers are essential in C++ for dynamic memory management and efficient handling of data structures like arrays and strings.

Syntax:
```
datatype *var_name;
int *ptr; //ptr can point to an address which holds in data
```

CODES: 
1.Illustrate Pointers:

```
#include <bits/stdc++.h> 
using namespace std;
void geeks()
{
    int var = 5;
    int* ptr;                  
    ptr = &var;

    cout<<"Value at ptr = "<<ptr<<"\n";
    cout<<"Value at var = " <<var<<"\n";
    cout<<"Value at *ptr = "<<*ptr<<"\n";

}int main()
{
    geeks();
    return 0;
}
```
O/P:
![Screenshot 2024-08-24 193745](https://github.com/user-attachments/assets/94b9a5a8-5d9b-4eb8-b8ed-8304d68db990)

2. 1D Array of pointers:
```
#include <iostream> 
using namespace std; 

int main() 
{
    int* p=new int[7];  

    for (int i=0; i<5; i++)  
    {
        p[i]=10*(i+1);
    }

    cout<<*p<<"\n"; 
    cout<<*p+1<<"\n";
  cout<<*(p+1)<<"\n";
    cout<<2[p]<<"\n";
    cout<<p[2]<<"\n";
    *p++;

    cout<<*p;                

    return 0; 
}
```
O/P:
![Screenshot 2024-08-24 193858](https://github.com/user-attachments/assets/da9f943b-5bff-497d-a56d-d936109212a2)
3. Pointer Arithmetic in C++ :
```
#include<iostream>
using namespace std;

int main() {
    int b = 10;
    int *ptr = &b;
    cout << "*ptr: " << *ptr << "   b: " << b << endl;
    ptr++;
    cout << "After increment: " << *ptr << endl;
    float *n, a = 8.923;
    n = &a;
    cout << endl << "*n: " << *n << "   a: " << a << "   n: " << n << "   &a: " << &a << endl;
    n++;
    cout << "After increment: " << n << endl;
 char *ch, c = 'c';
    ch = &c;
    cout << endl << (void*)ch << endl;
    ch++;
    cout << "After increment: " << (void*)ch << endl;

    return 0;
}
```

O/P:
![Screenshot 2024-08-24 193941](https://github.com/user-attachments/assets/5d708855-b2b3-42ff-addc-ea72901aaf42)

4. Modifying the Contents of a Memory Location Using Pointers :
```
#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int* aptr = &a;
    cout << *aptr << endl;  
    *aptr = 20;             
    cout << a << endl;      
    int arr[] = {10, 20, 30};
    cout << *arr << endl;  
    return 0;
}
```
O/P:
![Screenshot 2024-08-24 194007](https://github.com/user-attachments/assets/6470df88-8690-435d-b398-71675cd4ead2)

# Conclusion 
These codes are foundational in understanding how memory management and pointer arithmetic work in C++. They show the power and potential pitfalls (like pointer manipulation) of using pointers. Understanding pointers is essential for effective C++ programming. Pointers provide direct memory access, which improves performance and flexibility by allowing for efficient data manipulation and memory management. They make it easier to perform operations like dynamic memory allocation, array handling, and complex data structure management. Understanding pointers also helps to optimize code and create robust algorithms. Programmers gain the skills required to handle advanced programming tasks and create high-performance applications by learning how to properly declare, initialize, and use pointers. Pointer proficiency is required to fully utilize C++'s capabilities and excel at systems-level programming.
