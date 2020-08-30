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
    int n, s;
    cin >> n >> s;
    if( s < 2*n) cout << "NO\n";
    else{
        cout << "YES\n"; 
        for(int i = 0; i < n-1; i++){
            cout << 2 << " ";
            s-=2;
        }
        cout << s << "\n";
        cout << 1 << "\n";
    }
}
