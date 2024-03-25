/* Author: Kawser Ahmmed
 * 2024
 * 
 */
#include "bits/stdc++.h" 
using namespace std; 
#define mod 1e9 + 7 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 
#define     YES                             printf("YES\n")
#define     Yes                             printf("Yes\n")
#define     NO                              printf("NO\n")
#define     No                              printf("No\n")


void solve()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
 bool know=false;

    for(int i=0;i<n;i++)
    {
        if(a[i]=='G' && b[i]=='B'|| a[i]=='B' && b[i]=='G')
        {
        	know=true;
        }
        else if(a[i]==b[i])
        {
        	know=true;
        }
        else {
             know=false;
        	break;
        }
        
    }

    if(know)
    {
    	cout<<"YES"<<'\n';
    }
    else{
    	cout<<"NO"<<'\n';
    }
}

int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(NULL); 
    int T; 
    cin >> T; 
    while (T--) { 

        solve();
    } 
    return 0; 
} 