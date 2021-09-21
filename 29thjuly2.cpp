#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 int count=0;
 for(int i=4;n!=count;i++){
     for(int j=2;j*j<=i;j++){
         if(i%j==0){
             cout<<i<<" ";
             count++;
             break;
         }
     }
 }
}