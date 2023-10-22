#include <iostream>
using namespace std;
int main()
{
    /*
    int arr[5]={1,2,4,6,4}; // reverse array
    int start =0 , end=4;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<' ';
    }
    */

    /*
    int arr[4]={2,4,1,9};//secund largest number

    int ans=-1;
    for(int i=0; i<4; i++){
         if(arr[i]>ans){
             ans = arr[i];
         }
    }
    int sec=-1;
    for(int i=0; i<4; i++){
         if(ans!=arr[i]){
             sec = max(sec,arr[i]);
         }
    }
    cout<<sec<<" ";
    */

    /*
    int n=4;// find the missing number in array
    int arr[1000]={1,3,4,5};
    int ans=0,ans2;

    for(int i=0; i<n-1; i++){
          ans=ans+arr[i];
    }
  //   cout<<ans;

      ans2= n*(n+1)/2;
      cout<<ans2-ans;
    */

    /*
    Fibonacci series
   int n;
   int arr[1000];
       arr[0]=0;
       arr[1]=1;
       for(int i=2; i<=n; i++){
           arr[i]=arr[i-1]+arr[i-2];
       }
       cout<<arr[n];
    */

    /*
    rotate the array
    int n=5;
    int arr[1000]={1,2,3,4,5};

    int temp=n-1;
    for(int i=n-2; i>=0; i--){
        arr[i+1]=arr[i];
    }
     arr[0]=temp;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    */

   int n=7;
   int arr[7]={1,1,2,2,2,2,3};
   int x=2;
//    cout<<sizeof(arr)/sizeof(arr[0]);
    int count=0;
   for(int i=0; i<n; i++){
        if(arr[i]==x){
            count++;
        }
   }
   cout<<count;
}
    /*
     //using function in array
     */
/*
#include<iostream>
using namespace std;
void array_fun(int a[],int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[5]={1,2,4,5,6};
    array_fun(arr,5);
}
*/