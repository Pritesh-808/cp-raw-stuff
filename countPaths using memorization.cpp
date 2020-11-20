#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define pb push_back
#define For(i,n) for(int i=0;i<n;i++)
#define FOR(i,n) for(ll  i=0;i<n;i++)
#define all(X) X.begin(),X.end()
#define vt vector<long long>
#define printll(x) printf("%lld",x)
void accept(int arr[], ll size){for(ll h=0;h<size;h++){cin>>arr[h];}}
void accept_vector(vector<ll>&arr,ll n){for(ll i =0;i<n;i++){cin>>arr[i];}}
void accept_vector2d(vector<vector<ll>>&a,ll x,ll y){for(ll i=0;i<x;i++)for(ll j=0;j<y;j++)cin>>a[i][j];}
void showlist(list<ll>ans){for(auto it=ans.begin();it!=ans.end();it++) cout<<*it<<" ";}
void showstack(stack<ll>s){if(s.empty())return;int x=s.top();s.pop();showstack(s);cout <<x<<" ";s.push(x);}
ll euclid_gcd(ll a,ll b){ll divident=(a>=b)?a:b;ll divisor =(a>=b)?b:a;while(divisor!=0){ll rem=divident%divisor;divident=divisor;divisor=rem;}return divident;}
/*clock_t tStart = clock();
printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC); */
vector<vector<ll>>memo(8,vector<ll>(8,-1));
ll countPaths(vector<vector<ll>>&a,ll i,ll j)
{


    if(i<a.size()&&j<a[0].size())
    {

        if (i == a.size() - 1 && j == a[0].size() - 1)
        {
            memo[i][j]=1;
            return memo[i][j];

        }
        if(memo[i][j]!=-1)
            return memo[i][j];



        memo[i][j]=countPaths(a, i + 1, j) + countPaths(a, i, j + 1);
        return memo[i][j];

    }


}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto  tStart = clock();
    ll n;
    cin>>n;
    vector<vector<ll>>a(n,vector<ll>(n));

    accept_vector2d(a,n,n);

    ll ans=countPaths(a,0,0);

    printll(memo[0][0]);

    printf("Time taken: %.10fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

}
//8
//1 2 3 4 5 6 7 8
//2 3 4 5 6 7 8 3
//2 3 4 5 6 3 2 1
//3 3 2 2 2 2 4 1
//3 1 4 1 3 1 3 2
//2 3 4 2 1 2 4 2
//1 2 3 4 5 6 7 8
//2 3 4 5 6 3 2 1
