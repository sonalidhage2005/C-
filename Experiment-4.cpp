//Name: Sonali Dhage
//PRN: 23070123128
//E&TC B2
//Exp 4.1
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


//Name: Sonali Dhage
//PRN: 23070123128
//E&TC B2
//Exp 4.2
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

