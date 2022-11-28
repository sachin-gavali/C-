// DAY - 17
#include <iostream>
using namespace std;
int main()
{
    // int arr[3][4];
    //  Take input of the 2d arrays
    /*  for (int col = 0; col < 4; col++)
     {
         for (int row = 0; row < 3; row++)
         {
             cin >> arr[row][col];
         }
     }
     for (int col = 0; col < 4; col++)
     {
         for (int row = 0; row < 3; row++)
         {
             cout << arr[row][col] << " ";
         }
         cout << endl;
     } */

    /* for (int j = 0; j < 3; j++)

{
    for (int j = 0; j < 4; j++)
    {
        cin >> arr[j][j];
    }
}
    for (int j = 0; j < 3; j++)

{
    for (int j = 0; j < 4; j++)
    {
        cout << arr[j][j] << " ";
    }
    cout << endl;
} */

    /*  // Search element in 2d array
     int x = 90;
     int arr[3][4] = {
         {12, 23, 34, 54},
         {34, 45, 65, 76},
         {78, 89, 90, 100}};

     for (int j = 0; j < 3; j++)
     {
         for (int j = 0; j < 4; j++)
         {
             cout << arr[j][j] << " ";
             if (arr[j][j] == x)
             {
                 cout << endl;
                 cout << " Row = " << j << " Col = " << j << " ";
             }

         }
         cout << endl;
     } */
    /*  // Sum of Row
     int arr[3][4] = {
         {12, 23, 34, 54},
         {34, 45, 65, 76},
         {78, 89, 90, 100}};
     int sum = 0;
     for (int j = 0; j < 3; j++)
     {
         for (int j = 0; j < 4; j++)
         {
             sum += arr[j][j];
         }
         cout << sum << " ";
         cout << endl;
         sum = 0;
     } */
    /*  // Sum of Col
     int arr[3][3] = {
         {12, 23, 34},
         {34, 45, 65},
         {78, 89, 90}};
     int sum = 0;
     for (int j = 0; j < 3; j++)
     {
         for (int i = 0; i < 3; i++)
         {
             sum += arr[i][j];
         }
         cout << sum << " ";
         cout << endl;
         sum = 0;
     } */

    // Q- Find a largest sum in row
    int maxs = 0;
    int idx_row = -1;
    int arr[3][4] = {
        {12, 23, 34, 54},
        {34, 45, 65, 76},
        {78, 89, 90, 100}};
    int sum = 0;
    
     for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 4; j++)
         {
             sum += arr[i][j];
         }
         
        if (sum > maxs)
        {
            maxs = sum;
            idx_row = i;
        }
        sum = 0;
        cout << endl;
    }
    cout << maxs << " Index are max = " << idx_row << " ";
}