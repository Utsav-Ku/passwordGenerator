#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> v(2*n);
        for(int i=0;i<2*n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        long long ans = 0;
        while(v.size()>0){
            long long x = v[0];
            long long y = v[1];
            ans += min(x,y);
            v.erase(v.begin(),v.begin()+2);
        }
       cout<<ans<<endl;
    }
}