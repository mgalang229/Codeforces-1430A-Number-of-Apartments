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
		if (n == 1 || n == 2 || n == 4) {
			// if the number is either 1, 2, or 4, then print -1
			cout << -1 << '\n';
			continue;
		}
		if (n % 3 == 0) {
			// check if the number is divisible by 3
			cout << n / 3 << " " << 0 << " " << 0;
		} else if (n % 3 == 1) {
			// check if the remainder of 'n' divided by 3 is equal to 1
			// if yes, then one number '7' is needed to calculate the total sum and
			// the rest, subtract 7 from 'n', and divide it by 3
			cout << (n - 7) / 3 << " " << 0 << " " << 1;
		} else {
			// otherwise, one number of '5' is needed to calculate the total sum and
			// subtract 5 from 'n', and divide it by 3
			cout << (n - 5) / 3 << " " << 1 << " " << 0;
		}
		cout << '\n';
	}
	return 0;
}
