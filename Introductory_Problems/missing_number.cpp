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

    ll sum=0;
    for(ll i=0;i<n-1; i++) {
        ll num;
        cin>>num;
        sum+=num;
    }

    cout<<(((n*(n+1))/2) - sum)<<"\n";

    return 0;
}