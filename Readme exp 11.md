# EXPERIMENT 11
# Aim 
To Study and Implement Classes and Objects
# Software 
Visual Studio Code
# Theory
CODES:

1.
```
#include <iostream>
using namespace std;
class cube{
    public:
    double height=3.4;
    double length=9.2;
    double width=4.1;

};
int main(){
    cube c1;
    double volume=c1.height*c1.length*c1.width;
    cout<<"volume:"<<volume<<endl;
    
}
```
![Screenshot 2024-08-24 223401](https://github.com/user-attachments/assets/37968eff-c87c-4303-9ea6-89128a6e8f81)

O/P:

2.
```
#include <iostream>
using namespace std;
class cube{
    public:
     double height=3.4;
    double length=9.2;
    double width=4.1;
    double volume(){
        double v;
        v=height*width*length;
        return v;
    }
};
int main(){
    cube c1;
    cout<<"Volume:"<<c1.volume()<<endl;
}
```
O/P:

3.
```
#include<iostream>
using namespace std;
class cube{
    private:
    double height=3.4;
    double length=9.2;
    double width=4.1;
    public:
    double volume()
    {
        double v;
        v=height*length*width;
        return v;
    }
};
int main()
{
    cube c1;
    cout<<"Volume:"<<c1.volume()<<endl;
}
```
O/P:
4.
```
#include <iostream>
using namespace std;
class cube{
    public:
    double height=3.4;
    double length=9.2;
    double width=4.1;
     double volume(){
     double v;
     v=height*width*length;
        return v;
}
void disp_vol(double vol){
    cout<<"Volume:"<<vol<<endl;

}
};
int main()
{
    cube cube1;
    double vol=cube1.volume();
    cube1.disp_vol(vol);
}
```

O/P:
5.
```
#include <iostream>
using namespace std;

class Volume 
{
    public:
        float length;
        float breadth;
        float height;
        
        void input() {
            cout << "Enter the value of length: ";
            cin >> length;
            cout << "Enter the value of breadth: ";
            cin >> breadth;
            cout << "Enter the value of height: ";
            cin >> height;
        }
                float vol() {
            return length * breadth * height;
        }
        
        void display() {
            double a = vol();
            cout << "The volume is " << a;
 }
};

int main() {
    Volume volume1;
    volume1.input();
    float a = volume1.vol();
    cout << a;
    return 0;
}
```

O/P:

# Conclusion
