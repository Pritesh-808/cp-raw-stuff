#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define pb push_back
#define For(i,n) for(int i=0;i<n;i++)
#define FOR(i,n) for(ll  i=0;i<n;i++)
void accept(int arr[], ll size){for(ll h=0;h<size;h++){cin>>arr[h];}}
void accept_vector(vector<ll>&arr,ll n){for(ll i =0;i<n;i++){cin>>arr[i];}}
void showlist(list<ll>ans){for(auto it=ans.begin();it!=ans.end();it++) cout<<*it<<" ";}
bool check(vector<ll>&arr,ll n){
    ll ref=arr[0];
    FOR(i,n){
        if(arr[i]!=ref)
        return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);    
	
   ll T;
   cin>>T;
   FOR(test_case,T){
    
}
}
