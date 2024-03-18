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


void solve()
{
    int n,k;
    cin>>n>>k;
    vector<ll>v(n);
    FOR(i,n)
    {
       cin>>v[i];
    }

    ll l=0,r=0,sum=0;
    ll ans=0;
    
    while(r<n)
    {
    	sum+=v[r];

    	if(r-l+1==k)
    	{
          ans=max(sum,ans);
          sum-=v[l];
          l++;
          r++;
    	}
    	else{
    		r++;
    	}
    }
cout<<ans<<'\n';


}

int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(NULL); 
   
        solve();
    
    return 0; 
} 