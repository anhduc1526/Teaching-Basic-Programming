#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        bool check = true;
        cin >> a >> b;


        //Process
        if((a + b)%3 != 0)
        {
            check = false;
        }
        else
        {
             if(b > 2*a || a > 2*b) check = false;
        }

        //(người thành phố)
        cout << (check?"YES":"NO") << endl;


        //(người nông thôn)
        if(check == true) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}
