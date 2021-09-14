#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
using namespace std;
void fast()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
struct student
{
    string name;
    int id;
    int age;
    int bs;
};
double Da(int bs)
{
    return 0.80 * bs;
}
double hra2(int bs)
{
    return 0.1 * bs;
}
void display( struct student s, int da, int hra, int gross)
{
    cout << s.name << " " << s.age << " " << s.id << " " << da << " " << hra << " " << gross << endl;
}
int main()
{
    fast();
    int n;
    cin >> n;
    struct student s[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> s[i].name;
        cin >> s[i].age;
        cin >> s[i].id;
        cin >> s[i].bs;
        double da = Da(s[i].bs);
        double hra = hra2(s[i].bs);
        double gross = s[i].bs + da + hra;
        display( s[i], da, hra, gross);
    }
return 0;

}