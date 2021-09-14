
#include <bits/stdc++.h>
using namespace std;
 

void primenumbers(int a, int b)
{
    int flag;
    for (int i =a; i <= b; i++) {
        if (i == 1 || i == 0)
            continue;
        flag = 1;
         for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
 
        
        if (flag == 1)
            cout << i << " ";
    }
}
 

int main()
{
    
    
    int x;
    int y;
     cout<<"Enter the numbers between which prime numbers have to be printed:";
     cin>>x;
     cin>>y;
    
    primenumbers(x, y);
 
    return 0;
}