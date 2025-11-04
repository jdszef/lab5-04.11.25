#include <iostream>
#include <random>
using namespace std;

//int main() {
//	const int tablesize = 10;
//	int tab[tablesize];
//	for (int i = 0; i < tablesize; i++) {
//		tab[i] = i;
//		cout << tab[ i ] << tab[i] << endl;
//	}
//	return 0; 
//
//
//}
//zad 1
//
//zad 2
//int main() {
//	int n;
//	cout << "Enter ur size of fibonacci sequence" << endl;
//	cin >> n; 
//	int* tab = new int[n];
//	tab[0] = 0;
//	tab[1] = 1;
//	for (int i = 2; i < n; i++) {
//		tab[i] = tab[i - 1] + tab[i - 2];
//	}
//	for(int i = 0; i < n; i++){
//		cout << tab[i] << " ";
//	}
//}
//zad 3
	int main() {
			const int tablesize = 10;
			int tab[tablesize];
			double sum = 0;

			srand(time(0));
			for (int i = 0; i < tablesize; i++) {
				tab[i] = rand() % 10 + 1;
				cout << tab[ i ] << endl;
				sum += tab[i];
			}
			double average = sum / tablesize;

			cout << "Average: " << average << endl;
			

}
