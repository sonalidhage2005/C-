# EXP-3
## AIM: To study and implement operators and bitwise operators in C++

## THEORY: 
### 1. Understanding Basic Operators
Operators in C++ are special symbols that perform operations on variables and values. The basic types include:
Arithmetic Operators: +, -, *, /, %
Relational Operators: ==, !=, >, <, >=, <=
Logical Operators: &&, ||, !
Assignment Operators: =, +=, -=, *=, /=, %=
Increment and Decrement Operators: ++, --

### 2. Bitwise Operators
Bitwise operators work on bits and perform bit-by-bit operations. They include:
AND (&): Sets each bit to 1 if both bits are 1.
OR (|): Sets each bit to 1 if one of the bits is 1.
XOR (^): Sets each bit to 1 if only one of the bits is 1.
NOT (~): Inverts all the bits.
Left Shift (<<): Shifts bits to the left by a specified number of positions.
Right Shift (>>): Shifts bits to the right by a specified number of positions.

### 3. Theory Behind Bitwise Operations
Bitwise operations are performed directly on the binary representations of numbers. They are efficient and are often used in low-level programming, such as system programming, graphics, and cryptography.

Example
Consider two integers: a = 5 (binary 0101) and b = 3 (binary 0011).
AND (&): a & b results in 0001 (binary for 1).
OR (|): a | b results in 0111 (binary for 7).
XOR (^): a ^ b results in 0110 (binary for 6).
NOT (~a): ~a results in ...11111010 (binary representation in two's complement form, typically -6 in decimal if we are considering 8-bit integers).

## CODE1:

```
//Name: Sonali Dhage
//PRN: 23070123128
//E&TC B2
#include<iostream>
using namespace std;
int main() {
    int a, b, sum, diff, prod, div, mod, incr, decr;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    sum = a+b;
    cout<<"Sum of no.s is: "<<sum<<endl;
    diff = a-b;
    cout<<"Difference of no.s is: "<<diff<<endl;
    prod = a*b;
    cout<<"Product of no.s is: "<<prod<<endl;
    div = a/b;
    cout<<"Division of no.s is: "<<div<<endl;
    mod = a%b;
    cout<<"Modulus of no.s is: "<<mod<<endl;
    incr = ++a;
    cout<<"Increment of a is: "<<incr<<endl;
    decr = --b;
    cout<<"Decrement of b is: "<<decr<<endl;
    return 0;
}
```

## OUTPUT 1:-

![image](https://github.com/user-attachments/assets/982519cb-0400-4a81-815e-e0a0db3ea4ec)

CODE2:

```
//Name: Sonali Dhage
//PRN: 23070123128
//E&TC B2
#include<iostream>
using namespace std;
int main() {
    int a=4, b=5, c=2, d=0, e=1;
    a+=4;
    cout<<"Value of a is: "<<a<<endl;
    b-=1;
    cout<<"Value of b is: "<<b<<endl;
    c*=3;
    cout<<"Value of c is: "<<c<<endl;
    d/=2;
    cout<<"Value of d is: "<<d<<endl;
    e%=5;
    cout<<"Value of e is: "<<e<<endl;
    return 0;
}
```

## OUTPUT 2:-

![image](https://github.com/user-attachments/assets/d174fb7c-c19b-4ca1-8a6f-1111e2c703c9)

CODE3:

```
//Name: Sonali Dhage
//PRN: 23070123128
//E&TC B2
#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
	if (a==b)
		cout<<"a is equal to b"<<endl;
	else
		cout<<"a is not equal to b"<<endl;

	if (a!=b)
		cout<<"a is not equal to b"<<endl;
	else
		cout<<"a is equal to b"<<endl;

	if (a>b)
		cout<<"a is greater than b"<<endl;
	else
		cout<<"a is not greater than b"<<endl;

	if (a<b)
		cout<<"a is less than b"<<endl;
	else
		cout<<"a is not less than b"<<endl;

	if (a>=b)
		cout<<"a is greater than or equal to b"<<endl;
	else 
		cout<<"a is not greater than or equal to b"<<endl;

	if (a<=b)
		cout<<"a is less than or equal to b"<<endl;
	else
		cout<<"a is not less than or equal to b"<<endl;
	return 0;
}
```

## OUTPUT 3:-

![image](https://github.com/user-attachments/assets/5dd2c277-0427-4444-9757-919a01fcdea8)

## Conclusion:

Mastering C++ operators like arithmetic, relational, logical, and assignment operators is key to performing various operations and writing efficient code. Understanding these operators enhances your ability to handle data and control program flow effectively.
