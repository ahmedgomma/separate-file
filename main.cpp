#include <iostream>
#include <iomanip>
#include <matrix.h>
//#include <cassert>

using namespace std;

// A structure to store a matrix
//struct matrix
//{
  //int* data;       // Pointer to 1-D array that will simulate matrix
  //int row, col;
//};

// Already implemented
ostream& operator<<(ostream& out,matrix mat);
/*void createMatrix (int row, int col, int num[], matrix& mat);
ostream& operator<<(ostream& out,matrix mat);


// Student #1 with the smallest ID (e.g., 20170080)
// All these operations return a new matrix with the calculation result
matrix operator+  (matrix mat1, matrix mat2); // Add if same dimensions
matrix operator-  (matrix mat1, matrix mat2); // Sub if same dimensions
matrix operator*  (matrix mat1, matrix mat2); // Multi if col1 == row2
matrix operator+  (matrix mat1, int scalar);  // Add a scalar
matrix operator-  (matrix mat1, int scalar);  // Subtract a scalar
matrix operatosr*  (matrix mat1, int scalar);  // Multiple by scalar
*/int main()
{
  int data1 [] = {15,365,14,4,32,6,7,8};
  int data2 [] = {13,213,9,12,9,6,9,5};
  int data3 [] = {10,100,10,100,10,100,10,100};
  matrix mat1(4, 2, data1), mat2(4, 2, data2), mat3(4, 2, data3);
  matrix res=mat1+mat2;
  cout<<"addition  "<<"  "<<res<<endl;
   matrix res1=mat1-mat2;
   cout<<"subtraction  "<<"  "<<res1<<endl;
   matrix res2=mat1+5;
   cout<<" + scalar  "<<"  "<<res2<<endl;
   matrix res3=mat1-8;
   cout<<" - scalar  "<<"   "<<res3<<endl;

  /*cout<<"this is mat 1 of data"<<endl;
  cout<<"*********************"<<endl;
  cout<<mat1<<endl;
  cout<<"this is mat 2 of data"<<endl;
  cout<<"*********************"<<endl;
  cout<<mat2<<endl;
  cout<<"*********************"<<endl;
  cout<<"this is the output + data"<<endl;
  cout<<(mat1+mat2);
  cout<<"********************"<<endl;
  cout<<"this is the output - data"<<endl;
  cout<<(mat1-mat2);
  cout<<"**************************"<<endl;
  cout<<"this is the output + scalar"<<endl;
  cout<<(mat1+7);
   cout<<"**************************"<<endl;
  cout<<"this is the output - scalar"<<endl;
  cout<<(mat1-9);
/*
 The next code will not work until you write the functions
  cout << mat1 << endl;
  cout << mat2 << endl;
  cout << mat3 << endl;

  cout << (mat1 + mat3) << endl << endl;
  cout << (mat3 + mat3) << endl << endl;

  ++mat1;
  cout << mat1 << endl;

  mat1+= mat3 += mat3;
  cout << mat1 << endl;
  cout << mat2 << endl;
  cout << mat3 << endl;
  // Add more examples of using matrix
  // .......
*/
  return 0;
}
/*
//__________________________________________
// Takes an array of data and stores in matrix according
// to rows and columns
void createMatrix (int row, int col, int num[], matrix& mat) {
  mat.row = row;
  mat.col = col;
  mat.data = new int [row * col];
  for (int i = 0; i < row * col; i++)
    mat.data [i] = num [i];
}

ostream& operator<<(ostream& out,matrix mat)
{
    for(int i=0;i<mat.row;i++)
    {
       for(int j=0;j<mat.col;j++){
            out<<mat.data[i*mat.col+j]<< " ";
     }
     out<<endl;
}
return out;

}
matrix operator-(matrix mat1,matrix mat2)
{
    matrix mat5;
    int arr[mat1.row*mat1.col];
    createMatrix(mat1.row,mat1.col,arr,mat5);
    for(int i=0;i<mat1.row*mat1.col;i++)
    {
        mat5.data[i]=mat1.data[i]-mat2.data[i];
    }
    return mat5;
}
/*
matrix operator+(matrix mat1,matrix mat2)
{
    matrix mat6;
    int arr1[mat1.row*mat1.col];
    createMatrix(mat1.row,mat1.col,arr1,mat6);
    for(int i=0;i<mat1.row*mat1.col;i++)
    {
        mat6.data[i]=mat1.data[i]+mat2.data[i];
    }
    return mat6;
}
matrix operator+  (matrix mat1, int scalar)
{
 matrix mat7;
    int arr2[mat1.row*mat1.col];
    createMatrix(mat1.row,mat1.col,arr2,mat7);
    for(int i=0;i<mat1.row*mat1.col;i++)
    {
        for(int j=0;j<mat1.row*mat1.col;j++)
        {
            if(i==j)
            {
                mat7.data[i*mat1.col+j]=mat1.data[i*mat1.col+j]+scalar;
            }
            else
                 mat7.data[i*mat1.col+j]=mat1.data[i*mat1.col+j];
        }
    }
    return mat7;

}
matrix operator-  (matrix mat1, int scalar)
{
 matrix mat8;
    int arr3[mat1.row*mat1.col];
    createMatrix(mat1.row,mat1.col,arr3,mat8);
    for(int i=0;i<mat1.row*mat1.col;i++)
    {
        for(int j=0;j<mat1.row*mat1.col;j++)
        {
            if(i==j)

            {
                mat8.data[i*mat1.col+j]=mat1.data[i*mat1.col+j]+scalar;
            }
            else
                 mat8.data[i*mat1.col+j]=mat1.data[i*mat1.col+j];
        }
    }
    return mat8;

}
*/
ostream& operator<<(ostream& out,matrix mat)
{
    for(int i=0;i<mat.row;i++)
    {
       for(int j=0;j<mat.col;j++){
            out<<mat.data[i*mat.col+j]<< " ";
       }
     }
     out<<endl;
     return out;
}
