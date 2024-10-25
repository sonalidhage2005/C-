# EXPERIMENT 8
# Aim:
To study and implement C++ 2D array matrices. 
# Theory:
The theory behind 2D array matrices in C++ focuses around organizing data into a grid structure with rows and columns to allow for efficient access and manipulation. A 2D array can be thought of as an array of arrays, with each element accessed using a pair of indices (i, j), which represent its row and column positions. In memory, these arrays are stored in adjacent blocks in row-major order, which means that elements are stored row by row. This layout determines how quickly and efficiently data can be accessed and modified.

2D array operations include traversal (iterating through elements), matrix addition or subtraction through the combination of corresponding elements, and multiplication, which involves summing the products of rows and columns from two matrices. To transpose a matrix, flip it over its diagonal, effectively swapping rows and columns.

While 2D arrays provide simplicity and direct indexing, they have drawbacks such as fixed size constraints and the possibility of manual memory management errors. To overcome these limitations and improve functionality, standard libraries like std::vector or specialized libraries like Eigen can be used. These theoretical foundations are required for using 2D arrays in practical applications such as mathematical computations, computer graphics, and data analysis.

CODES:

1. Entering Elements of a Matrix:
   ```
   #include <iostream>
   using namespace std;

   int main() {
    int temp[3][3], i, j, k, l;

    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << "Enter element (" << i << "," << j << "): ";
            cin >> temp[i][j];
        }
    }
    cout << "Matrix is:" << endl;
    for (k = 0; k < 3; k++) {
        for (l = 0; l < 3; l++) {
            cout << temp[k][l] << " ";
        }
        cout << endl;
    }

    return 0;
   }

o/p: https://github.com/saniyachatterjee/saniyachatterjee-EXP-8/issues/1#issue-2482335267



2. Addition and Subtraction of Matrix:
   ```
   #include <iostream>
   using namespace std;

   int main() {
   
    int r1 = 3, c1 = 3;
    int r2 = 3, c2 = 3;
    int m1[r1][c1], m2[r2][c2], sum[r1][c1],difference[r1][c1];
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> m1[i][j];
        }
    }
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> m2[i][j];
        }
    }
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }
    cout << endl << "Sum of matrices:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

      for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            difference[i][j] = m1[i][j] - m2[i][j];
        }
    }
    cout << "Difference of matrices:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << difference[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
    }

o/p:

![Screenshot 2024-08-23 105656](https://github.com/user-attachments/assets/d4f53787-9419-4725-9cc8-54cba30410f3)
![Screenshot 2024-08-23 105727](https://github.com/user-attachments/assets/475ab9f5-f497-40a4-b17c-4d343d8e1ae5)


3.Multiplication of Matrix:

```
#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and columns for the first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for the second matrix: ";
    cin >> r2 >> c2;
    if (c1!= r2) {
        cout<<"Matrix multiplication is not possible"<< endl;
        return 0;
    }
    int m1[r1][c1], m2[r2][c2], product[r1][c2];
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << "Enter element at  (" << i << ", " << j << "): ";
            cin >> m1[i][j];
        }
    }
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << "Enter element at (" << i << ", " << j << "): ";
            cin >> m2[i][j];
        }
    } 
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            product[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                product[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    cout << "Resultant matrix:"<<endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

o/p:

![Screenshot 2024-08-23 110041](https://github.com/user-attachments/assets/9d1c0097-f828-4b58-9dca-d6fa33f64d3d)
4. Transpose of Matrix:

```
#include <iostream>
using namespace std;

int main() {
    int r,c;
    cout<<"Enter the number of rows and columns of the matrix:";
    cin>>r >>c;
    int m[r][c],transpose[c][r];
    cout<<"Enter elements of the matrix:"<<endl;
    for(int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            cout<<"Enter element at position(" << i << ", " << j << "):";
            cin>>m[i][j];
        }
    }
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            transpose[j][i]=m[i][j];
        }
    }
    cout<<"Transpose of the matrix is:"<< endl;
    for(int i=0;i<c;i++) {
        for(int j=0;j<r;j++) {
            cout<<transpose[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
```
o/p:

![Screenshot 2024-08-23 110300](https://github.com/user-attachments/assets/0f03d27a-0c58-40a1-9aef-f05ef1abc093)

5. Diagonal Addition of Matrix:
```
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    int matrix[n][n];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> matrix[i][j];
        }
    }

    int sum = 0;

    // Sum the primary diagonal elements
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }


    // Display the sum of diagonal elements
    cout << "Sum of diagonal elements: " << sum << endl;

    return 0;
}
```
o/p
![Screenshot 2024-08-23 110830](https://github.com/user-attachments/assets/8a931ec4-bdcd-476d-b003-353e906de82d)

# Conclusion: 
This experiment teaches fundamental programming concepts, particularly how to handle data structures that require multidimensional organization.

Efficiently Store and Manipulate Data: By using 2D arrays, we can store data in a tabular format, making it easier to perform operations such as matrix addition, subtraction, and multiplication.

Develop Problem-Solving Skills: Implementing matrix operations improves logical thinking and problem-solving skills by requiring careful consideration of indices, loops, and data handling.
Understand Memory Management: Working with 2D arrays in C++ helps you understand how memory is allocated and accessed in programming, particularly when managing rows and columns of data.

Apply concepts to real-world scenarios: Matrix operations are fundamental in many fields, including engineering, computer graphics, machine learning, and scientific computing. Understanding how to implement these in C++ enables us to tackle more complex problems in these areas.
