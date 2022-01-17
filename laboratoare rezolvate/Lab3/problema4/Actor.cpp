#include "Actor.h"
Actor::Actor(string nume, string prenume, int varsta, int i) :nume(nume), prenume(prenume), varsta(varsta), i(i) {
	contor++;
}
Actor::Actor(const Actor& param) : nume(param.nume), prenume(param.prenume), varsta(param.varsta), i(param.i) {
	contor++;
}
Actor::~Actor() {
	--contor;
}
void Actor::afisareActor() {
	cout << nume << " " << prenume << " " << varsta << endl;
}
int Actor::getContor() {
	return contor;
}
bool  verifActori(const Actor& actor1, const Actor& actor2) {
	return (actor1.nume == actor2.nume && actor1.prenume == actor2.prenume && actor1.varsta == actor2.varsta);
}
int Actor::contor = 0;