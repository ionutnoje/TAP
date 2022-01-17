#include "ContBancar.h"
#include <iostream>
#include <time.h>
#include <string>
#include <cstdlib>
using namespace std;
ContBancar::ContBancar(string numarCont, string moneda, float suma): numarCont(numarCont), moneda(moneda), suma(suma) {

}
ContBancar::ContBancar(const ContBancar& param) {
	numarCont = param.numarCont;
	suma = param.suma;
	moneda = param.moneda;
}
ContBancar::~ContBancar() {
};
float ContBancar::getSumaTotala() {
	return this->suma + getDobanda();
}
float ContBancar::getDobanda() {
	if (moneda == "RON") {

		if (this->suma < 500) {
			return (float)((3 / 10) / 100) * this->suma;
		}
		else {
			return (float)((8 / 10) / 100) * this->suma;
		}
	}
	else if (moneda == "EURO") {
		return (float)((1 / 10) / 100) * this->suma;
	}
}
void ContBancar::depunere(float suma) {
	this->suma += suma;
}
void ContBancar::extragere(float suma) {
	this->suma -= suma;
}
void ContBancar::transfer(ContBancar& contDest, float suma) {
	if (this->moneda == "RON" && contDest.moneda == "RON") {

		if (this->suma >= suma) {
			contDest.suma += suma;
			this->suma -= suma;
		}
		else {
			cout << "Fonduri insuficiente!" << endl;
		}
	}
	else cout << "Nu se poate efectua transferul!" << endl;
}
string ContBancar::getNumarCont() {
	return this->numarCont;
}
float ContBancar::getSuma() {
	return this->suma;
}
string ContBancar::getMoneda() {
	return this->moneda;
}
void ContBancar::setNumarCont(int numarCont) {
	this->numarCont = numarCont;
}
void ContBancar::setSuma(float suma) {
	this->suma = suma;
}
void ContBancar::setMoneda(string moneda) {
	this->moneda = moneda;
}
void ContBancar::afisareCont() {
	cout << numarCont << " " << moneda << " " << suma;
}