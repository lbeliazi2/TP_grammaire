#include "E1.h"
#include "E6.h"
#include "E4.h"
#include "E5.h"
#include "E9.h"

E6::E6(const string name) : Etat(name) {
}

E6::~E6() {
}

void E6::print() const {
    Etat::print();
}

// le bool nous retourne vrai si une transition a été effectuée
bool E6::transition(Automate *automate, Symbole *s) {
    
    // print de l'état actuel
    this->print();
    
    switch(*s) {
      case PLUS:
     
        automate->decalage(s, new E4("etat4"));
        cout << "Décalage de l'etat6 à l'etat4";
        break;
      case MULT:
     
        automate->decalage(s, new E5("etat5"));
        cout << "Décalage de l'etat6 à l'etat5";
        break;
      case CLOSEPAR:
        automate->decalage(s, new E9("etat9"));
        cout << "Décalage de l'etat6 à l'etat9";
        break;
      default:
      // 0 transition effectuée donc false
        return false;
    }
    return true;

        
}