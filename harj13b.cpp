/*		Valtteri Louhelainen

Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
yhdist�� nimet yhdeksi merkkijonoksi ja tulostaa ne
lopuksi nayt�lle.


a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
tehd�ksesi merkkijonojen yhdist�misen
b) Kayta string-kirjastoa (C++:n merkkijonot)
tehd�ksesi merkkijonojen yhdist�misen  TEE, JOS ON AIKAA

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