#ifndef GL_TD_ETAT_7
#define GL_TD_ETAT_7
#include "Etat.h"
#include "Automate.h"

class E7 : public Etat {
  public:
    E7(const string name);
    ~E7();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};
#endif //GL_TD_ETAT_7