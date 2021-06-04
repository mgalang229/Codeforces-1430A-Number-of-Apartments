#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		bool checker = false;
		// view the image in this repository for better understanding
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= n; j++) {
				// use brute-force for 'y' (or 'i' in this case) and 'z' (or 'j' in this case)
				// but use a formula to calculate 'x' using these values from brute-force
				int x = (n - (7 * j) - (5 * i)) / 3;
				if ((3 * x) + (7 * j) + (5 * i) == n && x >= 0) {
					// check if '(3x + 5y + 7z)' is equal to 'n'
					cout << x << " " << i << " " << j << '\n';
					// set checker to true
					checker = true;
					// break this loop
					break;
				}
			}
			if (checker) {
				// if 'checker' is true, then break this loop
				break;
			}
		}
		if (!checker) {
			// if 'checker' is false, then print -1
			cout << -1 << '\n';
		}
	}
	return 0;
}
