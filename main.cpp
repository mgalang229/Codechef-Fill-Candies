#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k, m;
	cin >> n >> k >> m;
	k *= m;
	cout << (n % k == 0 ? n / k : n / k + 1) << "\n";
}

int main() {
	int T;
	cin >> T;
	while (T--)
		solve();
}
