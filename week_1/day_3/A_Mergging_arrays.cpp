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
    vector<ll>a(n),b(m),v(n+m);
   FOR(i,n)
   cin>>a[i];

   FOR(i,m)
   cin>>b[i];
int i=0,j=0,k=0;
while(i<a.size() && j<b.size())
{
	if(a[i]<=b[j])
	{
		v[k]=a[i];
		i++;k++;
	}
	else{
		v[k]=b[j];
		k++;j++;
	}

}

if(i<a.size())
{
	while(i!=a.size())
	{
		v[k]=a[i];
		i++;
		k++;
	}
}
if(j<b.size()){

	while(j!=b.size())
	{
		v[k]=b[j];
		k++;
		j++;
	}

}
// cout<<i<<" "<<j<<endl;


FOR(g,v.size())
cout<<v[g]<<" ";

}

int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(NULL); 
   
        solve();
    
    return 0; 
} 