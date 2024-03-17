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

int count_triples(int S,int T)
 {
    int count = 0;
    for (int a=0;a<=S;++a)
     {
        for (int b=0;b<=S-a;++b)
        {
            if (a*b==0)
           { 
           count+=(S-a-b+1);

           } 
           else 
            {
              int max_c=min(T/(a * b),S-a-b);
                count+=(max_c+1);
            }
            }
      }
      return count;
}

int main() {
    int S,T;
    cin>>S>>T;
    cout<<count_triples(S,T)<<endl;
    return 0;
}
