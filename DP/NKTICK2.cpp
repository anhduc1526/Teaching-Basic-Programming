#include <bits/stdc++.h>
using namespace std;

int n, t[60005], r[60005];
int f[60005];

int solve(int x)
{
    if(f[x] != -1) return f[x];
    f[x] = min(solve(x-1) + t[x], solve(x-2)+r[x-1]);
    return f[x];
}

int main()
{
    cin >> n;
    for(int i = 1 ; i <= n ; i++) cin >> t[i];
    for(int i = 1 ; i < n ; i++) cin >> r[i];

    for(int i = 1 ; i <= n ; i++) f[i] = -1;
    f[0] = 0;
    f[1] = t[1];

    /*
    Bottom-up
    for(int i = 2 ; i <= n ; i++)
    {
        f[i] = min(f[i-1] + t[i], f[i-2] + r[i-1]);
    }*/

    //Top-down
    cout << solve(n);
}

