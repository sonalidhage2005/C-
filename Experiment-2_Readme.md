# EXP-2
## AIM: To study and implement C++ data structures.

## THEORY:

The sizeof operator in C++ returns the size (in bytes) of a variable or data type. This operator is evaluated at compile time and provides information about the memory allocated for each data type.

a.sizeof(char): Typically returns 1 byte, as the size of char is defined to be 1 byte in C++.

b.sizeof(int): The size of int is system-dependent but usually 4 bytes on most modern systems.

c.sizeof(short int): Usually 2 bytes, though this can vary depending on the system.

d.sizeof(long int): Often 4 or 8 bytes, depending on the system architecture (e.g., 4 bytes on 32 bit systems and 8 bytes on 64-bit systems).

e.sizeof(float): Generally 4 bytes.

f.sizeof(double): Typically 8 bytes.

g.sizeof(long double): Can vary but is often 12 or 16 bytes.

h.sizeof(bool): Often 1 byte, though this can vary.

## CODE1:
```
// Name: Sonali Dhage
// PRN: 23070123128
// Class: E&TC-B2
#include <iostream>
using namespace std;
int main() {
    cout << "size of char: " << sizeof(char) << " byte" << endl;
    cout << "size of int: " << sizeof(int) << " byte" << endl;
    cout << "size of float: " << sizeof(float) << " byte" << endl;
    cout << "size of double: " << sizeof(double) << " byte" << endl;
    cout << "size of short int: " << sizeof(short int) << "byte" << endl;
    cout << "size of long int: " << sizeof(long int) << "byte" << endl;
    cout << "size of long int: " << sizeof(long int) << "byte" << endl;
    cout << "size of unsigned char: " << sizeof(unsigned char) << "byte" << endl;
    cout << "size of signed char: " << sizeof(signed char) << "byte" << endl;
    cout << "size of unsigned int: " << sizeof(unsigned int) << "byte" << endl;
    cout << "size of signed int: " << sizeof(signed int) << "byte" << endl;
    cout << "size of unsigned long int: " << sizeof(unsigned long int) << "byte" << endl;
    cout << "size of signed long int: " << sizeof(signed long int) << "byte" << endl;
    cout << "size of unsigned short int: " << sizeof(unsigned short int) << "byte" << endl;
    cout << "size of signed short int: " << sizeof(signed short int) << "byte" << endl;
    cout << "size of unsigned long long int: " << sizeof(unsigned long long int) << "byte" << endl;
    cout << "size of bool: " << sizeof(bool) << "byte" << endl;
    return 0;
}
 ```

## OUTPUT 1:-

![image](https://github.com/user-attachments/assets/850ea6a6-dc39-4647-ad7a-934c1b7692ea)

## CODE2:

```
// Name: Sonali Dhage
// PRN: 23070123128
// Class: E&TC-B2
#include <iostream>
using namespace std;

int main() {
    char a;
    int b;
    short int c;
    long int d;
    float e;
    double f;
    bool g;

    cout<<"enter a character: ";
    cin>>a;
    cout<<"size of char: "<< sizeof(a)<<endl;

    cout<<"enter an int: ";
    cin>>b;
    cout<<"size of int: "<< sizeof(b)<<endl;

    cout<<"enter an short int: ";
    cin>>c;
    cout<<"size of short int: "<< sizeof(c)<<endl;

    cout<<"enter an long int: ";
    cin>>d;
    cout<<"size of long int: "<< sizeof(d)<<endl;

    cout<<"enter an float: ";
    cin>>e;
    cout<<"size of float: "<< sizeof(e)<<endl;

    cout<<"enter an double: ";
    cin>>f;
    cout<<"size of double: "<< sizeof(f)<<endl;

    cout<<"enter an bool: ";
    cin>>g;
    cout<<"size of bool: "<< sizeof(g)<<endl;

    return 0;
}
```

## OUTPUT 2: - 

![image](https://github.com/user-attachments/assets/27df74d4-a4c1-44cf-aead-3180d575f588)

## CODE3:

```
// Name: Sonali Dhage
// PRN: 23070123128
// Class: E&TC-B2
#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"enter any integer: ";
    cin>>a;
    cout<<"\ninteger = "<<a<<" and size is "<<sizeof(a)<< "bytes";
    int register b;
    cout<<"\nenter a number: ";
    cin>>b;
    cout<<"\nREGISTER = "<<b<<" and size is "<<sizeof(b)<< "bytes";
    int auto c;
    cout<<"\nenter an integer: ";
    cin>>c;
    cout<<"/nAuto = "<<c<<" and size is "<<sizeof(c)<< "bytes";
    return 0;
}
```

## OUTPUT 3: - 

![image](https://github.com/user-attachments/assets/8e8f3b03-b7f0-45ed-a7a7-dbb0f7b5c892)

## Conclusion:

Understanding C++ data types is crucial for effective programming. Basic types like int, float, double, char, and bool cover fundamental data needs, while derived types like arrays and pointers, and user-defined types like struct and class, offer advanced functionality. Mastering these types helps you manage data efficiently and write robust C++ programs.
