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
}