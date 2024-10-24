#include <iostream>
using namespace std;
int fact(int n){
    if (n<=1){
        return 1;
    }else{
        return (n * fact(n - 1));
    }
}
int main(){
    int X,n;
    cout<<"Enter a number:";
    cin>>n;
    X=fact(n);
    cout<<"Factorial:"<<X<<endl;
    return 0;
}


#include <iostream>
using namespace std;

int add(int n){
if (n<=1){
return 1;
}
else{
return(n+add(n-1));
}
}
int main(){
int X,n;
cout<<"Enter a number:";
cin>>n;
X=add(n);
cout<<"Sum of numbers is:"<<X<<endl;
return 0;
}



#include<iostream>
using namespace std;
void reverse(char *str){
    if (*str){
        reverse(str+1);
        cout<<*str;

    }
}
int main(){
    char s[50];
    cout<<"Enter a string:";
    cin>>s;
    cout<<"Reversed string is:";
    reverse(a);
    cout<<endl;
    return0;
}
