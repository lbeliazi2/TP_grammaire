#ifndef GL_TD_ETAT_2
#define GL_TD_ETAT_2
#include "Etat.h"
#include "Automate.h"

class E2 : public Etat {
  public:
    E2(const string name);
    ~E2();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};
#endif //GL_TD_ETAT_2