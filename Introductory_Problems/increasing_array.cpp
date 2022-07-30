#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a; i<b; i++)
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int>
#define minhp priority_queue<int, vector<int>, greater<int> >
#define maxhp priority_queue<int>
#define m 1000000007



int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    ll n;
    cin>>n;


    vector<ll> arr(n);
    ll ans=0;
    for(ll i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(ll i=1; i<n; i++) {
        if(arr[i]<arr[i-1]) {
            ans+=(arr[i-1]-arr[i]);
            arr[i]=arr[i-1];
        }
    }

    cout<<ans<<"\n";
    

    return 0;
}