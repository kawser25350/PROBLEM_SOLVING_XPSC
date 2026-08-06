/*
 * Author: Kawser Ahmmed
 * File: Sum_of_Subarrays.cpp
 * Date: 2026-08-07
 * Time: 00:56:41
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fast_code ios::sync_with_stdio(0); cin.tie(NULL);

int32_t main()
{
    fast_code

    int n, q; 
    cin >> n >> q; 

    vector<int> v(n); 
    for(auto &c : v) cin >> c; 

    // p1 stores prefix sums of i^2 * v[i-1]
    // p2 stores prefix sums of i * v[i-1]
    // p3 stores prefix sums of v[i-1]
    vector<int> p1(n+1, 0), p2(n+1, 0), p3(n+1, 0); 

    for(int i = 1; i <= n; i++){
        p1[i] = p1[i-1] + (i * i) * v[i-1]; 
        p2[i] = p2[i-1] + i * v[i-1]; 
        p3[i] = p3[i-1] + v[i-1];   
    }

    while(q--){
        int l, r; 
        cin >> l >> r; 
        
        // Range sums for range [l, r]
        int s1 = p1[r] - p1[l-1]; 
        int s2 = p2[r] - p2[l-1]; 
        int s3 = p3[r] - p3[l-1];
        
        // Formula: -s1 + (l + r)*s2 + (1 - l)*(r + 1)*s3
        int fin = -s1 + (l + r) * s2 + (1 - l) * (r + 1) * s3; 

        cout << fin << endl; 
    }

    return 0;
}