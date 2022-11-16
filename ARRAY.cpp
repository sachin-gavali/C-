// DAY -4 ARRAY BESICS
#include <iostream>
using namespace std;
int BubleSort(int arr[5], int n);
void printArray(int a[], int x);
int arr[5] = {12, 94, 23, 53, 56};
int n = 5;
int main()
{

    // Q-0 REVERSE THE ARRAY
    /*   while (n != -1)
      {
          cout << arr[n] << " ";
          n--;
      } */

    // Q-2 FIND THE MAXIMUM AND MINIMUM ELEMENT IN THE ARRAY

    /*     int max = arr[4];
        int min = arr[4];
        while (n != -1)
        {
            if (arr[n] > max)
            {
                max = arr[n];
            }
            if (arr[n] < min)
            {
                min = arr[n];
            }
            n--;
        }
        cout << " Maximum No in the Array is : " << max << endl;
        cout << " Minimun No in the Array is : " << min << endl; */

    // Q-2 FIND THE KTH MIN ELEMENT IN THE ARRAY

    /* int k;
    // sort the array frist and then display it
    // frist get input of the kth element
    int temp = 0;
    cout << " Enter the kth element " << endl;
    cin >> k;
    int sort = BubleSort(arr,n);
    cout << " after  Sorting the element of a array " << endl;
    for (int p = 0; p <= n; p++)
    {
        cout << arr[p] << " ";
    }

   int BubleSort(int arr[5], int n);
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i; i++)
            {
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    } */

    // Q-3 GIVEN AN ARRAY WHICH CONSISTS OF ONLY 0S 1S 2S , SORT THE ARRAY WITH OUT USING THE ANY SORTING ALGO

    /* void printArray(int a[], int x);
    {

        for (int i = 0; i < x; i++)
        {
            cout << a[i] << " ";
        }
    }
    void sort012(int a[], int x);
    {
        int low = 0;
        int mid = 0;
        int high = x - 1;
        int temp = 0;
        while (mid <= high)
        {
            switch (a[mid])
            {
            case 0:

                temp = a[low];
                a[low] = a[mid];
                a[mid] = temp;
                low++;
                mid++;
                break;
            case 1:
            {
                mid++;
            }
            case 2:
            {

                temp = a[mid];
                a[mid] = a[high];
                a[high] = temp;
                high--;
            }
            }
        }
    } */
    /* int a[15] = {1, 0, 2, 1, 0, 0, 2, 1, 2, 0, 0, 0, 1, 1, 2};
    int x = 15;
    int low = 0;
    int mid = 0;
    int high = x - 1;
    int temp = 0;
    while (mid <= high)
    {
        switch (a[mid])
        {
        case 0:

            temp = a[low];
            a[low] = a[mid];
            a[mid] = temp;
            low++;
            mid++;
            break;
        case 1:
        {
            mid++;
        }
        case 2:
        {

            temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;
            high--;
        }
        }
    }

    for (int i = 0; i < x; i++)
    {
        cout << a[i] << " ";
    } */

    // Q-4  MOVE THE ALL THE NEGATIVE ELEMENT IN THE ONE SIDE OF THE ARRAY
    //  just sort the array then they can also sfift the one side
    //  using a bubble sort it is so eassy so let do this now
    /*  int array[10] ={ 12,-34,-54,23,-90,-78,34,65,-89,134};
     int idx = 10;
     for(int i = 0; i<idx-1; i++){
         for(int j = 0; j<idx-i-1;j++){
             if(array[j] > array[j+1]){
                 int temp = array[j];
                 array[j]= array[j+1];
                 array[j+1]= temp;

             }
         }

     }
     for(int i = 0; i<idx; i++){
         cout<< array[i]<<" ";
     } */

    // Q-5 WRITE A PROGRA TO CYCLICLALLY ROTATE AN ARRAY BY ONE
    //  last index of the element they come on the 1st index so let's do this
    while(n!=0)
    {
        arr[n-1] = arr[0];
        
        n--;
        cout<<arr[n] << " ";
    }
    return 0;
}