#include <bits/stdc++.h>

using namespace std;

#define all(x) begin(x), end(x)
#define int long long
#define sz(x) (int)(x).size()

typedef pair<int, int> pii;
typedef vector<int> vi;

const int inf = (int)1e18;

mt19937 rng(chrono::system_clock::now().time_since_epoch().count());
int random(int a, int b){
    return a + rng() % (b - a + 1);
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin.exceptions(std::istream::failbit);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cout << random(1, 1000);
}
