#include<iostream>
#include <bits/stdc++.h>

using namespace std;
/*int main() {
	int a[] = { 1,2,3 };
	do {
		for (int i : a) cout << i << " ";
		cout << '\n';
	} while (next_permutation(a, a + 3));
}*/ 
//int main() {
//	int a[] = { 1,2,3 };
//	do {
//		for (int i : a) cout << i << " ";
//		cout << '\n';
//	} while (next_permutation(&a[0], &a[0] + 3));
//}

//int main() {
//	vector<int> a = { 2,1,3, 200, 100 };
//	sort(a.begin(), a.end());
//	do {
//		for (int i = 0; i < 2; i++) {
//			cout << a[i] << " ";
//		}
//		//for (int i : a) cout << i << " ";
//		cout << '\n';
//	} while (next_permutation(a.begin(), a.end()));
//}

//재귀함수 기반

int main() {
	vector<int> a = { 2,1,3, 200, 100 };
	sort(a.begin(), a.end());
	do {
		for (int i = 0; i < 2; i++) {
			cout << a[i] << " ";
		}
		//for (int i : a) cout << i << " ";
		cout << '\n';
	} while (next_permutation(a.begin(), a.end()));
}