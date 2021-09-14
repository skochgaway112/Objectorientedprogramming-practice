#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int sumofnumbers(int n){
         if (n <= 1)
        return n;
    return n + sumofnumbers(n - 1);
    }
int main(){
    int n;
    cin>>n;
    cout<<sumofnumbers(n);
    return 0;
}