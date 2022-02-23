#ifndef GL_TD_ETAT_1
#define GL_TD_ETAT_1
#include "Etat.h"
#include "Automate.h"

class E1 : public Etat {
  public:
    E1(const string name);
    ~E1();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};
#endif // GL_TD_ETAT_1
