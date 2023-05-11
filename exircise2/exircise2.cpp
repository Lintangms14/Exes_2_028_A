#include <iostream>
using namespace std;

int main() {
	int arr[] = { 1, 3, 5, 11, 13, 15};
	int n = sizeof(arr) / sizeof(arr[0]);

	int x;
	cout << "Masukkan Element Yang Ingin Di Cari: ";
	cin >> x;

	int lowerbound = 0;
	int upperbound = n - 1;

	while (lowerbound <= upperbound) {
		int mid = (lowerbound + upperbound) / 2;
		if (arr[mid] == x) {
			cout << "Element Di Temukan Di Indeks Ke" << mid << endl;
			break;
		}
		else if (x < arr[mid]) {
			upperbound = mid - 1;
		}
		else {
			lowerbound = mid + 1;
		}
	}
	if (lowerbound > upperbound) {
		cout << "Element Tidak Di Temukan" << endl;
	}
	return 0;
}