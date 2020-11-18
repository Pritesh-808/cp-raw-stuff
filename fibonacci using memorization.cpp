#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define pb push_back
#define For(i,n) for(int i=0;i<n;i++)
#define FOR(i,n) for(ll  i=0;i<n;i++)
#define all(X) X.begin(),X.end()
#define vt vector<long long>
void accept(int arr[], ll size){for(ll h=0;h<size;h++){cin>>arr[h];}}
void accept_vector(vector<ll>&arr,ll n){for(ll i =0;i<n;i++){cin>>arr[i];}}
void showlist(list<ll>ans){for(auto it=ans.begin();it!=ans.end();it++) cout<<*it<<" ";}
void showstack(stack<ll>s){if(s.empty())return;int x=s.top();s.pop();showstack(s);cout <<x<<" ";s.push(x);}
ll euclid_gcd(ll a,ll b){ll divident=(a>=b)?a:b;ll divisor =(a>=b)?b:a;while(divisor!=0){ll rem=divident%divisor;divident=divisor;divisor=rem;}return divident;}
/*clock_t tStart = clock();
printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC); */

ll fib(ll n,vector<ll>&memory)
{

    if(memory[n]!=-1)
        return memory[n];

    memory[n]= fib(n-1,memory)+fib(n-2,memory);
    return memory[n];
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll T=1;
    //cin>>T;
    while(T--)
    {
        vector<ll> memory(21,-1);
        memory[0]=0;
        memory[1]=1;
        cout<<fib(20,memory)<<endl;
        FOR(i,20)
        {
            cout<<memory[i]<<" ";
        }
        cout<<endl;
    }


}
