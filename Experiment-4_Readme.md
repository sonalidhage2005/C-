# EXP-4
## Aim:To study and implement decision making statements.

## Theory:We learned how to find the greatest number using if-else statements and even nested if. We learned to use switch cases. If else is a conditional statement that is used when there are multiple conditions, such as if one number is greater than another or if the user selects one option over another. Nested if else is a type of conditional statement, but it is nested within another to reduce code length. It can be difficult to understand, though. The switch expression is evaluated once, and the result is compared to the values of each case. If there is a match, the corresponding block of code is executed.

## CODE1:

```
//Name: Sonali Dhage
//PRN: 23070123128
//EnTC B2
#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    if (a<5 && b>10)
    	cout<<"True"<<endl;
    else
    	cout<<"False"<<endl;
    if (a>5 || b<10)
    	cout<<"True"<<endl;
    else
    	cout<<"False"<<endl;
    if (!(a<2 && b>0))
    	cout<<"True"<<endl;
    else 
    	cout<<"False"<<endl;
			return 0;
}
```

## OUTPUT1:

![image](https://github.com/user-attachments/assets/501ef81f-783b-4eb0-9830-4a62295b1b27)

CODE2:

```
//Name: Sonali Dhage
//PRN: 23070123128
//EnTC B2
#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
	int bitwise_and = a & b;
	cout<<"AND operator: "<<bitwise_and<<endl;
	int bitwise_or = a | b;
	cout<<"OR operator: "<<bitwise_or<<endl;
	int bitwise_xor = a^b;
	cout<<"XOR operator: "<<bitwise_xor<<endl;
	int bitwise_not = ~a;
	cout<<"NOT operator: "<<bitwise_not<<endl;
	int left_shift = a<<1;
	cout<<"LEFT SHIFT operator: "<<left_shift<<endl;
	int right_shift = a>>9;
	cout<<"RIGHT SHIFT operator: "<<right_shift<<endl;
	return 0;
}
```

## OUTPUT2:

![image](https://github.com/user-attachments/assets/b4524d93-3ed8-4b11-89a1-34770d368730)

## Conclusion:

Studying and implementing bitwise operators in C++ is essential for manipulating data at the bit level.
Key operators include:

### 1. AND (&): Performs bitwise AND.
### 2. OR (|): Performs bitwise OR.
### 3. XOR (^): Performs bitwise XOR.
### 4. NOT (~): Performs bitwise NOT (complement).
### 5. Left Shift (<<): Shifts bits to the left.
### 6. Right Shift (>>): Shifts bits to the right.
These operators allow for efficient low-level data processing and optimization in your programs.
