#include <bits/stdc++.h>
 
#define int         long long
#define uint        unsigned int
#define ld          long double
#define showoff     ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb          push_back
#define pii         pair<int,int>
#define FOR(i,a,b)  for(int i=a;i<b;++i)
#define RFOR(i,a,b) for(int i=a;i>b;--i)
#define f           first
#define se          second
#define maxn        200005
#define all(v)      v.begin(),v.end()
#define sz(x)       (int)x.size()
#define mod         1000000007
#define pqueue      priority_queue<int>
#define pdqueue     priority_queue< int,vector<int> ,greater< int >>
 
using namespace std;
 
 
//mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
 
int power(int a,int n)
{
    a %= mod;
    if(n == 1)return a;
    if(n == 0)return 1;
    if(n%2)return (a*(power((a*a)%mod,n/2)%mod))%mod;
    return power((a*a)%mod,n/2)%mod;
}
const int inf = (int) 1e18;
 
int inverse(int x){
    return power(x,mod-2)%mod;//little fermat....
}   
int sqr(int x){
    if(x == 1)return 1;
    int lo = 1,hi = x;
    while(lo < hi){
        int mid = (lo+hi+1)/2;
        if(mid*mid > x)hi = mid-1;
        else lo = mid;
    }
    return lo;
}

signed main()
{
    showoff;
    int n;
    cin >> n;
    cout << sqr(n);
    return 0;
}
//*->for large size of matrix take int not long long if possible......
//*->always take maximum as inf for safer side ...#include <bits/stdc++.h>
 
