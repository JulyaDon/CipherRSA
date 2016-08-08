#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int p, q, e, n, f, d;
	char letter, C;
	
	cout << "Enter first simple number:" << endl;
	cin >> p;
	cout << "Enter second simple number:" << endl;
	cin >> q;
	cout << "Enter the letter you want to cipher:" << endl;
	cin >> letter;

	n = p * q;
	f = (p - 1)*(q - 1);

	for (e = 3; e < n; e++) {
		if (f%e == 0) {
			continue;
		}
		
		for (int i = 2; i < e; i++) {
			if (e%i == 0) {
				if (f%i == 0) {
					break;
				}
			}
		}
	}
	for (d = 1; !(d * e > f && (d * e) % f == 1); d++) {

	}

	C = (int)pow((letter - 96), e) % n;
	cout <<"Ciphered letter: "<< C << endl;
	letter = ((int)pow(C, d) % n) + 96;
	cout << "Deciphered letter: " << letter << endl;
	_getch();
	return 0;
}