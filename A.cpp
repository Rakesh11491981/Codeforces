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

ll power(ll x, unsigned ll y, ll p)  
{  
    ll res = 1;     // Initialize result  
    x = x % p; // Update x if it is more than or  
    if (x == 0) return 0; // In case x is divisible by p; 
    while (y > 0)  
    {  
        if (y & 1)  
            res = (res*x) % p;  
        y = y>>1; // y = y/2  
        x = (x*x) % p;  
    }  
    return res;  
}  
void solve(){
    ll n, m;
    cin >> n >> m;
    const ll mod = 1e9 + 7;
    if(n >= 3)  ll res = power(2,ceil(n*1.0/3), mod);
    res = (res + mod)%mod;
    if(m >= 3) res += power(2,ceil(m*1.0/3), mod);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tst = 1;
    //cin >> tst;
    while(tst--)
        solve();
    return 0;
}

