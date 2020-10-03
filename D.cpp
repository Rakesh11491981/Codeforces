#include <bits/stdc++.h>

using namespace std;

#define pan(i,n) for(int i=0;i<n;i++)
#define pans(i,n,a) for(int i=a;i<n;i++)
#define ll long long int
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define INF INT_MAX
#define PI 3.141592653
#define pll pair<ll,ll>
#define pii pair<int,int>

void solve(){
    ll n, c;
    cin >> n >> c;
    vl a(n+1), b(n+1);
    pans(i,n,1)   cin >> a[i];
    pans(i,n,1)   cin >> b[i];
    ll dp[n+1][2];
    pan(i,n+1)
        dp[i][0] = INF, dp[i][1] = INF;
    dp[1][0] = 0, dp[1][1] = c;
    for(int i = 1; i < n; i++){
        dp[i+1][0] = min(dp[i+1][0], dp[i][0] + a[i]);
        dp[i+1][0] = min(dp[i+1][0], dp[i][1] + a[i]);
        dp[i+1][1] = min(dp[i+1][1], dp[i][0] + b[i] + c);
        dp[i+1][1] = min(dp[i+1][1], dp[i][1] + b[i]);
    }
    pans(i,n+1,1)
        cout << min(dp[i][0], dp[i][1]) << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tst = 1;
    //cin >> tst;
    while(tst--)
        solve();
    return 0;
}
