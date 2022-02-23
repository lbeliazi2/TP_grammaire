class Automate {
public:
    Automate();
    virtual ~Automate();
    void decalage (Symbole * s, Etat *e);
    void reduction (int n, Symbole * s);
protected:
// mettre les stacks + le lexer??
// dire que l'automate commence à EO
};