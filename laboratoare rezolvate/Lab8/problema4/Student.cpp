#include "Student.h"
Student::Student(string cnp, string nume, double notalab, double notaex, int nrabs):
	cnp(cnp),nume(nume),notalab(notalab),notaex(notaex),nrabs(nrabs)
{
}
Student::Student(const Student& param):
	cnp(param.cnp), nume(param.nume), notalab(param.notalab), notaex(param.notaex), nrabs(param.nrabs) {

}
Student::~Student() {

}
Student& Student::operator=(const Student& param)	
{
	this->cnp = param.cnp;
	this->nume = param.nume;
	this->notalab = param.notalab;
	this->notaex = param.notaex;
	this->nrabs = param.nrabs;
	return *this;
}
bool Student::operator==(const Student& param) {
	return (this->cnp == param.cnp && this->nume == param.nume && this->notaex == param.notaex && 
		this->notalab == param.notalab && this->nrabs == param.nrabs);
}
bool Student::operator!=(const Student& param) {
	return !(this->cnp == param.cnp && this->nume == param.nume && this->notaex == param.notaex &&
		this->notalab == param.notalab && this->nrabs == param.nrabs);
}

bool Student::operator<(const Student& param) const{
	//if (this->notaex < param.notaex) return true;
	//else
		//if (this->notaex > param.notaex) return false;
		//else if (this->notaex == param.notaex) {
			//if (this->notalab < param.notalab) return true;
			//else
				//if (this->notalab > param.notalab) return false;
				//else if (this->notalab == param.notalab) {
					//if (this->nrabs >= param.nrabs) return true;
					//else return false;
				//}
		//}
	
	return (this->nume < param.nume);
}
/*bool operator<(const Student& param1, const Student& param2) {
	return param1.nume < param2.nume;
}*/
istream& Student::operator>>(istream& is) {
	is >> this->cnp >> this->nume >> this->notalab >> this->notaex >> this->nrabs;
	return is;
}
ostream& Student::operator<<(ostream& os) const {
	os << this->cnp << " " << this->nume << " " << this->notalab << " " << this->notaex << " " << this->nrabs << endl;
	return os;
}