#include <iostream>
using namespace std;
int main()
{
    /*

    2: Selection Sort Algorithm to sort the array of integers
    in increasing order by taking the highest number to last place.
    Question was explained in the class.

    int arr[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }
        swap(arr[index], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    */
    /*
     1: Selection Sort Algorithm to sort the array of integers in decreasing order
   int n;
   cin>>n;
   int arr[1000];
   for(int i=0; i<n; i++){
     cin>>arr[i];
   }

   for(int i=0; i<n-1; i++){
     int index=i;
     for(int j=i+1; j<n; j++ ){
         if(arr[j]>arr[index]){
             index=j;
         }
     }
     swap(arr[index],arr[i]);
   }
   for(int i=0; i<n; i++){
     cout<<arr[i]<<" ";
   }
    */
    /*
      3: Selection Sort Algorithm to sort the array of char in ascending order.
    */
   char arr[4]={'s','d','f','e'};

   for(int i=0; i<4; i++){
        char a = i+1;
        cout<<a;
   }
}