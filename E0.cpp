#include "E0.h"
#include "E1.h"
#include "E2.h"
#include "E3.h"
#include <string>
#include "Symbole.h"
#include "Automate.h"

E0::E0(const string name) : Etat(name) {
}

E0::~E0() {
}

void E0::print() const {
    Etat::print();
}

// le bool nous retourne vrai si une transition a été effectuée
bool E0::transition(Automate *automate, Symbole *s) {
    
    // print de l'état actuel
    this->print();
    
    switch(*s) {
      case EXPR:
      // si on a E on décale à l'état 1
        automate->decalage(s, new E1("etat1"));
        cout << "Décalage de l'etat0 à l'etat1";
        break;
      case OPENPAR:
      // si on a ( on fait d2
        automate->decalage(s, new E2("etat2"));
        cout << "Décalage de l'etat0 à l'etat2";
        break;
      case INT:
      // si on a une val on fait d3
        automate->decalage(s, new E3("etat3"));
        cout << "Décalage de l'etat0 à l'etat3";
        break;
      default:
      // 0 transition effectuée donc false
        return false;
    }
    return true;

        
}
