#include <bits/stdc++.h>

using namespace std;

#define pan(i,n) for(int i=0;i<n;i++)
#define pans(i,n,a) for(int i=a;i<n;i++)
#define ll long long int
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define INF 1000000007
#define PI 3.141592653
#define inf 100007
#define pll pair<ll,ll>
#define pii pair<int,int>
ll gcd(ll a, ll b) { return a % b == 0 ? b : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }



int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        int m;
        cin>>s>>m;
        vi b(m+1);
        char c='z';
        int n=s.size();
        vi fq(26,0);
        for(int i=1; i<=m; i++)
            cin>>b[i];
        for(int i=0; i<n; i++){
            fq[s[i]-'a']++;
        }
        vector<char> ans(m+1,'.');
        while(true){
            vi v;
            for(int i=1;i<=m;i++)
                if(b[i]==0){
                    v.pb(i);
                    b[i]=-1;
                }
            if(v.empty()) break;
            while(c>='a' && fq[c-'a'] < v.size()){
                c--;
            }
            for(int x : v) ans[x]=c;
            for(int i=1;i<=m;i++){
                if(ans[i]=='.'){
                    for(int x : v)
                        b[i]-=abs(i-x);
                }
            }
            c--;
        }
        for(int i = 1;i <= m;i++) cout<<ans[i];
        cout<<"\n";
    }
}
