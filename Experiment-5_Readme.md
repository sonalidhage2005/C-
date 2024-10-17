# EXP-5
## Aim:
### 1. To determine whether a given number is positive, negative, or zero. 
### 2. To determine whether a given number is positive, negative, or zero using nested if-else statements. 
### 3. To perform basic arithmetic operations (addition, subtraction, multiplication, and division) based on user input. 
### 4. To display the day of the week corresponding to a given number (1 for Sunday, 2 for Monday, ..., 7 for Saturday).

## Theory:

We learnt how to find the greatest number through if else statements, and even through nested if. We learnt how to use switch cases.

if else is a conditional statement used when there are conditions, for example if a number is greater than the other or if the user chooses one thing over another.

Nested if else is a part of those conditional statements however theyre one inside another to reduce the length of the code. It can be a bit complicated to understand though.

The switch expression is evaluated once and the value of the expression is compared with the values of each case. if there is a match, the associated block of code is executed

## CODE1:

```
//Name:-Sonali Dhage
//Prn:-23070123128
//Class:-E&TC B2 
#include <iostream>
using namespace std;
int main() {
    double n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    if(n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1;
    else if(n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2;
    else 
        cout << "Largest number: " << n3;
    return 0;
}
```

## OUTPUT 1: -

![image](https://github.com/user-attachments/assets/ca54ab56-d3b1-4576-ba88-7d9a0ff35114)

## CODE2:

```
//Name:-Sonali Dhage
//Prn:-23070123128
//Class:-E&TC B2 
#include<iostream>
using namespace std;
int main() {
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        default:
            cout << "Error! The operator is not correct" << endl;
            break;
    }
    return 0;
}
```

## OUTPUT 2: -

![image](https://github.com/user-attachments/assets/63cce8e7-6f8a-4650-aa34-a7e989298bb6)

## CODE3:

```
//Name:-Sonali Dhage
//Prn:-23070123128
//Class:-E&TC B2 
#include <iostream>
using namespace std;
int main() {
    double n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    if (n1 >= n2) {
        if (n1 >= n3)
            cout << "Largest number: " << n1;
        else
            cout << "Largest number: " << n3;
    }
    else {
        if (n2 >= n3)
            cout << "Largest number: " << n2;
        else
            cout << "Largest number: " << n3;
    }
    return 0;
}
```

## OUTPUT 3: -

![image](https://github.com/user-attachments/assets/33e5c2ef-9bab-4179-a27f-e3f8ac82cdd5)

## CODE4:

```
//Name:-Sonali Dhage
//Prn:-23070123128
//Class:-E&TC B2
#include<iostream>
using namespace std;
int main() {
    int choice;
    cout << "1. Monday" << endl
         << "2. Tuesday" << endl
         << "3. Wednesday" << endl
         << "4. Thursday" << endl
         << "5. Friday" << endl
         << "6. Saturday" << endl
         << "7. Sunday" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch(choice) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Wrong Input" << endl;
            break;
    }
    return 0;
}
```

## OUTPUT 4: -

![image](https://github.com/user-attachments/assets/f1a39b4b-a5e2-4b20-9bcb-ef5275ecf10d)

## Conclusion:

Understanding C++ decision-making operators—if, else, else if, switch, and the ternary operator—enables you to control the flow of your program based on conditions. These tools help you execute different code paths depending on specific criteria, making your code more dynamic and responsive.
