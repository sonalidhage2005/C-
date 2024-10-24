# EXPERIMENT 16
# Aim
To study and implement Exception Handling
# Software Used
Visual Studio Code
# Theory
An exception is an unexpected problem that arises during the execution of a program our program terminates suddenly with some errors/issues. Exception occurs during the running of the program (runtime).


try in C++:

The try keyword represents a block of code that may throw an exception placed inside the try block.

It’s followed by one or more catch blocks. If an exception occurs, try block throws that exception.


catch in C++:

The catch statement represents a block of code that is executed when a particular exception is thrown from the try block.

The code to handle the exception is written inside the catch block.


throw in C++:

An exception in C++ can be thrown using the throw keyword.

When a program encounters a throw statement, then it immediately terminates the current function and starts finding a matching catch block to handle the thrown exception.

CODES:

A]

```
#include <iostream>
using namespace std;
int main()
{
    float a,b, ans;
    cout<<"enter the numbers 1 and 2: ";
    cin>>a>>b;
    try
    {
        if(b==0)
        {
            throw b;
        }
        else
        {
            ans = a/b;
            cout<<"answer = "<<ans<<endl;
        }
    }
    catch( float num)
    {
        cout<<"ERROR: division by "<<num<<endl;
    }
}
```

o/p:

![Screenshot 2024-09-27 121516](https://github.com/user-attachments/assets/cd255e2b-ef5d-46f0-84e6-df83f5e4167f)
B]
```
#include <iostream>
using namespace std;

int main() {
    int weight;
    cout << "Enter weight: ";  
    cin >> weight;            
    try {
        if (weight > 50) {    
            throw weight;      
        } else {
            cout << "Weight: " << weight << "\n APPROVED" << endl;
        }
    }
    catch (int a) {         
        cout << "\n ERROR: Overweight! (" << weight << ")" << endl;  
    }
}

```

o/p:
![Screenshot 2024-09-27 121516](https://github.com/user-attachments/assets/cd255e2b-ef5d-46f0-84e6-df83f5e4167f)


# Conclusion
These C++ programs show the importance of exception handling in error management. The first prevents division by zero errors, whereas the second prevents division by zero errors. Using try, catch, and throw, they improve code readability and provide user-friendly feedback.
