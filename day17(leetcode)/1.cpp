#include<iostream>
using namespace std;
int main(){
    /* 
    leap year
    int num;
    cin>>num;
    if(num%400){
        cout<<"yes leap year";
    }
    else if(num%4==0 && num%100!=0){
        cout<<"leap year";
    }
    else {
        cout<<"not a leap year";
    }
    */
   /*
   reverse integer

  int n;
  cin>>n;
  int rem,ans=0;

  while (n){
    rem=n%10;
    n/= 10;
    ans=ans*10+rem;
  }
    cout<<ans<<" "<<endl;
   */
  /* 
  power of two
 int n=12;
    if(n<1)
    cout<<0;
    while (n!=1){
        if(n%2==1)
            cout<<0;
        
        n=n/2;
    }
    cout<<endl;
    cout<<"yes";
  */
 /* palindrome
 */
 int n=-1201;
 int rem, num=n, res=0;
 while(num>0){
    rem=num%10;
    num = num/10;
    res = res * 10 + rem;
 }
 if(n==res){
    cout<<1;
 }
 else{
    cout<<0;
 }
  
}