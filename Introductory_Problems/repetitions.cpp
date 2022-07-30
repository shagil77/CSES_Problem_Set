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
    
    string dna;
    cin>>dna;
    ll n=dna.length();

    ll ans=1, seq=1;
    for(ll i=1; i<n; i++) {
        if(dna[i]==dna[i-1]) {
            seq++;
        } else {
            seq=1;
        }
        ans=(seq>ans)?seq:ans;
    }

    cout<<ans<<"\n";
    

    return 0;
}