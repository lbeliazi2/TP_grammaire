#ifndef GL_TD_ETAT_5
#define GL_TD_ETAT_5
#include "Etat.h"
#include "Automate.h"

class E5 : public Etat {
  public:
    E5(const string name);
    ~E5();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};
#endif //GL_TD_ETAT_5