#include <bits/stdc++.h>
using namespace std;


int sum(int n)
{
	return n * (n - 1) / 2;
}

void BSpattern(int N)
{
	int Val = 0, Pthree = 0,
		cnt = 0, initial;

	string s = "**";
	for (int i = 0; i < N; i++) {
		cnt = 0;

		if (i > 0) {
			cout << s;
			s += "**";
		}

		for (int j = i; j < N; j++) {
			if (i > 0) {
				cnt++;
			}
			cout << ++Val;
			cout << 0;
		}

		if (i == 0) {
			int Sumbeforelast = sum(Val) * 2;
			Pthree = Val + Sumbeforelast + 1;
			initial = Pthree;
		}

		initial = initial - cnt;

		Pthree = initial;

		for (int k = i; k < N; k++) {

			cout << Pthree++;

			if (k != N - 1) {
				cout << 0;
			}
		}

		cout << "\n";
	}
}


int main()
{
	int N = 5;

	BSpattern(N);
	return 0;
}
