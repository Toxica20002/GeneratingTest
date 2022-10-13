#include <bits/stdc++.h>

using namespace std;

#define all(x) begin(x), end(x)
#define int long long
#define sz(x) (int)(x).size()

typedef pair<int, int> pii;
typedef vector<int> vi;

const int inf = (int)1e18;

signed main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin.exceptions(std::istream::failbit);
    //freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "md ";
    for(int i= 1; i<= 100; i++){
        string num = to_string(i);
        while(sz(num) < 3) num = "0" + num;
        cout << "\"Test" << num << "\"" << " ";
    }
}
