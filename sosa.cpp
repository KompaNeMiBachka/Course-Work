#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, y;
	int K, L;
	int temp;
	cout << "Enter size of square array A: ";
	cin >> n;
	vector<vector<int>> A(n, vector<int>(n));
	cout << "\nEnter elements for array A:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "A[" << i << "][" << j << "] = \t";
			cin >> y;
			if (y >= -1000 && y <= 1000) {
				A[i][j] = y;
			}
			else {
				cout << "Ivalid input!" << endl;
				j--;
			}
		}
	}
	cout << "\nArrays A is" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; ++j) {
			cout << "[" << A[i][j] << "] ";
		}
	}
	cout << "\nInput rage for array C" << endl;
	cout << "Lower limit: ";
	cin >> K;
	cout << "Upper limit: ";
	cin >> L;
	vector<int> C;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (A[i][j] >= K && A[i][j] <= L) {
				C.push_back(A[i][j]);
			}
		}
	}
	cout << "\nArray C before sorting: " << endl;
	for (int i = 0; i < C.size(); i++) {
		cout << "[" << C[i] << "] ";
	}
	int c = C.size();
	for (int i = 0; i < c - 1; i++) {
		for (int j = i + 1; j < c; j++) {
			if (C[i] > C[j]) {
				temp = C[i];
				C[i] = C[j];
				C[j] = temp;
			}
		}
	}
	cout << "\nArray C after sorting: " << endl;
	for (int i = 0; i < c; i++) {
		cout << "[" << C[i] << "] ";
	}
	return 0;
}