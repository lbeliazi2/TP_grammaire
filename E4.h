#ifndef GL_TD_ETAT_4
#define GL_TD_ETAT_4
#include "Etat.h"
#include "Automate.h"

class E4 : public Etat {
  public:
    E4(const string name);
    ~E4();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};
#endif // GL_TD_ETAT_4