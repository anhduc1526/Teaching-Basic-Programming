#include <bits/stdc++.h>
using namespace std;

const int mod = 14062008;
int n, k, f[100005];
bool br[100005];

int main()
{
    cin >> n >> k;
    for(int i = 1 ; i <= k ; i++)
    {
        int x;
        cin >> x;
        br[x] = true;
    }

    f[1] = 1;
    for(int i = 2 ; i <= n ; i++)
    {
        if(!br[i])
        {
            f[i] = f[i-2] + f[i-1];
            f[i] %= mod;
        }
        else f[i] = 0;
    }
    cout << f[n];

}
