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


void solve() {
    int n, l;
    cin >> n >> l;
    vector<string> v(n);

    // Input the strings
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int minsum = INT_MAX;

    // Find the pair of strings with minimum absolute difference
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = 0;
            for (int k = 0; k < l; k++) {
                // Convert characters to integers and calculate absolute difference
                sum += abs(v[i][k] - v[j][k]);
            }
            // Update minsum if we found a smaller difference
            minsum = min(minsum, sum);
        }
    }

    cout<< minsum << endl;
}

// int sum=0;

//   vector<int>pq;

//     for(int i=0;i<n;i++)
//     {
//     	sum=0;
//     	for(int j=0;j<l;j++)
//     	{
//            sum+=int(v[i][j]-'a');
//     	}
//     	pq.push_back(sum);
    	 
//     }

//     sort(pq.begin(),pq.end());
//     int minsum=INT_MAX;

// for(int i=0;i<pq.size()-1;i++)
// {
//   for(int j=i+1;j<pq.size();j++)
//   {
//   	minsum = min((abs(pq[i]-pq[j])),minsum);
//   }
   
// }
//  cout<<abs(pq[0]-pq[1])<<" ";//diff of first 2 index

// cout<<minsum<<'\n';// //diff of min 2 pair



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