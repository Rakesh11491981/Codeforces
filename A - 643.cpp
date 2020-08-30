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



int main(){
    int t;
    cin>>t;
    while(t--){
        ll a, k;
        cin >> a >> k;
        ll res = a;
        k--;
        pan(i,k){
            ll x = 0, y = INF;
            string s = to_string(a);
            bool flag = false;
            pan(i,(int)s.size()){
                x = max(x, a%10);
                y = min(y, a%10);
                a/=10;
                if(!y){
                    flag = true;
                    break;
                }
            }
            if(flag) break;
            res += x*y;
            a = res;
        }
        cout << res << endl;
    }
}
