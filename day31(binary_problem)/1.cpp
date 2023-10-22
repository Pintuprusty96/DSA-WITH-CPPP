#include <iostream>
using namespace std;

int main()
{
    /*
    int n, arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i > 0; i--)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            cout << mid;
            return 0;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << -1;
    return 0;
    */
    /*
 //    use binary algo sorted in array find the target value
     int n;
     cin>>n;
     int arr[1000];
     for(int i=0; i<n; i++){
         cin>>arr[i];
     }
     int start = 0;
     int end = n - 1, mid;
     int key;
     cin >> key;
     while(end>=start){
         mid=start+(end-start)/2;//integer when the biger so it will not over flow
         if(arr[mid]==key){
             cout<<mid;
             return 0;          //when the key value is find then loop will be the break;
         }
         else if(arr[mid]<key){
             start=mid+1; // key value is bigger to arr[mid] then it will be increasing 1;
         }
         else{
             end=mid-1;   // key value is smaller to arr[mid] the end value is decreasing -1;
         }
     }
     cout<<-1;
     return 0;
    */

    /*
    // find first and last position of the sorted array using binary search


   int n=6, arr[1000]={5,7,7,8,8,10},key=0;

   int start=0,end=n-1,first=-1,last=-1,mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr [mid]==key){
                first=mid;
                end=mid-1;
            }
            else if(arr [mid]<key){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        start=0;
        end=n-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr [mid]==key){
                last=mid;
                start=mid+1;
            }
            else if(arr [mid]<key){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        cout<<first<<' '<<last;
    */
    /*
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. 
The returned integer should be non-negative as well.

 You must not use any built-in exponent function or operator.

 For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
    */
   int x;
   cin>>x;
   int start=0; 
   int end=x;
   int ans=0,mid;
   while(start<=end){
        mid=start+(end-start)/2;
        if(mid*mid==x){
            ans=mid;
            break;
        }
        else if(mid*mid<x){
            ans=mid;
            start=mid+1;
        }
        else
            end=mid-1;
   }
   cout<<ans;

}