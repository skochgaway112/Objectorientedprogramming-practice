#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void factorial(){
    int i;
    int final1=1;
    int n;
    cout<<"Enter the number for which the factorial is to be found :";
    cin>>n;
    for(i=1;i<=n;i++){
        final1=final1*i;
    }
    cout<<"Answer is :"<<" "<<final1<<endl;
}
int main(){
    factorial();
    return 0;
}