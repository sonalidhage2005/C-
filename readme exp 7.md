# Experiment-7

# Aim: 
To study and implement C++ Arrays and Strings

# Theory: 
An array stores a fixed-size sequential collection of elements of the same type. All arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the last element To declare an array in C++, we must specify the type of elements and the number of elements required by an array −: type arrayName [ array_size ] You can initialize C++ array elements either one by one or using a single statement as follows −: int arr[5] = {1000, 2, 3, 17, 50} Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value. | strings | arrays | | it is a class that defines a objects in characters | array of characters terminated by null characters | | it can define a number of functions | do not have a lot of functions inbuilt |

![WhatsApp Image 2024-08-08 at 22 51 55_0e47c5a9](https://github.com/user-attachments/assets/cd836d33-871e-49d9-bb73-d11d516d50b8)


# 1. Creating Array Declaration: 
~~~
//Name: Saniya Chatterjee
//Prn: 23070123113
//Class: EnTC B-2
#include<iostream>
using namespace std;

int main()
{
    int array1[5] = {1,6,10,34,3}, array2[3] = {2,8,4}, array3[2] = {5,6};

    cout<<"traditional method"<<endl;
    for (int i=0;i<3;i++)
    {
        cout<<array1[i]<<" "<<endl;
    }

    cout<<"modern method"<<endl;
    for(int j : array2)
    {
        cout<<j<<" ";
    }
    return 0;
}
~~~
# Output: -

<img width="415" alt="image" src="https://github.com/user-attachments/assets/2050b287-4ea4-4bcd-b9bf-94dbe7674155">

# 2. Reversing An Array: 
~~~
//Name: Saniya Chatterjee
//Prn: 23070123113
//Class: EnTC B-2
#include<iostream>
using namespace std;

int main() 
{
    int n, i, j=0, k, l, temp;
    cout<<"Enter size of array: ";
    cin>>n;
    int a1[n], a2[n];

    for(i=0;i<5;i++) 
    {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>a1[i];
    }
    cout<<"\nArray given by user: ";
    for(l=0;l<5;l++) 
    {
        cout<<a1[l];
    }
    cout<<endl;
    for(k=4;k>=0;k--) 
    {
        temp = a1[k];
        a2[j] = temp;
        j++;
    }
    cout<<"Reversed array: ";
    for(l=0;l<5;l++) {
        cout<<a2[l];
    }
}
~~~

# Output: 

<img width="477" alt="image" src="https://github.com/user-attachments/assets/cdf02a7e-9c49-4e4e-a7f3-34c1f28c2fea">

# 3. Creating Input Output: 
~~~
//Name: Saniya Chatterjee
//Prn: 23070123113
//Class: EnTC B-2
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;
   
    int array[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    cout << "The elements of the array are:" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    cout << endl;
    return 0;
}
~~~
# Output: - 

<img width="481" alt="image" src="https://github.com/user-attachments/assets/4177a29e-0b49-4552-b9af-55fe873354b6">

# 4. Array Addition And Average: 
~~~
//Name: Saniya Chatterjee
//Prn: 23070123113
//Class: EnTC B-2
#include <iostream>
using namespace std;

int main() 
{
  int numbers[] = {6,7,8,9,3,5};

  int sum = 0;
  int count = 0;
  int average;

  cout << "The numbers are: ";

  for (const int n : numbers) 
  {
    cout << n << "  ";
    sum += n;
    ++count;
  }

  cout << "Sum = " << sum << endl;

  average = sum / count;
  cout << "Their Average = " << average << endl;
  return 0;
}
~~~
# Output: 

<img width="512" alt="image" src="https://github.com/user-attachments/assets/ae25e6ff-50d6-49c3-995b-22fbb2872a4e">

# 5. Find Max And Min: 
~~~
//Name: Saniya Chatterjee
//Prn: 23070123113
//Class: EnTC B-2
#include<iostream>
using namespace std;
int main() {
    int n, i, max=0;
    cout<<"number of elements: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cout<<"enter element: "<<i<<": ";
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int min=a[0];
    for(i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    cout<<"Maximum: "<<max<<endl;
    cout<<"Minimum: "<<min;
}
~~~
# Output:  

<img width="464" alt="image" src="https://github.com/user-attachments/assets/5fd41e39-eac9-4710-a897-11885a28b3c3">

# 6. Search: 
~~~
//Name: Saniya Chatterjee
//Prn: 23070123113
//Class: EnTC B-2
#include<iostream>
using namespace std;
int main() 
{
    int marks[5];
    int num, count = 0;

    for (int i = 0; i < 5; i++) 
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> marks[i];
    }

    cout << "Enter element to be searched: ";
    cin >> num;

    for (int i = 0; i < 5; i++) 
    {
        if (marks[i] == num) 
        {
            cout << "Position of " << num << ": " << i + 1 << endl;
            count++;
        }
    }

    if (count == 0) {
        cout << "Element not present" << endl;
    } else {
        cout << "Element is present: " << count << " times" << endl;
    }

    return 0;
}
~~~
# Output: 

<img width="454" alt="image" src="https://github.com/user-attachments/assets/42f31887-14d2-4783-b2b6-e980e790ba4d">

# 7. String:
~~~
//Name: Saniya Chatterjee
//Prn: 23070123113
//Class: EnTC B-2
#include<iostream>
using namespace std;
int main()
{
    string a; 
    cout<<"enter a string: ";
    cin>>a;
    cout<<"the string is: "<<a<<endl;
    return 0;
}
~~~

# Output: 

<img width="408" alt="image" src="https://github.com/user-attachments/assets/d5425872-2c32-49d0-8c5a-3e3c367bfeb7">

# 8. String Concaternation:
~~~
//Name: Saniya Chatterjee
//Prn: 23070123113
//Class: EnTC B-2
#include<iostream>
using namespace std;

int main()
{
    string a,b,c; 
    cout<<"enter a string a: ";
    cin>>a;
    cout<<"enter a string b: ";
    cin>>b;

    c=a+b;
    cout<<"concaternation of the strings is: "<<c; 

    return 0;
}
~~~
# Output:

<img width="593" alt="image" src="https://github.com/user-attachments/assets/2c57200c-5b7a-4b96-a99c-0317ec6e4ede">

# 9. String Reversal:
~~~
//Name: Saniya Chatterjee
//Prn: 23070123113
//Class: EnTC B-2
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    int i;
    cout<<"enter a string: ";
    getline(cin,a);

    for(i=a.length()-1;i>=0;i--)
    {
        cout<<a[i ];
    }

    return 0; 
}
~~~
# Output:

<img width="590" alt="image" src="https://github.com/user-attachments/assets/cb88949d-2502-43ad-b663-2ee57f4fb53d">

# 10. String Palindrome: 
~~~
//Name: Saniya Chatterjee
//Prn: 23070123113
//Class: EnTC B-2
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    cout << "Enter a string: ";
    cin >> a;
    int n = a.length();
    int var = 1;
    
    for(int i = 0; i < n / 2; i++)
    {
        if(a[i] != a[n - i - 1])
        {
            var = 0;
            break;
        }
    }
    
    if (var == 1)
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
~~~
# Output:

<img width="578" alt="image" src="https://github.com/user-attachments/assets/38a80f54-0e76-42f8-a4f5-1b6299e3a9de">

# Conclusion:
Mastering arrays and strings in C++ is crucial for efficient data manipulation. Arrays allow you to store elements of the same type in contiguous memory locations, making data management straightforward. Strings, which handle sequences of characters, can be managed using either C-strings or the more versatile std::string class from the Standard Library. While std::string offers more functionality and ease of use, understanding C-strings is important for low-level programming. Practicing with both arrays and strings will build a solid foundation and enhance your overall proficiency in C++.
