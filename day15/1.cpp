#include<iostream>
using namespace std;

int main(){
   /*
   1: Take a number n from the user 
   and print all the even numbers between 1 
   and n(inclusive). Do this using while and 
   do while loop separately.

   */ 
  int i,n;
  int ans=0;
    cin>>n;
    i=1;
    while (i<=n)
    {
        ans=ans*10+i;
        /* code */
        i++;
    // cout<<endl;
    cout<<ans<<endl;
    }
    
}