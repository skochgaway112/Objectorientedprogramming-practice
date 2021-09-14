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
    int rollno;
    int m[5];
};
vector<pair<double, string>>v;
int sum2(struct student s)
{
    int sum = 0;
    for (ll i = 0; i < 5; i++)
    {
        sum = sum + s.m[i];
    }
    return sum;
}
double percentage(struct student s)
{
    int sum = sum2(s);
    double p = sum / 5.0;
    v.push_back(mp(p, s.name));
    return p;
}
void displaydetails(struct student s)
{
    cout << "Name = " << s.name << endl;
    cout << "Roll No = " << s.rollno << endl;
    cout << "Marks of 5 subjects " << endl;
    for (ll i = 0; i < 5; i++)
    {
        cout << s.m[i] << " ";
    }
    cout << "\n";
    cout << "Sum is  " << sum2(s) << endl;
    cout << "Percentage is  " << percentage(s) << "\n\n";
}
void displayrange(int x, int y, struct student s)
{
    double p = percentage(s);
    if (p >= x && p <= y)
    {
        cout << s.name << " " << p << endl;
    }
}
void displaysortResult(int n)
{
    cout << "On sorting \n";
    int t;
    string t1;
    for (ll i = 0; i < n - 1; i++)
    {
        for (ll j = 0; j < n - i - 1; j++)
        {
            if (v[j].first > v[j + 1].first)
            {
                t = v[j + 1].first;
                v[j + 1].first = v[j].first;
                v[j].first = t;

                t1 = v[j + 1].second;
                v[j + 1].second = v[j].second;
                v[j].second = t;
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second;
    }
}
int main()
{
    fast();
    int n;
    cin >> n;
    struct student s[n];
    int x, y;
    cin >> x >> y;
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i].name;
        cin >> s[i].rollno;
        for (ll j = 0; j < 5; j++)
        {
            cin >> s[i].m[j];
        }
        displaydetails(s[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        displayrange(x, y, s[i]);

    }
    displaysortResult(n);
}