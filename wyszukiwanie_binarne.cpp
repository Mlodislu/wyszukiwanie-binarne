#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int wielkosc_tablicy;
	cout << "Podaj wielkosc tablicy: ";
	cin >> wielkosc_tablicy;
	system("cls");
	cout << "      PODAJ LICZBY NARASTAJACO :)     ";
	Sleep(3000);
	system("cls");
	int *T = new int[wielkosc_tablicy];
	for (int i = 0; i < wielkosc_tablicy; i++){
		cout << "Podaj " << i + 1 << " liczbe: ";
		cin >> T[i];
		system("cls");
	}
	cout << "Podane liczby to: ";
	for (int i = 0; i < wielkosc_tablicy; i++){
		cout << T[i] << ", ";
	}
	cout << endl;
	int pozycja_liczby;
	cout << "Podaj pozycje ktorej liczby chcesz poznac: ";
	cin >> pozycja_liczby;
	int dol, gora, s;
	dol = 0;
	gora = wielkosc_tablicy - 1;
	while (true){
		if (dol > gora){
			cout << "Nie odnaleziono szukanego elementu" << endl;
			break;
		}
		s = (dol + gora);
		div(s, 2);
		if (T[s] == pozycja_liczby){
			cout << "Odnaleziono liczbe " << pozycja_liczby << " pod indeksem " << s + 1 << endl;
			break;
		}
		else if (T[s] < pozycja_liczby)
			dol = s + 1;
		else
			gora = s - 1;
	}
	return 0;
}
