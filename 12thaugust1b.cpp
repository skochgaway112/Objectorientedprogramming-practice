#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void factorial(int n){
  int i;
    int final1=1;
    
        for(i=1;i<=n;i++){
        final1=final1*i;
    }
    cout<<"Answer is :"<<" "<<final1<<endl;   
}
int main(){
    int n;
    cout<<"Enter the number for which the factorial is to be found :";
    cin>>n;
    factorial(n);
    return 0;
}