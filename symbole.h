#pragma once

#include <string>
using namespace std;
#include <map>

enum Identificateurs { EXPR,OPENPAR, CLOSEPAR, PLUS, MULT, INT, FINDETEXTE, ERREUR};

const string Etiquettes[] = { "OPENPAR", "CLOSEPAR", "PLUS", "MULT", "INT", "FINDETEXTE", "ERREUR", "EXPR"};

class Symbole {
   public:
      Symbole(int i, bool t) : ident(i), terminal(t) {  }
      virtual ~Symbole() { }
      operator int() const { return ident; }
      // vérifier si le symbole est terminal afin de pouvoir déclencher le déplacement de la tête de lecture dans un décalage
      bool isTerminal() {return terminal;}
      virtual void Affiche();

   protected:
      int ident;
      bool terminal;
};
// classe pour un entier 
class Entier : public Symbole {
   public:
      Entier(int v) : Symbole(INT, false), valeur(v) { }
      ~Entier() { }
      virtual void Affiche();
   protected:
      int valeur;
};
// classe Expression
class Expr : public Symbole {
   public: 
      Expr(): Symbole(EXPR,false) {}
      virtual ~Expr(){}
      virtual double eval (const map<string,double> & valeurs) = 0;
      
};

