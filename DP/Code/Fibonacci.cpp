#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll f[100005];

//DP Top-down:Memoization
ll fibonacci(int n)
{
    //base condition
    if(n == 1) return 1;
    if(n == 2) return 2;

    //memoization
    if(f[n] != -1) return f[n];

    //calculate base on subproblems
    f[n] = fibonacci(n-1) + fibonacci(n-2);
    return f[n];
}

int main()
{
    int n;
    //cin >> n;
    //base state: Neo
    for(int i = 1 ; i <= 100000 ; i++) f[i] = -1;
    f[1] = 1;
    f[2] = 1;

    //DP Bottom-Up: Tabulation
    /*for(int i = 3 ; i <= n ; i++)
    {
        f[i] = f[i-1] + f[i-2];
        cout << f[i] << " ";
    }
    cout << endl;*/
    for(int i = 1 ; i <= 50 ; i++)
        cout << fibonacci(i) << " ";

}
