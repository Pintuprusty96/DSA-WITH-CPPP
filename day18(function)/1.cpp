#include<iostream>
using namespace std;
bool prime(int n){
   if(n<2){
    return 0;
   }
   for(int i=2; i<n; i++){
        if(n%i==0)
        return 0;
   }
   return 1;
}
int fact(int n){
    int ans = 1;
    for(int i=1; i<=n; i++){
        ans = ans *i;
    }
    return ans;
}
int main(){
    int c,d;
    cin>>c>>d;
    // cout<<sun(c,d);
    int ans =prime(c);
    cout<<ans<<endl;
    
    cout<<fact(d)<<endl;
    cout<<endl;
    cout<<fact(d+c)<<endl;
}
// pass by reference  syntax(&)