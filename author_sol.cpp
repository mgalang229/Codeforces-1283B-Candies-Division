#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		// 'full' is equal to the number of candies that can be divived
		// equally to 'k' children
		int full = n - n % k;
		// now, we need to get the minimum number of candies that will be given,
		// it's either, the remaining candies that weren't given when it was
		// divided equally (n mod k) or the limit based on the problem statement (k / 2)
		full += min(n % k, k / 2);
		cout << full << '\n';
	}
	return 0;
}
