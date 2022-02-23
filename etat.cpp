
#include "Etat.h"

Etat::Etat(const string &name) : name(name) {}

Etat::~Etat() {
}

void Etat::print() const {
  cout << "* Etat courant : " << this->name << endl;
}

