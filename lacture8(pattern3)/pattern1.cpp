#include<iostream>
using namespace std;
int main(){
    int i,j,n;
        cin>>n;
    for(i=1; i<=n; i++){

        for(j=0; j<=n-i; j++){
                cout<<j;
        }
        for(j=1; j<=i; j++){
            cout<<j<<' ';
        }
        cout<<endl;
    }
}