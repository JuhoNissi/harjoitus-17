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
	Tiedot stol = { 0 };
	cout << "Ohjelma kysyy nyt tietojasi. Ole hyva ja tayta ohjeiden mukaan." << endl;
	cout << "\nKirjoita etunimesi: ";
	cin >> ws >> stol.etunimi;
	cout << "\nKirjoita sukunimesi: ";
	cin >> ws >> stol.sukunimi;
	cout << "\nKirjoita koulumatkasi kilometreina: ";
	cin >> ws >> stol.matka;
	cout << "\nKirjoita osoitteesi: ";
	cin >> ws;
	cin.get(stol.osoite, 50);
	cout << "\nKirjoita postinumerosi: ";
	cin >> ws;
	cin.get(stol.posti, 6);
	cout << "\nKirjoita kenkasinumero: ";
	cin >> ws >> stol.kenka;


	
	return 0;
}