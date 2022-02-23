#include "E1.h"
#include "E3.h"
#include "E4.h"
#include "E5.h"
#include "Mult.h"
#include "Plus.h"
#include "ClosePar.h"
#include "Fin.h"

E3::E3(const string name) : Etat(name) {
}

E3::~E3() {
}

void E3::print() const {
    Etat::print();
}

// le bool nous retourne vrai si une transition a été effectuée
bool E3::transition(Automate *automate, Symbole *s) {
    
    // print de l'état actuel
    this->print();
    
    switch(*s) {
      case PLUS:
        automate->reduction(5, new Plus());
        cout << "Réduction de PLUS 5";
        break;
      case MULT:
        automate->reduction(5, new Mult());
        cout << "Réduction de MULT 5";
        break;
      case CLOSEPAR:
        automate->reduction(5, new ClosePar());
        cout << "Réduction de OPENPAR 5";
        break;
      case FINDETEXTE:
        automate->reduction(5, new Fin());
        cout << "Réduction de FIN 5";
        break;
      default:
      // 0 transition effectuée donc false
        return false;
    }
    return true;

        
}