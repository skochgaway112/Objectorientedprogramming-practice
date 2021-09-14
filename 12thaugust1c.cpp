#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int factorial(){
    int i;
    int n;
    int final1=1;
    cout<<"Enter the number for which the factorial is to be found :";
    cin>>n;
    for(i=1;i<=n;i++){
        final1=final1*i;
    }    
    
       return final1;
       
    
}

int main(){
    int final2;
   final2=factorial();
    cout<<"The answer is:"<<final2;
    return 0;
}