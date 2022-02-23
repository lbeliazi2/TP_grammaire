#include "E1.h"
#include "E4.h"
#include "E5.h"

E1::E1(const string name) : Etat(name) {
}

E1::~E1() {
}

void E1::print() const {
    Etat::print();
}

// le bool nous retourne vrai si une transition a été effectuée
bool E1::transition(Automate *automate, Symbole *s) {
    
    // print de l'état actuel
    this->print();
    
    switch(*s) {
      case PLUS:

        automate->decalage(s, new E4("etat4"));
        cout << "Décalage de l'etat1 à l'etat4";
        break;
      case MULT:
  
        automate->decalage(s, new E5("etat5"));
        cout << "Décalage de l'etat1 à l'etat5";
        break;
      case FINDETEXTE:
        cout << "FINDETEXTE - accepter";
        return false;
        break;
      default:
      // 0 transition effectuée donc false
        return false;
    }
    return true;

        
}