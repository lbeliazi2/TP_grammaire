#include "E1.h"
#include "E7.h"
#include "E4.h"
#include "E5.h"
#include "Plus.h"
#include "ClosePar.h"
#include "Fin.h"

E7::E7(const string name) : Etat(name) {

}

E7::~E7() {

}

void E7::print() const {
    Etat::print();
}

// le bool nous retourne vrai si une transition a été effectuée
bool E7::transition(Automate *automate, Symbole *s) {
    
    // print de l'état actuel
    this->print();
    
    switch(*s) {
      case PLUS:
      // si on a E on décale à l'état 1
        automate->reduction(2, new Plus());
        cout << "Réduction de plus 2";
        break;
      case MULT:
      // si on a ( on fait d2
        automate->decalage(s, new E5("etat5"));
        cout << "Décalage de l'etat7 à l'etat5";
        break;
      case CLOSEPAR:
        automate->reduction(2, new ClosePar());
        cout << "Réduction de closepar 2";
        break;
      case FINDETEXTE:
        automate->reduction(2, new Fin());
        cout << "Réduction de fin 2";
        break;
      default:
      // 0 transition effectuée donc false
        return false;
    }
    return true;

        
}

