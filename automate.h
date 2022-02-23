#include "Symbole.h"
#include "Etat.h"
#include <vector>
#include "lexer.h"
class Automate {
public:
    Automate();
    virtual ~Automate();
    void decalage (Symbole * s, Etat *e);
    void reduction (int n, Symbole * s);
protected:
    std::vector<Etat*> statesback;
    std::vector<Symbole*> symbolstack;
    std::vector<Etat*> statestack;
    Lexer * lexer;
// mettre les stacks + le lexer??
// dire que l'automate commence à EO
};