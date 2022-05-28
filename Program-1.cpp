//Program to read a matrix of size m x n form the keyboard and display the same using functions.
#include <iostream>
using namespace std;
int matrix[100][100];
void taking_input(int row, int col)
{
    for(int i=0; i<row; i++ ){
        for(int j=0; j<col; j++){
          cout << "Enter element ["<<i<<"]["<<j<<"] of matrix: ";
          cin >> matrix[i][j];
        }
        cout << "\n";
    }
}
void output(int row, int column)
{
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
}
int main()
{
    int rows, columns;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> columns;
    taking_input(rows, columns);
    cout << "The entered 2-D matrix is: \n";
    output(rows, columns);
}
