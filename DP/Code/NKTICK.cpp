#include <bits/stdc++.h>
using namespace std;

int n, t[60005], r[60005];
int f[60005];

int main()
{
    cin >> n;
    for(int i = 1 ; i <= n ; i++) cin >> t[i];
    for(int i = 1 ; i < n ; i++) cin >> r[i];

    f[0] = 0;
    f[1] = t[1];

    for(int i = 2 ; i <= n ; i++)
    {
        f[i] = min(f[i-1] + t[i], f[i-2] + r[i-1]);
    }
    cout << f[n];
}
