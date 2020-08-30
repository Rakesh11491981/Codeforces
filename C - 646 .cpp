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
        int n,x;
        cin >> n >> x;
        vi d(n+1,0),p(n+1,-1), degree(n+1,0);
        pan(i,n-1){
            int a,b;
            cin >> a >> b;
            degree[a] ++;
            degree[b] ++;
        }
                if(n == 1) cout << " Ayush\n";
        else {
            if(degree[x] <= 1) cout << "Ayush\n" ;
            else{
                if(n % 2 != 0) cout << "Ashish\n";
                else cout << "Ayush\n";
            }
        }
    }
}
