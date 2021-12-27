#include <bits/stdc++.h>
using namespace std;

int n, m, a[1005][1005];
int f[1005][1005], ans = 1;

int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n; i++)
        for(int j = 1 ; j <= m ; j++)
            cin >> a[i][j];

    for(int i = 1 ; i <= n ; i++) f[i][1] = 1;
    for(int i = 1 ; i <= m ; i++) f[1][i] = 1;

    for(int i = 2 ; i <= n; i++)
        for(int j = 2 ; j <= m ; j++)
    {
        f[i][j] = 1;
        if(a[i][j] == a[i-1][j-1] && a[i][j] == a[i-1][j] && a[i][j] == a[i][j-1])
        {
            f[i][j] = min(f[i-1][j-1], min(f[i-1][j], f[i][j-1])) + 1;
            ans = max(ans, f[i][j]);
        }
    }

    cout << ans;

}
