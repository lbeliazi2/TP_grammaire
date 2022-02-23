#include "Automate.h"

Automate::Automate() : {}

Automate::~Automate() {
}

void Automate::decalage (Symbole * s, Etat *e) {
    symbolstack.push_back(s);
    statestack.push_back(e);
    if (s -> isTerminal()){
        lexer -> Avancer();
    }
}
