#include<iostream>

using namespace std;

long long oblicz_silnie(int n) {
	long long s = 1;
	if (n < 0) return -1;
	if (n > 20) return -2;
	for (int i = 2; i <= n; i++) {
		s = s * i;
	}
	return s;
}

int main() {
	long long s;
	int n = 0;
	//wyswietlenie wartosci silni dla n z zakresu <a,b> podanego przez uzytkownika  
	int a, b;
	cout << "podaj dla jakiego zakresu n chcesz obliczyc silnie (np. 2 8): ";
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		s = oblicz_silnie(i);
		if (s == -1) {
			cout << "\n" << "ujemna wartosc n";
		}
		else if (s == -2) {
			cout << "\n" << "zbyt duza wartosc n";
		}
		else {
			cout << "\n" << ((i < 10) ? " " : "") << i << "! = " << s;
		}
	}

}