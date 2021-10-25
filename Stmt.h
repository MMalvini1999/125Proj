//
// Created by Jared Tuck on 10/24/2021.
//

#ifndef INC_125PROJ_STMT_H
#define INC_125PROJ_STMT_H
#include "Parser.h"

class Stmt1{
    //Assign
    Stmt1(linked_list list, SymTab* T, int D){ sTable = T; Depth = D;}
    int Depth;
    SymTab* sTable;
    string ID;
    allexpr* allExpression;

    Stmt1.obj; //class object
    void crtAssign(linked_list list, SymTab* T, int D);
    void printStmt1(linked_list list, SymTab* T, int D); //Prints "|" according to depth, and the corresponding components. ID, allexpr.
};
Stmt1 () //constructor
{
    new allExpression=allexpr;
    new sTable=SymTab;
};

////////////////////////////////////////////////////////////////////
class Stmt2 {
    //if(allexpr)stmt
    Stmt2(linked_list list, SymTab* T, int D){sTable = T, Depth = D;}
    int Depth;
    SymTab* sTable;
    string IF = "IF";
    allexpr* allExpression;
    Stmt* statement;

    Stmt2.obj; //class object
    void crtAllexpr (linked_list list, SymTab* T, int D);
    void crtStmt (linked_list list, SymTab* T, int D);
    void crtIf(linked_list list, SymTab* T, int D);
    void printStmt2(linked_list list, SymTab* T, int D);
};
Stmt2 ()//constructor
{
    new allExpression=allexpr;
    new statement=statement;
    new sTable=symTab;
};

///////////////////////////////////////////////////////////////////
class Stmt3{
    //if(allexpr) stmt else stmt
    Stmt3(linked_list list, SymTab* T, int D){sTable = T, Depth = D;}
    int Depth;
    SymTab* sTable;
    allexpr* allExpression;
    string IF = "IF";
    Stmt* S1;
    string ELSE = "ELSE";
    Stmt* S2;

    Stmt3.obj; //class object
    void crtStmtS2(linked_list list, SymTab* T, int D);
    void crtStmtS1(linked_list list, SymTab* T, int D);
    void crtElse(linked_list list, SymTab* T, int D);
    void printStmt3(linked_list list, SymTab* T, int D);

};
Stmt3 ()//constructor
{
    new allExpression=allexpr;
    new sTable=SymTab;
    new S1=Stmt;
    new S2=Stmt;
};

////////////////////////////////////////////////////////////////////
class Stmt4{
    //while(allexpr)stmt
    Stmt4(linked_list list, SymTab* T, int D){sTable = T, Depth = D;}
    int Depth;
    SymTab* sTable;

    Stmt4.obj; //class object
    void crtWhile(linked_list list, SymTab* T, int D);
    void crtAllexpr(linked_list list, SymTab* T, int D);
    void crtStmt(linked_list list, SymTab* T, int D);

};
Stmt4 ()//constructor
{
    new sTable=SymTab;
};

#endif //INC_125PROJ_STMT_H
