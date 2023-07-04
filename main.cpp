// 2 * 10^6 is good enough number of iterations

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n, m;

	cin >> n >> m;
	vector<int> a(m);

	for (int &i : a) {
		cin >> i;
	}

	// sort(a.begin(), a.end());
	auto cpa = a;
	int ma = 0;
	for (int i = 0; i < n; i++) {
		int g = a[m-1];
		int gi = m-1;
		for (int i = m - 2; i >= 0; --i) {
			if (g < a[i]) {
				g = a[i];
				gi = i;
			}
		}
		ma += a[gi]--;
	}

	cout << ma;

	ma = 0;
	for (int i = 0; i < n; i++) {
		int g = 1001;
		int gi = m;
		for (int i = 0; i < m; ++i) {
			if (cpa[i] > 0 && g > cpa[i]) {
				g = cpa[i];
				gi = i;
			}
		}
		ma += cpa[gi]--;
	}

	cout << ' ' << ma;
	
}
