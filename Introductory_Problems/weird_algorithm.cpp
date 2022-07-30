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

    while (n!=1)
    {
        cout<<n<<" ";
        if(n%2==0) {
            n/=2;
        } else {
            n=3*n+1;
        }
    }
    cout<<n<<"\n";
    

    return 0;
}