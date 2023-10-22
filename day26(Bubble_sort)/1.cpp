#include <iostream>
using namespace std;

int main()
{
    /*
    // using bubble sort algorithm  print the asending order
    int arr[1000], n; //increasing order
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool swapped = 0;
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swapped = 1;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (swapped = 0)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    */
    ///////////////////////////////////////////////////////////
    /*
    int n, arr[1000];
    cout<<"enter number: ";
    cin>>n;
    for(int i=0; i<n; i++){
         cin>>arr[i];
    }
     bool swapped=0;
    for(int i=n-1; i>0; i--){

         for(int j=0; j<i; j++){
             if(arr[j]<arr[j+1])
             swapped=1;
                 swap(arr[j],arr[j+1]);
         }
         if(swapped =0){
             break;
         }
    }
    for(int i=0; i<n; i++){
         cout<<arr[i]<<' ';
    }

    */
    /////////////////////////
    /*
    Input: nums = [3,2,2,3], val = 3
  Output: 2, nums = [2,2,_,_]
   int n;
   int num[1000];
   cin>>n;
   for(int i=0; i<n; i++){
      cin>>num[i];
   }
   int val =2;
   int count=0;
   for(int i=0; i<n; i++){
      if(num[i]==val){
          continue;
      }
      count++;
   }
   cout<<count;
    */
    ///////////////////////////////////////////////////////////////
    /*
        3: Bubble Sort Algorithm to sort the array of in ascending order.
    int n, arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // So, in summary, the time complexity is O(n^2) in the worst and average cases,
    //  and O(n) in the best case. The space complexity is O(1) for this code.
     */

    //////////////////////////////////////////
    /*
        3: Bubble Sort Algorithm to sort the array of char in ascending order.
    int n;
    char arr[1000];
        cin>>n;
        for(char i=0; i<n; i++){
            cin>>arr[i];
        }
    bool swapped=0;
    for(char i=0; i<n-1; i++){

        for(char j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swapped=1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped=0){
            break;
        }
    }
    for(char i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
    */

    /*
     2: Bubble Sort Algorithm to sort the array of integers in increasing order
     by taking the smallest number to first place by starting from the last.
     Question was explained in the class.
   int n;
   int arr[1000];
   cin>>n;
   for(int i=0; i<n; i++){
     cin>>arr[i];
   }

   for(int i=0; i<n-1; i++){

     for(int j=n-1; j>0; j--){
         if(arr[j]<arr[j-1]){
             swap(arr[j],arr[j-1]);
         }
     }
   }
   for(int i=0; i<n; i++){
     cout<<arr[i]<<' ';
   }
    */
}
