/******
*ohjelman nimi: harjoitus 11
*tekijä Markus Malm
*Lyhyt kuvaus:
Muuta tehtävän 9 laskin-ohjelmaa niin, etta valikko nayttaa
seuraavalta:

VALIKKO
0. Lopetus
1. Summa
2. Erotus
3. Tulo
4. Osamaara
5. Jakojaannos
6. Syota uudet luvut laskemista varten

Laskimella on siis mahdollista käsitellä
useita lukupareja käyttäjän toiveiden
mukaisesti. Mita tapahtuu, jos luku2 on 0?
HUOM! goto -lauseen käyttä on KIELLETTY!!!!

*versio 1.0
*pvm: 8.10.2014
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	
	int luku1;
	int luku2;
	int toiminto;
	
	cout << "Anna kokonaisluku 1 ";
	cin >> luku1;
	cout << "Anna kokonaisluku 2 ";
	cin >> luku2;
	
		
	do
	{
		cout << "\nVALIKKO\n0. Lopetus\n1. Summa\n2. Erotus\n3. Tulo\n4. Osamaara\n5. Jakojaannos \n6. Syota uudet luvut laskemista varten";

		cin >> toiminto;


		switch (toiminto)
		{
		case 0: exit(0);
			break;
		case 1:cout << (luku1 + luku2); "\n";
			break;
		case 2:cout << (luku1 - luku2); "\n";
			break;
		case 3:cout << (luku1 * luku2); "\n";
			break;
		case 4:
			if (luku2 == 0) cout << "Jakaja ei voi olla 0\n";
			else cout << ((float)luku1 / luku2); "\n";
			break;
		case 5: 
			if (luku2 == 0) cout << "Jakaja ei voi olla 0\n";
			else cout << (luku1 % luku2); "\n";
			break;
		case 6:	cout << "Anna kokonaisluku 1 ";
				cin >> luku1;
				cout << "Anna kokonaisluku 2 ";
				cin >> luku2;
				break;
		
		
		}
	}
	while (true);
	


	return 0;

}