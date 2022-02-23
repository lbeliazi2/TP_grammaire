#include "E1.h"
#include "E8.h"
#include "E4.h"
#include "E5.h"
#include "Plus.h"
#include "ClosePar.h"
#include "Fin.h"
#include "Mult.h"

E8::E8(const string name) : Etat(name) {
}

E8::~E8() {
}

void E8::print() const {
    Etat::print();
}

// le bool nous retourne vrai si une transition a été effectuée
bool E8::transition(Automate *automate, Symbole *s) {
    
    // print de l'état actuel
    this->print();
    
    switch(*s) {
      case PLUS:
      
        automate->reduction(3, new Plus());
        cout << "Réduction de plus 3";
        break;
      case MULT:
      
        automate->reduction(3, new Mult());
        cout << "Réduction de mult 3";
        break;
      case CLOSEPAR:
        automate->reduction(3, new ClosePar());
        cout << "Réduction de closepar 3";
        break;
      case FINDETEXTE:
        automate->reduction(3, new Fin());
        cout << "Réduction de fin 3";
        break;
      default:
      // 0 transition effectuée donc false
        return false;
    }
    return true;

        
}

