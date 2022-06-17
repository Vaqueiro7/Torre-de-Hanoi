#include <iostream>

using namespace std;

void mover(int ndiscos, char primeiro, char segundo, char terceiro) {
	if (ndiscos > 0) {
		mover(ndiscos - 1, primeiro, terceiro, segundo);
		cout << "MOVER O DISCO " << ndiscos << " DE " << primeiro << " PARA " << terceiro << endl;
		mover(ndiscos - 1, segundo, primeiro, terceiro);
	}
}

int main() {
	cout << "\n ====================================================================================================================== \n";
	cout << "													TORRE DE HANOI ";
	cout << "\n ====================================================================================================================== \n";

	int disk = 0;
	cout << endl;
	cout << "DIGITE O NUMERO DE DISCOS : ";
	cin >> disk;
	cout << endl;

	mover(disk,'A','B','C');
	return 0;
}