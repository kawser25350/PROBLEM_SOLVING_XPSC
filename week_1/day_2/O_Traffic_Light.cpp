#include<bits/stdc++.h>
using namespace std;
void task(string s,int n,char k){
	     if(k=='g')
	     {
	         cout<<0<<endl;
	         return;
	     }
	     int fg=-1;
	     for(int i=0;i<n;i++){
	         if(s[i]=='g'){
	             fg=i;
	             break;
	         }
	     }


	     vector<int>next_green(n,-1);
	     for(int i=n-1;i>=0;i--){
	         if(s[i]=='g')
	         next_green[i]=i;
	         else{
	             if(i==(n-1))
	             next_green[i]=fg;
	             else
	             next_green[i]=next_green[i+1];
	         }
	     }
	  
	     
	     int ans=-1;
	     
	     for(int i=n-1;i>=0;i--){
	         if(s[i]==k)
	         {
	             if(next_green[i]>i)
	             ans=max(ans,next_green[i]-i);
	             else
	             ans=max(ans,n-i+next_green[i]);
	         }
	     }
	         cout<<ans<<endl;
	         return;
}
int main(){
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	     char k;
	     cin>>k;
	    string s;
	    cin>>s;
	    
	     
	     task(s,n,k);
	     
	}
	return 0;
}