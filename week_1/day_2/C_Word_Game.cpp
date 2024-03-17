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
    vector<string> a(n),b(n),c(n);
    unordered_map<string,int>mp;

 for(int i=0;i<3;i++)
 {
	for(int j=0;j<n;j++)
	{
        string x;
       
        cin>>x;
         mp[x]++;
        if(i==0) a.PB(x);
        if(i==1) b.PB(x);
        if(i==2) c.PB(x);
	}
 }
 int p1=n*3,p2=n*3,p3=n*3;
 
 for( string r: a)
 {
 	if(mp[r]>1)
 	{
 		p1-=mp[r];
 	}
 	
 }
 cout<<p1<<" ";

for( string r: b)
 {
 	if(mp[r]> 1)
 	{
 		p2-=mp[r];
 	}
 	
 }
 cout<<p2<<" "; 

for( string r: c)
 {
 	if(mp[r]>1)
 	{
 		p3-= mp[r];
 	}
 	
 }
 cout<<p3<<" "; cout<<'\n';

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