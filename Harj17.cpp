/*********************************
*Teht‰v‰:Harjoitus 17 (Palautus vko 46)
*Tekij‰: Juho Nissi
*
*Muokkaa edellist‰ ohjelmaa siten, ett‰ edell‰ m‰‰ritelty‰ tietuetyyppi‰
*k‰ytet‰‰n my‰s kahden muun "koululaisen" tietojen tallentamiseen.
*N‰iden kahden muun koululaisen tiedot alustetaan ao. muuttujien
*m‰‰rittelyn yhteydess‰. Ainoastaan yhden koululaisen tiedot kysyt‰‰n
*k‰ytt‰j‰lt‰ edellisen teht‰v‰n tapaan.
*
*Tulosta kolmen koululaisen tiedot koulumatkan mukaisessa
*suuruusj‰rjestyksess‰ (pienimm‰st‰ suurimpaan) n‰yt‰lle
*
*Versio 1.0
*P‰iv‰ys 5.11.2014
*********************************/

#include <iostream>
using namespace std;

struct Tiedot
{
	char etunimi[25];
	char sukunimi[50];
	float matka;
	char osoite[50];
	char posti[20];
	int kenka;
};

int main()
{
	Tiedot stol[5] = {{ "Risto", "Rappaaja", 6.9, "Riimikatu 2", "40520 JKL", 42 },
					{ "Weijo", "Hietala", 1.2, "Dosentinkatu 7", "40520 JKL", 39 }
					};
	
	cout << "Anna tietosi jarjastelmaan." << endl;
	cout << "\nKirjoita etunimesi: ";
	cin >> ws >> stol[2].etunimi;
	cout << "\nKirjoita sukunimesi: ";
	cin >> ws >> stol[2].sukunimi;
	cout << "\nKirjoita koulumatkasi kilometreina: ";
	cin >> ws >> stol[2].matka;
	cout << "\nKirjoita osoitteesi: ";
	cin >> ws;
	cin.get(stol[2].osoite, 50);
	cout << "\nKirjoita postinumerosi: ";
	cin >> ws;
	cin.get(stol[2].posti, 20);
	cout << "\nKirjoita kenkasinumero: ";
	cin >> ws >> stol[2].kenka;

	while (stol[0].matka>stol[1].matka||stol[1].matka>stol[2].matka)
	{
		if (stol[0].matka > stol[1].matka)
		{
			stol[3] = stol[0];
			stol[0] = stol[1];
			stol[1] = stol[3];
		}
		if (stol[1].matka > stol[2].matka)
		{
			stol[3] = stol[1];
			stol[1] = stol[2];
			stol[2] = stol[3];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "\nNimi: " << stol[i].etunimi << " " << stol[i].sukunimi << endl;
		cout << "Osoite: " << stol[i].osoite << endl;
		cout << "Postinumero ja -toimipaikka: " << stol[i].posti << endl;
		cout << "Koulumatkan pituus: " << stol[i].matka << " km" << endl;
		cout << "Kengankoko: " << stol[i].kenka << endl;
	}
	
	return 0;
}