#include "E2.h"
#include "E3.h"
#include "E6.h"

E2::E2(const string name) : Etat(name) {
}

E2::~E2() {
}

void E2::print() const {
    Etat::print();
}

// le bool nous retourne vrai si une transition a été effectuée
bool E2::transition(Automate *automate, Symbole *s) {
    
    // print de l'état actuel
    this->print();
    
    switch(*s) {
      case INT:
        automate->decalage(s, new E3("etat3"));
        cout << "Décalage de l'etat2 à l'etat3";
        break;
      case OPENPAR:
        automate->decalage(s, new E2("etat2"));
        cout << "Décalage de l'etat2 à l'etat2";
        break;
      case EXPR:
        automate->decalage(s, new E6("etat6"));
        cout << "Décalage de l'etat2 à l'etat6";
        break;
      default:
      // 0 transition effectuée donc false
        return false;
    }
    return true;

        
}