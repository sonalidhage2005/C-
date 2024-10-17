# EXP-1
## AIM: to install Visual Studio Code and writing a program to print hello world, and calculator program

## Theory: VS code is a code editor that, with the appropriate extensions, can run all types of programs and codes. In the codes, MinGW is used to add the c++ extension printing hello world uses the "cout" character output, and the calculator program uses the arithmetic operators sum(+), difference(-), multiplication(*), and division(/).

## INSTALLTION PROCESS OF VS CODE: -

1] Click on the site https://code.visualstudio.com and then click on download for windows.
 
2] Now, your vs code will start downloading. Then click on the recent downloaded file in downloads tab.
 
3] Pop up window will appear, click on “I accept the agreement”. And click on next.
 
4] Now the setup installs vs code on your computer.
 
5] As now your vs code is installed, open it and install its other extensions like code runner and C/C++ in order to run the code. 
 
6] Now download MinGW which will compile your code. Site- MinGW - Minimalist GNU for Windows download | SourceForge.net

 
7.A pop up window will appear for the installation of MinGW. Click on install.
 
8] After this, various packages will appear. Tick all the required boxes you need for the c and c++ language.

9] Click on apply. Now MinGW is installed.
 
10] After this go to THIS PC click on ‘Advanced System Settings’. A pop-up window will appear, then go to ‘Environmental Variables’.
 
11] A pop-up window will appear. Click on new tab and add the link of the location of MingGW in THIS PC (in bin). And click on OK. Your Visual Studio Code is ready for use.

## CODE1:

```
//Sonali Dhage
//PRN 23070123128
//Exp 1
#include<iostream>

int main(){
std::cout<<"Hello World";

return 0;
}
```

## OUTPUT1:

![image](https://github.com/user-attachments/assets/b060df74-0f1f-4cf6-a528-1c1230169a30)

## CODE2:

```
//Sonali Dhage
//PRN 23070123128
//Exp 1
#include<iostream>
using namespace std;
int main()

{

int num1, num2, num3, sum=0;

cout<<"enter first number-";

cin>>num1;

cout<<"enter second number";

cin>>num2;

sum=num1+num2;

cout<<"sum of given numbers="<<sum;

return 0;

}
```

## OUTPUT2:

![image](https://github.com/user-attachments/assets/85a7c15a-b64d-4ee1-8f9c-5efd86c148f6)

## Conclusion:

### VS Code Download: Downloading and setting up Visual Studio Code (VS Code) is straight forward and enhances your coding experience with its powerful features and extensions.

### Printing "Hello, World!" in C++: Writing a "Hello, World!" program in C++ introduces the basic structure of a C++ program and teaches you how to compile and run code in VS Code.

### Creating a Calculator in C++: Building a calculator helps you apply fundamental programming concepts like input/output handling, conditional statements, and loops.
