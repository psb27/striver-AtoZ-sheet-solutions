// Program to count the digits of a number

#include <bits/stdc++.h>
using namespace std;

int countDigits(int num) {


	int count = 0;

	int temp = num;

	while(temp) {
		int digit = temp % 10;
		if(num % digit == 0) {
			count++;
		}
		temp /= 10;
	}

	return count;
}

int main() {

	int n; cin >> n;
	int count = countDigits(n);
	cout << count << endl;
	return 0;
}