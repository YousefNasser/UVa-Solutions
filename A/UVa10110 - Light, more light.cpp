#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> pll;
#define DrSlidez ios_base::sync_with_stdio(); cin.tie(0); cout.tie(0);
#define Files freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define pi 3.14159265
#define mod 1000000007
#define pb push_back
#define INF LONG_LONG_MAX
#define sz 105

int main() {
    DrSlidez

    /*
     * Link: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1051 
     */

    ll x; cin >> x;
    while (x != 0) {

        cout << (ll(sqrt(x)) * ll(sqrt(x)) == x ? "yes\n" : "no\n");
        cin >> x;
    }

    return 0;
}