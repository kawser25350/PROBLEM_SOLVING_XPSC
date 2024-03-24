#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k,s;
    cin >> k >> s;
    int cnt=0;
    for(int i=0; i<=k; i++)
    {
        for(int j=0; j<=k; j++)
        {
            if(s-i-j>=0 && s-i-j<=k)
            {
                cnt++;
            }
        }
    }

    cout << cnt << '\n';
    return 0;
}