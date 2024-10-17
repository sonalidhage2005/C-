//Name: Saniya Chatterjee
//PRN: 23070123113
//EnTC B2
//Exp 3.1
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
