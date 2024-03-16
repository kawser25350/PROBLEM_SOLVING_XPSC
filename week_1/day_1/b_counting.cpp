/* autor: Kawser Ahmmed
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


void solve()
{
    int a,b;
    cin>>a>>b;
    if(a>=b)
    {
    	cout<<"0"<<'\n';
    	return;
    }
   cout<<b-a+1<<'\n';
}

int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(NULL); 
    

        solve();
    
    return 0; 
} 