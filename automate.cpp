#include "Automate.h"

// remplir le vecteur d'etat avec tous les etats et le tas de symboles avec tous les symboles??
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

void Automate::reduction (int n, Symbole * s){
    for (int i = 0; i<n; i++){
        delete(statesback.back());
        statesback.pop_back();   
    }
    statesback.back()->transition(this,s);
}
