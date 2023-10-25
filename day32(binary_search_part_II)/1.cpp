#include<iostream>
using namespace std;
int main(){
    /*
        // 852. Peak Index in a Mountain Array
        // Solved
        // Medium
        // Topics
        // An array arr is a mountain if the following properties hold:
    int n,arr[1000];
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=n-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]>arr[mid-1]&& arr[mid]>arr[mid+1]){
            cout<<mid;
            break;
        }
        else if(arr[mid]>arr[mid-1]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return 0;
    */
   /*
        //  153. Find Minimum in Rotated Sorted Array
        // Medium
        // Topics
        // Companies
        // Hint
        // Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

        // [4,5,6,7,0,1,2] if it was rotated 4 times.
        // [0,1,2,4,5,6,7] if it was rotated 7 times.
   */
  int n, arr[1000];
  cin>>n;
  for(int i=0; i<n; i++){
        cin>>arr[i];
  }
  int start=0, end=n-1,mid,ans=arr[0];
    mid=start+(end-start)/2;
  while(start<=end){
    mid=start+(end-start)/2;
    if(arr[mid]>arr[0]){
        start=mid+1;
    }
    else{
        ans=mid;
        end=mid-1;
    }
  }
  cout<<ans;
  return 0;
}
