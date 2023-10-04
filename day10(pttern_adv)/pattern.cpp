#include<iostream>
using namespace std;

int main(){
   
   /*
        * 
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
    int i,j,k,l;

    for(i=1; i<=5; i++){

        for(j=1; j<= 5-i; j++){
            cout<<"  ";
        }

        for(k=1; k<=2*i-1; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
   */
  /*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1 
    int i , j , k ,l, n;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=1; i<=n; i++){

        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }

        for(k=1; k<=(2*i-1)/2; k++){
            cout<<k<<" ";
        }
        for(l=i; l>=1; l--){
            cout<<l<<" ";
        }
        cout<<endl;
    }

    */

   /*
            1    
          1 2 1
        1 2 3 2 1
      1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1
  1 2 3 4 5 6 5 4 3 2 1
1 2 3 4 5 6 7 6 5 4 3 2 1 
   int i,j,k,l,n;
   cout<<"enter the number: ";
   cin>>n;
   for(i=1; i<=n; i++){
    //space print
    for(j=1;j<=n-i; j++){
        cout<<"  ";
    }
    //1 to row print
    for(k=1; k<=i; k++){
        cout<<k<<" ";
    }
    //i to 1 print(reverse)
    for(l=i-1; l>=1; l--){
        cout<<l<<" ";
    }
    cout<<endl;
   */

    // int i,j,k,l;

    // for(i=1; i<=5; i++){

    //     for(k=1; k<=i-1; k++){
    //         cout<<"  ";
    //     }
    //     for(j=i; j<=5; j++){
    //         cout<<j<<" ";
    //     }
    //     for(l=1; l<=5-i; l++){
    //         cout<<l<<" ";
    //     }
    //     cout<<endl;
    // }
    /*
     1 
    2 1
   3 2 1
  4 3 2 1
 5 4 3 2 1
 5 4 3 2 1
  5 4 3 2
   5 4 3
    5 4
     5
    int i,j,n;
    // cin>>n;

    for(i=1; i<=5; i++){
        //space
        for(j=5; j>=i; j--){
            cout<<" ";
        }
        
        for(j=i; j>=1; j--){
            cout<<"*"<<" ";
        }
                            // for(j=1; j<=i-1; j++){
                            //     cout<<"-";
                            // }
                            // // star (*)
                            // for(j=i; j<=n*2-i; j++){
                            //     cout<<j;
                            // }
        cout<<endl;
    }
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            cout<<" ";
        }
        for(j=5; j>=i; j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    */
   }
