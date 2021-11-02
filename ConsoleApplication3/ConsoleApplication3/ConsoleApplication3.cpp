// ConsoleApplication3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include<time.h>
using namespace std;

int main()
{ //zad1
	//int i = 0, liczba;
	//cout << "podaj liczbe";
	//cin >> liczba;
	//cout << "for" << endl;
	//for (i = 0; i <liczba; i++)
	//{
	//	cout << i << " " << endl;

	//}
	//i = 0;
	//cout << "while" << endl;
	//while (i < liczba)
	//{
	//	cout << i << " " << endl;
	//	i++;

	//}
	//i = 0;
	//cout << "do while" << endl;
	//do
	//{
	//	cout << i << " " << endl;
	//	i++;
	//} while (i < liczba);

	//zad2
	/*int liczba;

	do
	{
		cout << " podaj liczbe " << endl;
		cin >> liczba;

	} while (liczba >= 0);*/

	//zad3

	//int liczba, ile_d = 0, ile_u = 0, suma_d = 0, suma_u = 0;
	//
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << "podaj liczbe " << endl;
	//	cin >> liczba;
	//	if (liczba >= 0)
	//	{
	//		ile_d++;
	//		suma_d += liczba;
	//	}
	//	else 
	//	{
	//		ile_u++;
	//		suma_u += liczba;
	//	}
	//
	//}
	//cout << "suma liczb dodatnich " << suma_d <<"ilosc liczb dodatnich " << ile_d<< endl;
	//cout << "suma liczb ujemnych " << ile_u << "ilosc liczb ujemnych " << ile_u << endl;
	// 
	//zad4
	
	/*int liczba,n , suma_liczb=0;
	cout << "podaj n";
	cin >> n;
	if (n>0)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "Podaj liczbe";
			cin >> liczba;
			if (liczba % 2 == 0) suma_liczb += liczba;
		}
		cout << "suma liczb parzystych " << suma_liczb << endl;

	}
	else
	{
		cout << " n nie moze byc <0 " << endl;

	}*/

	//zad5
	
	/*int liczba, n, suma_liczb = 0;
	cout << "podaj n";
	cin >> n;
	if (n > 0)
	{
		srand(time(NULL));
		for (int i = 0; i < n; i++)
		{
			liczba = rand() % 11 - 5;
			cout << liczba << " ";
			
			if (liczba % 2 == 0) suma_liczb += liczba;
		}
		cout << "suma liczb parzystych " << suma_liczb << endl;

	}
	else
	{
		cout << " n nie moze byc <0 " << endl;

	}*/
	//zad1
	//int n, i = 1;
	//float punkty, suma = 0;
	//cout << " podaj liczbe studentow ";
	//cin >> n;
	//if ( n>0)
	//{

	//	while (i <= n )
	//	{
	//		cout << " podaj liczbe punktow ";
	//		cin >> punkty;
	//		suma += punkty;
	//		i++;
	//	}
	//	cout << "srednia wynosi " << suma / n;
	//}
	//else
	//{
	//	cout << "n nie moze byc  mniejsze od 0 ";
	//}

	//zad2
	int n, i = 1;
	float punkty, suma = 0;
	cout << " podaj liczbe studentow ";
	cin >> n;
	if (n > 0)
	{

		while (i <= n)
		{
			cout << " podaj liczbe punktow ";
			cin >> punkty;

			if (punkty > 0 && punkty < 100)
			{
				suma += punkty;
				i++;
				cout << "srednia wynosi " << suma / n;
				break;

			}
			else
			{
				cout << "n nie moze byc  mniejsze od 0 ";
			}
		}
	}
			else
			{
				cout << "liczba podana z zlego przedzialu";
			}
	
	


}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
