// Name: Sonali Dhage
// PRN: 23070123128
// Class: E&TC-B2
// Exp 2.1
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

// Name: Sonali Dhage
// PRN: 23070123128
// Class: E&TC-B2
// Exp 2.2
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

// Name: Sonali Dhage
// PRN: 23070123128
// Class: E&TC-B2
// Exp 2.3
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
