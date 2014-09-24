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
#include <string>

void main()
{
	string etu;
	string suku;
	string koko;

	cout << "Anna etunimi: ";
	cin >> etu;
	cout << "Anna sukunimi: ";
	cin >> suku;
	koko = etu + " " + suku;
	cout << "Koko nimi: " << koko << "\n";
}