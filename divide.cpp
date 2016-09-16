#include<iostream>
typedef long long ll;
using namespace std;

ll gcd(ll a,ll b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

void solve(ll *arr,int n){
    ll g;
    ll mul=1;
    for(int i=1;i<n;i++) for(int j=0;j<i;j++)
        if(arr[i] != 1 && arr[j] !=1)
        {
            g = gcd(arr[i],arr[j]);
            arr[i] = arr[i]/g;
            arr[j] = arr[j]/g;
        }
    for(int i=0;i<n;i++) mul = (mul*arr[i])%1000000007;
    cout << mul << endl;
}

int main()
{
    ll t,n,arr[20002];
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=0;i<n;i++) cin >> arr[i];
        solve(arr,n);
    }
    return 0;
}
