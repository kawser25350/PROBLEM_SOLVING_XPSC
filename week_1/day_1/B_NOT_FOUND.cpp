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
    bool arr[27]={false};

    string a;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
    	arr[a[i]-'a']=true;
    }
    bool missing=false;
    int i;
    for(i=0;i<26;i++)
    {
      if(!arr[i])
      {
      	missing=true;
      	cout<<char(i+'a')<<'\n';
      return;
      }
    }
   cout<<"None"<<'\n';
 
}

int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(NULL); 
   

        solve();
   
    return 0; 
} 