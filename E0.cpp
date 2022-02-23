#include "E0.h"
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
      case "EXPR":
      // si on a E on décale à l'état 1
        automate->decalage(s, new E1("etat1"));
        cout << "Décalage de l'etat0 à l'etat1";
        return true;
        break;
      case "OUVREPAR":
      // si on a ( on fait d2
        automate->decalage(s, new E2("etat2"));
        cout << "Décalage de l'etat1 à l'etat2";
        return true;
        break;
      case "INT":
      // si on a une val on fait d3
        automate->decalage(s, new E3("etat3"));
        cout << "Décalage de l'etat1 à l'etat2";
        return true;
        break;
      default:
      // 0 transition effectuée donc false
        return false;
    }

        
    }
    
}
