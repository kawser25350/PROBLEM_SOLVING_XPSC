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
    int n,m;
    cin>>n>>m;
    vector<ll>a(n),b(m);
   FOR(i,n)
   cin>>a[i];

   FOR(i,m)
   cin>>b[i];
int i=0,j=0;
ll ans=0;

while(i<n && j<m)
{
   ll cnt1=0,cnt2=0,cur=a[i];

   while(cur==a[i] && i< n)
   {
    cnt1++;
    i++;
   }

   while(cur>b[j] && j<m)
   {
    j++;
   }

   while(cur==b[j] && j<m)
   {
    cnt2++;
    j++;
   }

ans+=(cnt1*cnt2);

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