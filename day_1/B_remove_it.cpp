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
   int n;
   cin>>n;
   ll x;
   cin>>x;
   vector<ll>v;
   ll a;

   for(int i=0;i<n;i++)
   {
       cin>>a;
      if(a!=x) v.push_back(a);
     
   }
    
    for(int i=0;i<v.size();i++)
    {
      cout<<v[i]<<" ";
    }

}

int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(NULL); 
  

        solve();
    
} 