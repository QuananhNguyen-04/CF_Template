/* Made by Sherling Ford K */
/*Solution is at line 28*/
#include<bits/stdc++.h>

#define int64 __int64
#define ll long long
#define llu unsigned long long
#define debug(x) cerr << #x << " = [" << x << "]" << endl;
#define repp(i, a, b) for (int i = a; i < (b); ++i)
#define debug2(x, y) cerr << #x << " = [" << x << "]" << endl << #y << "= [" << y << "]" << endl;

using namespace std;

template <typename T>
T gcd(T a, T b) {
	return (b > 0) ? gcd(b, a % b) : a;
}
template <typename T>
T lcm(T a, T b) {
	return (a * b == 0) ? 0 : (a * b) / gcd(a , b);
}
// void bfs(vector<int> v, int startNode) {}
int round_up(int n, int m) {
    return (n + m - 1) / m;
}
/*My solution goes here*/

void solve() {
    
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}