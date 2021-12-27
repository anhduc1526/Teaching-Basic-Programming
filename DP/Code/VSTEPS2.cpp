#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;

const int mod = 14062008;
int n, k, f[N];
bool br[N];

int solve(int i)
{
    if(f[i] != -1) return f[i];

    if(br[i] == true) f[i] = 0;
    else f[i] = solve(i-2) + solve(i-1);
    f[i] %= mod;
    return f[i];
}

int main()
{
    cin >> n >> k;
    for(int i = 1 ; i <= k ; i++)
    {
        int x;
        cin >> x;
        br[x] = true;
    }
    for(int i = 1 ; i <= n ; i++) f[i] = -1;
    f[1] = 1;
    cout << solve(n);
    

}

