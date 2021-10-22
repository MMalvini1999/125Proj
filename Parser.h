#ifndef INC_125PROJ_PARSER_H
#define INC_125PROJ_PARSER_H
#include "Lexer.h"
#include <vector>




class Decl{
    friend class SymTab;
public:
    Decl(std::string T, std::string I){type = T; id = I;}
    std::string type;
    std::string id;
};

class SymTab{
public:
    SymTab(Decl d){push(d);}
    std::vector<Decl> D;
    void push(Decl d){ D.push_back(d);};

    bool inTable(std::string I){
        int i=0;
        while(i<D.size()){if(D[i].id == I){return true; }}
    }

    std::string findType(std::string I){
        int i=0;
        while(i<D.size()){if(D[i].id == I){return D[i].type; }}
    }
    SymTab* Prev;
};

class Stmt{
public:

};

class Block{
    friend class Prog;
public:
    Block();
    std::vector<Stmt> St;
    void push(Stmt s){ St.push_back(s);};
    SymTab Table;//Fix by creating different .h file;
};

class Prog{
public:
    Block B;
    Prog(Block b){B=b;}

};

#endif //INC_125PROJ_PARSER_H


Block
  |
Stmt - Tok - Tok - Term - Tok -Term -{Block} - else- -------{Block} - ;
  |                                     |                      |
Stmt                                  Stmt-Tok-Term-Tok;      Stmt-Tok-Term;
  |
Stmt