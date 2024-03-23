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
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

 vector<string>v(n);

    for(int i = 0; i < n; i++)
    {
        int r;
        cin >> r;

        cin>>v[i];

       
    }
    
    for(int i=0;i<n;i++)
    {
        while(!v[i].empty())
        {
            char x= v[i].front();
             v[i].erase(0,1);

            if(arr[i]==9 && x=='D')
            {
               arr[i]=0;
            }
            else if(arr[i]==0 && x=='U')
            {
                arr[i]=9;
            }
            else if(x=='U')
            {
                 arr[i]--;
            }
            else if(x=='D')
            {
                  arr[i]++;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

cout<<endl;
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