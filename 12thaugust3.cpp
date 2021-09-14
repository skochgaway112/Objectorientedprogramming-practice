#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void complexnumbers(){
int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "After Adding " << a + c << "+" << b + d << "i" << endl;
    if (b - d < 0)
        cout << "After subtracting " << a - c << b - d << "i" << endl;
    else
        cout << "After subtracting " << a - c << "+" << b - d << "i" << endl;
    int m1 = a * c - (b * d);
    int m2 =a * d + c * b;
    if (m2 > 0)
        cout << "After Multiplying" << m1 << "+" << m2 << "i" << endl;
    else
        cout << "After Multiplying" << m1 << m2 << "i" << endl;
    float z1 = (float)((a * c + b * d) / (c * c + d * d));
    float z2 = (float)((b * c - a * d) / (c * c + d * d));
    if (z2 > 0)
    {
        cout << "After Dividing " << z1 << "+" << z2 << "i" << endl;
    }
    else
        cout << "After Dividing " << z1 << z2 << "i" << endl;


}


int main()
{
    complexnumbers();
    return 0;

}