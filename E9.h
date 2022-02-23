#ifndef GL_TD_ETAT_9
#define GL_TD_ETAT_9
#include "Etat.h"
#include "Automate.h"

class E9 : public Etat {
  public:
    E9(const string name);
    ~E9();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};
#endif //GL_TD_ETAT_9