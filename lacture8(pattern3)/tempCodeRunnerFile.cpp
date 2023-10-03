#include<iostream>
using namespace std;
int main(){
    /*
    First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
        
            1
         2 1
       3 2 1
   4 3 2 1
5 4 3 2 1
    
   int i,j;
   for(i=1; i<=5; i++){

    for(j=1;j<=5-i; j++){
        cout<<"  ";
    }
    for(j=i; j>=1; j--){
        cout<<j<<' ';
    }
    cout<<endl;
   }
   */
  /*
    Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
    
              A
          B B
       C C C
   D D D D
E E E E E
  int i, j; 
  for(i=1; i<=5; i++){
    for(j=1; j<=5-i; j++){
        cout<<" ";
    }
    for(j=1; j<=i; j++){
        char a='a'+i-1;
        cout<<a;
    }
    cout<<endl;
  }
  */
 
/*
Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

             5
         5 4
       5 4 3
   5 4 3 2 
5 4 3 2 1
 */
int i,j,k;
  
for(i=1; i<=5; i++){
  for(j=1; j<=5-i; j++){
    cout<<'-';