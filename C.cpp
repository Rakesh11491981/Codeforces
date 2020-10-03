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


void solve(){
    ll n;
    cin >> n;
    ll l = sqrt(n);
    ll res = n/l+l-1;
    if(!(n%l))
        res--;
    if(n > 1) cout << res << endl;
    else cout << 0 << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tst = 1;
    cin >> tst;
    while(tst--)
        solve();
    return 0;
}
