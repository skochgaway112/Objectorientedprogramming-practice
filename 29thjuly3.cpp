#include<iostream>
using namespace std;
int main(){
    int i;
    int k;
    cin>>k;
    int a[k];
    for(i=0;i<k;i++){
        cin>>a[i];
    }
       int n;
       cin>>n;
       if(n<0 || n>10){
           cout<<"Invalid input"<<endl;
       }else{
           for(i=n-1;i<k;i++){
               a[i]=a[i+1];
           }
               k--;
               for(i=0;i<k;i++){
                   cout<<a[i];
               }
       }
    return 0;
}