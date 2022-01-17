#include "Student.h"
#include "Profesor.h"
#include "Angajat.h"
int main() {
	Student s("123456", "Padurean", 10, "1.com");
	s.detalii();
	Profesor p("156456", "Mihai", "Matematica", "2.com");
	p.detalii();
	Angajat* a = new Angajat("547374", "Marcel", "Salubritate", "3.com");
	a->detalii();
}