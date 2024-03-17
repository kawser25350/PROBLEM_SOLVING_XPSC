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
  ll a[n];


ll mins = INT_MAX;
ll sum=0;

  for(int i=0;i<n;i++)
  {
     cin>>a[i];
     sum+=a[i];

     if(a[i] < mins && a[i]%2!=0)
     {
     	mins=a[i];
     }
  }
 
 if(sum%2==0)
 {
 	cout<<sum<<'\n';
 	return;
 }
 cout<<sum-mins<<'\n';
}

int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(NULL); 
  

        solve();
   }