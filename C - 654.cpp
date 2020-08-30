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
    int t ;
    cin>>t;
    while(t--){
        ll a, b, n, m;
        cin >> a >> b >> n >> m;
        if(a+b < n+m)
            cout << "No\n";
        else{
            if(m <= min(a,b))
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}
