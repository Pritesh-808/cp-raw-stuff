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
//printf("Case #%lld: %lld",test_case+1,ans);
void multiply_matrix(vector<vector<ll>>&a,vector<vector<ll>>&b,ll m)
{
    ll future=((a[0][0]*b[0][0])+(a[0][1]*b[1][0]))%m;
    ll quavo =((a[0][0]*b[0][1])+(a[0][1]*b[1][1]))%m;
    ll laflame=((a[1][0]*b[0][0])+(a[1][1]*b[1][0]))%m;
    ll drake=((a[1][0]*b[0][1])+(a[1][1]*b[1][1]))%m;

    a[0][0]=future;
    a[0][1]=quavo;
    a[1][0]=laflame;
    a[1][1]=drake;
}
void matrix_power( vector<vector<ll>>&a,ll n,ll m)
{
    if(n<2)
        return;
    matrix_power(a,n/2,m);
    vector<vector<ll>>b(2,vector<ll>(2));
    b={{1,1},{1,0}};
    multiply_matrix(a,a,m);
    if(n%2==1)
    {
        multiply_matrix(a,b,m);

    }

}
ll fib(ll n,ll m)
{
    if(n==0)
    return 0;
    vector<vector<ll>>a(2,vector<ll>(2));
    a={{1,1},{1,0}};
    matrix_power(a,n-1,m);
    return a[0][0];

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll T;
    cin>>T;
    FOR(test_case,T)
    {
        ll n,m;
        cin>>n>>m;
        cout<<(2*fib(n,m))%m<<endl;






    }


}
