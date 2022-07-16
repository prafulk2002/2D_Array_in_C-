#include <iostream>
using namespace std;

int main()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;
    

    cout << endl << "Enter elements of 1st matrix: " << endl;

    // Storing elements of first matrix entered by user.
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    
    cout << endl << "Before Transpose: " << endl;
    for(i = 0; i < r; ++i)
    {
       for(j = 0; j < c; ++j)
       {
           cout <<a[i][j]<<" ";
       }
       cout<<endl;
    }

    
    cout << endl << "After Transpose: " << endl;
    for(i = 0; i < r; ++i)
    {
        for(j = 0; j < c; ++j)
        {
            int temp= a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }       

    // Displaying the resultant sum matrix.
    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
    {
        for(j = 0; j < c; ++j)
        {
            cout <<a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}