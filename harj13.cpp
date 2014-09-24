/*		Valtteri Louhelainen

Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
yhdistää nimet yhdeksi merkkijonoksi ja tulostaa ne
lopuksi naytölle.


a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
tehdäksesi merkkijonojen yhdistämisen
b) Kayta string-kirjastoa (C++:n merkkijonot)
tehdäksesi merkkijonojen yhdistämisen  TEE, JOS ON AIKAA

Esimerkki
Anna etunimi: Aku
Anna sukunimi: Ankka
Nimesi oli: Aku Ankka*/

#include <iostream>
using namespace std;
#include <cstring>

void main()
{
	char etu[40];
	char suku[20];

	cout << "Anna etunimi: ";
	cin >> etu;
	cout << "Anna sukunimi: ";
	cin >> suku;
	strcat_s(etu, " ");
	strcat_s(etu, suku);
	cout << "Koko nimi: " << etu << "\n";
}