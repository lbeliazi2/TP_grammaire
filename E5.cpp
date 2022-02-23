#include "E3.h"
#include "E8.h"
#include "E5.h"
#include "E2.h"

E5::E5(const string name) : Etat(name) {
}

E5::~E5() {
}

void E5::print() const {
    Etat::print();
}

// le bool nous retourne vrai si une transition a été effectuée
bool E5::transition(Automate *automate, Symbole *s) {
    
    // print de l'état actuel
    this->print();
    
    switch(*s) {
      case INT:
    
        automate->decalage(s, new E3("etat3"));
        cout << "Décalage de l'etat5 à l'etat3";
        break;
      case OPENPAR:
      
        automate->decalage(s, new E2("etat2"));
        cout << "Décalage de l'etat5 à l'etat2";
        break;
      case EXPR:
        automate->decalage(s, new E8("etat8"));
        cout << "Décalage de l'etat5 à l'etat8";
        break;
      default:
      // 0 transition effectuée donc false
        return false;
    }
    return true;

        
}