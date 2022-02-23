
#ifndef GL_TD_ETAT_0
#define GL_TD_ETAT_0

#include "Etat.h"
#include "Automate.h";

class E0 : public Etat {
  public:
    E0(string name);
    ~E0();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};
#endif //GL_TD_ETAT_0