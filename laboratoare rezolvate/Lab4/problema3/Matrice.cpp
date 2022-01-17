#include "Matrice.h"
#include <iostream>
using namespace std;
Matrice::Matrice(int nrLinii, int nrCol) :nrLinii(nrLinii), nrColoane(nrCol) {
	this->elemente = new int* [nrLinii];
	for (int i = 0; i < nrLinii; ++i) this->elemente[i] = new int[nrColoane];
}
Matrice::Matrice(const Matrice& param) {
	this->nrColoane = param.nrColoane;
	this->nrLinii = param.nrLinii;
	this->elemente = new int* [nrLinii];
	for (int i = 0; i < nrLinii; ++i) 
		this->elemente[i] = new int[nrColoane];
	for (int i = 0; i < this->nrLinii; ++i)
	{
		for (int j = 0; j < this->nrColoane; ++j) 
			this->elemente[i][j] = param.elemente[i][j];
	}
}
Matrice::~Matrice() {
	for (int i = 0; i < this->nrLinii; ++i)
		delete[] this->elemente[i];
	delete[] elemente;
}
Matrice Matrice::operator-() const {//schimbare de semn
	for (int i = 0; i < nrLinii; ++i)
	{
		for (int j = 0; j < nrColoane; ++j) elemente[i][j] = -elemente[i][j];
	}
	return *this;
}
Matrice Matrice::operator+(const Matrice& mat) const {//this+param metoda membra
	Matrice m(this->nrLinii, this->nrColoane);
	for (int i = 0; i < this->nrLinii; ++i)
	{
		for (int j = 0; j < this->nrColoane; ++j)
			m.elemente[i][j] = this->elemente[i][j] + mat.elemente[i][j];
	}
	return m;
}
/*
Matrice operator+(const Matrice& mat1, const Matrice& mat2) {
	Matrice m(mat1.nrLinii,mat1.nrColoane);
	for (int i = 0; i < m.nrLinii; ++i)
	{
		for (int j = 0; j < m.nrColoane; ++j)
			m.elemente[i][j] = mat1.elemente[i][j] + mat2.elemente[i][j];
	}
	return m;
}*/
Matrice operator-(const Matrice& mat1, const Matrice& mat2) {//param1-param2 metoda friend
	Matrice m(mat1.nrLinii, mat1.nrColoane);
	for (int i = 0; i < m.nrLinii; ++i)
	{
		for (int j = 0; j < m.nrColoane; ++j)
			m.elemente[i][j] = mat1.elemente[i][j] - mat2.elemente[i][j];
	}
	return m;
}
/*
Matrice Matrice::operator-(const Matrice& mat) const {//this+param metoda membra
	Matrice m(this->nrLinii, this->nrColoane);
	for (int i = 0; i < this->nrLinii; ++i)
	{
		for (int j = 0; j < this->nrColoane; ++j)
			m.elemente[i][j] = this->elemente[i][j] - mat.elemente[i][j];
	}
	return m;
}*/
Matrice Matrice::operator*(const Matrice& mat) const {
	Matrice m(this->nrLinii, this->nrColoane);
	for (int i = 0; i < m.nrLinii; ++i)
		for (int j = 0; j < m.nrColoane; ++j)
			m.elemente[i][j] = 0;
	for (int i = 0; i < m.nrLinii; ++i)
		for (int j = 0; j < mat.nrLinii; ++j)
			for (int k = 0; k < m.nrColoane; ++k)
			{
				m.elemente[i][j] = m.elemente[i][j] + this->elemente[i][k] * mat.elemente[k][j];
			}
	return m;
}
/*
Matrice operator*(const Matrice& mat1, const Matrice& mat2) {//param1-param2 metoda friend
	Matrice m(mat1.nrLinii, mat1.nrColoane);
		for (int i = 0; i < m.nrLinii; ++i)
		for (int j = 0; j < mat2.nrLinii; ++j)
			for (int k = 0; k < m.nrColoane; ++k)
			{
				m.elemente[i][j] = m.elemente[i][j] + mat1.elemente[i][k] * mat2.elemente[k][j];
			}
	return m;
}*/
Matrice Matrice::operator/(const Matrice& mat) const {
	Matrice m(this->nrLinii, this->nrColoane);
	//impartirea matricelor
	return m;
}
/*
Matrice operator/(const Matrice& mat1,const Matrice& mat2){//metoda friend operator/
	Matrice m(mat1.nrLinii, mat2.nrColoane);
	//impartirea matricelor
	return m;
}
*/
Matrice& Matrice::operator+=(const Matrice& mat) {
	for (int i = 0; i < this->nrLinii; ++i)
	{
		for (int j = 0; j < this->nrColoane; ++j) this->elemente[i][j] += mat.elemente[i][j];
	}
	return *this;
}
Matrice& Matrice::operator-=(const Matrice& mat) {
	for (int i = 0; i < this->nrLinii; ++i)
	{
		for (int j = 0; j < this->nrColoane; ++j) this->elemente[i][j] -= mat.elemente[i][j];
	}

	return *this;
}
Matrice& Matrice::operator/=(const Matrice& mat) {
	//this = this / mat
	return *this;
}
Matrice& Matrice::operator*=(const Matrice& mat) {
	//this = this * mat
	/*for (int i = 0; i < this->nrLinii; ++i)
		for (int j = 0; j < mat.nrLinii; ++j)
			for (int k = 0; k < this->nrColoane; ++k)
			{
				this->elemente[i][j] = this->elemente[i][j] + this->elemente[i][k] * mat.elemente[k][j];
			}*/
	*this = *this * mat;
	return *this;
}
Matrice& Matrice::operator--() {//--(*this)
	for (int i = 0; i < this->nrLinii; ++i)
	{
		for (int j = 0; j < this->nrColoane; ++j) this->elemente[i][j] -= 1;
	}
	return *this;
}
Matrice Matrice::operator--(int a) {//(*this)--
	Matrice m=*this;
	--*this;
	return m;
}
Matrice& Matrice::operator++() {//--(*this)
	for (int i = 0; i < this->nrLinii; ++i)
	{
		for (int j = 0; j < this->nrColoane; ++j) this->elemente[i][j] += 1;
	}
	return *this;
}
Matrice Matrice::operator++(int a) {//(*this)--
	Matrice m = *this;
	++* this;
	return m;
}
Matrice& Matrice::operator=(const Matrice& mat) {
	this->nrLinii = mat.nrLinii;
	this->nrColoane = mat.nrColoane;
	for (int i = 0; i < this->nrLinii; ++i)
	{
		for (int j = 0; j < this->nrColoane; ++j) this->elemente[i][j] = mat.elemente[i][j];
	}
	return *this;
}
int sumael(int nrl, int nrc, int** elem) {
	int s = 0;
	for (int i = 0; i < nrl; ++i)
	{
		for (int j = 0; j < nrc; ++j) s += elem[i][j];
	}
	return s;
}
bool Matrice::operator==(const Matrice& mat) const {
	int sthis = sumael(this->nrLinii, this->nrColoane, this->elemente);
	int smat = sumael(mat.nrLinii, mat.nrColoane, mat.elemente);
	return (sthis == smat);
}
/*
bool Matrice::operator<(const Matrice& mat) const {
	int sthis = sumael(this->nrLinii, this->nrColoane, this->elemente);
	int smat = sumael(mat.nrLinii, mat.nrColoane, mat.elemente);
	return (sthis < smat);
}*/
bool Matrice::operator<=(const Matrice& mat) const {
	int sthis = sumael(this->nrLinii, this->nrColoane, this->elemente);
	int smat = sumael(mat.nrLinii, mat.nrColoane, mat.elemente);
	return (sthis <= smat);
}
bool Matrice::operator>(const Matrice& mat) const {
	int sthis = sumael(this->nrLinii, this->nrColoane, this->elemente);
	int smat = sumael(mat.nrLinii, mat.nrColoane, mat.elemente);
	return (sthis > smat);
}
bool Matrice::operator>=(const Matrice& mat) const {
	int sthis = sumael(this->nrLinii, this->nrColoane, this->elemente);
	int smat = sumael(mat.nrLinii, mat.nrColoane, mat.elemente);
	return (sthis >= smat);
}
bool Matrice::operator!=(const Matrice& mat) const {
	int sthis = sumael(this->nrLinii, this->nrColoane, this->elemente);
	int smat = sumael(mat.nrLinii, mat.nrColoane, mat.elemente);
	return !(sthis == smat);
}
bool operator<(const Matrice& mat1, const Matrice& mat2) {
	int sthis = sumael(mat1.nrLinii, mat1.nrColoane, mat1.elemente);
	int smat = sumael(mat2.nrLinii, mat2.nrColoane, mat2.elemente);
	return (sthis < smat);
}
/*
bool operator<=(const Matrice& mat1, const Matrice& mat2) {
	int sthis = sumael(mat1.nrLinii, mat1.nrColoane, mat1.elemente);
	int smat = sumael(mat2.nrLinii, mat2.nrColoane, mat2.elemente);
	return (sthis <= smat);
}
bool operator>(const Matrice& mat1, const Matrice& mat2) {
	int sthis = sumael(mat1.nrLinii, mat1.nrColoane, mat1.elemente);
	int smat = sumael(mat2.nrLinii, mat2.nrColoane, mat2.elemente);
	return (sthis > smat);
}
bool operator>=(const Matrice& mat1, const Matrice& mat2) {
	int sthis = sumael(mat1.nrLinii, mat1.nrColoane, mat1.elemente);
	int smat = sumael(mat2.nrLinii, mat2.nrColoane, mat2.elemente);
	return (sthis >= smat);
}
bool operator==(const Matrice& mat1, const Matrice& mat2) {
	int sthis = sumael(mat1.nrLinii, mat1.nrColoane, mat1.elemente);
	int smat = sumael(mat2.nrLinii, mat2.nrColoane, mat2.elemente);
	return (sthis == smat);
}
bool operator!=(const Matrice& mat1, const Matrice& mat2) {
	int sthis = sumael(mat1.nrLinii, mat1.nrColoane, mat1.elemente);
	int smat = sumael(mat2.nrLinii, mat2.nrColoane, mat2.elemente);
	return !(sthis == smat);
}*/

void Matrice::afisare() const {
	for (int i = 0; i < nrLinii; ++i) {
		for (int j = 0; j < nrColoane; ++j) cout << this->elemente[i][j] << " ";
		cout << endl;
	}
}
ostream& operator<<(ostream& os, const Matrice& mat) {
	for (int i = 0; i < mat.nrLinii; ++i) {
		for (int j = 0; j < mat.nrColoane; ++j) os << mat.elemente[i][j] << " ";
		os << endl;
	}
	return os;
}
istream& operator>>(istream& is, Matrice& mat) {
	for (int i = 0; i < mat.nrLinii; ++i)
		for (int j = 0; i < mat.nrColoane; ++j) is >> mat.elemente[i][j];
	return is;
}
/*
ostream& Matrice::operator<<(ostream& os) const {
	for (int i = 0; i <this->nrLinii; ++i){
		for (int j = 0; i < this->nrColoane; ++j) os << this->elemente[i][j];
		os << endl;
	}
	return os;
}
istream& Matrice::operator>>(istream&) const {
	for (int i = 0; i <this->nrLinii; ++i)
		for (int j = 0; i < this->nrColoane; ++j) is >> this->elemente[i][j];
	return is;
}*/
int* Matrice::operator[](int index) const {
	return elemente[index];
}
