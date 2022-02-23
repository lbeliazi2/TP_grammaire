#include "E1.h"
#include "E9.h"
#include "E4.h"
#include "E5.h"
#include "Plus.h"
#include "ClosePar.h"
#include "Fin.h"
#include "Mult.h"

E9::E9(const string name) : Etat(name) {
}

E9::~E9() {
}

void E9::print() const {
    Etat::print();
}

// le bool nous retourne vrai si une transition a été effectuée
bool E9::transition(Automate *automate, Symbole *s) {
    
    // print de l'état actuel
    this->print();
    
    switch(*s) {
      case PLUS:
     
        automate->reduction(4, new Plus());
        cout << "Réduction de plus 4";
        break;
      case MULT:
    
        automate->reduction(4, new Mult());
        cout << "Réduction de mult 4";
        break;
      case CLOSEPAR:
        automate->reduction(4, new ClosePar());
        cout << "Réduction de closepar 4";
        break;
      case FINDETEXTE:
        automate->reduction(4, new Fin());
        cout << "Réduction de fin 4";
        break;
      default:
      // 0 transition effectuée donc false
        return false;
    }
    return true;

        
}

