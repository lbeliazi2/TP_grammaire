#include "E1.h"
#include "E3.h"
#include "E2.h"
#include "E7.h"
#include "E4.h"

E4::E4(const string name) : Etat(name) {
}

E4::~E4() {
}

void E4::print() const {
    Etat::print();
}

// le bool nous retourne vrai si une transition a été effectuée
bool E4::transition(Automate *automate, Symbole *s) {
    
    // print de l'état actuel
    this->print();
    
    switch(*s) {
      case INT:
      
        automate->decalage(s, new E3("etat3"));
        cout << "Décalage de l'etat4 à l'etat3";
        break;
      case OPENPAR:
      
        automate->decalage(s, new E2("etat2"));
        cout << "Décalage de l'etat4 à l'etat2";
        break;
      case EXPR:
        automate->decalage(s, new E7("etat7"));
        cout << "Décalage de l'etat4 à l'etat7";
        break;
      default:
      // 0 transition effectuée donc false
        return false;
    }
    return true;

        
}