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


int main()
{

    long t;
     scanf("%ld", &t);
    while(t--){
        long n;
         scanf("%ld", &n);
        long res(0);
        for(long p = 1; p <= n; p++){
            long x;
             scanf("%ld", &x);
            long diff = x - p;
            res = (res > diff) ? res : diff;
        }

        printf("%ld\n", res);
    }

}