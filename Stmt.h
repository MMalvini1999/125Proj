//
// Created by Jared Tuck on 10/24/2021.
//

#ifndef INC_125PROJ_STMT_H
#define INC_125PROJ_STMT_H
#include "Parser.h"

class Stmt1{
    //Assign
    Stmt1(linked_list list, SymTab* T, int D)
    int Depth;
    SymTab* sTable;
    string ID;
    allexpr* allExpression; //pointer to object
    linked_list* LIST; //pointer to object
    void crtAssign(linked_list* list, SymTab* T, int D); //function needs to call split function for linked list
    void printStmt1(linked_list* list, SymTab* T, int D); //Prints "|" according to depth, and the corresponding components. ID, allexpr.
};
Stmt1(linked_list list, SymTab* T, int D) //constructor
{
    sTable = T; Depth = D; list=LIST;
    allExpression= new allexpr(sTable, Depth, list); //goes into function body (
}

void crtAssign (linked_list* list, SymTab* T, int D)
{
    Token *temp=list->head;
    while (temp->next)
    {
        if(temp->get_data()== "("
    }

}

void printStmt1(linked_list* list, SymTab* T, int D)
{}
////////////////////////////////////////////////////////////////////
class Stmt2 {
    //if(allexpr)stmt
    Stmt2(linked_list list, SymTab* T, int D)
    int Depth;
    SymTab* sTable;
    string IF = "IF";
    allexpr* allExpression;
    Stmt* statement;
    linked_list* LIST;
    void crtAllexpr (linked_list* list, SymTab* T, int D);
    void crtStmt (linked_list* list, SymTab* T, int D);
    void crtIf(linked_list* list, SymTab* T, int D);
    void printStmt2(linked_list* list, SymTab* T, int D);
};
Stmt2(linked_list list, SymTab* T, int D)
{
    sTable = T, Depth = D; list=LIST;
    allExpression= new allexpr (sTable, Depth, list);
    statement= new Stmt (sTable, Depth, list);
}

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
    linked_list* LIST;
    void crtStmtS2(linked_list* list, SymTab* T, int D);
    void crtStmtS1(linked_list* list, SymTab* T, int D);
    void crtElse(linked_list* list, SymTab* T, int D);
    void printStmt3(linked_list* list, SymTab* T, int D);
};
Stmt3(linked_list list, SymTab* T, int D)
{
    sTable = T, Depth = D; list=LIST;
    allExpression= new allexpr (sTable, Depth, list);
    S2= new Stmt (sTable, Depth, list);
    S1= new Stmt (sTable, Depth, list);
};

////////////////////////////////////////////////////////////////////
class Stmt4{
    //while(allexpr)stmt
    Stmt4(linked_list list, SymTab* T, int D)
    int Depth;
    SymTab* sTable;
    string While = "WHILE";
    Stmt* statement;
    linked_list* LIST;
    void crtWhile(linked_list* list, SymTab* T, int D);
    void crtAllexpr(linked_list* list, SymTab* T, int D);
    void crtStmt(linked_list* list, SymTab* T, int D);
    void printStmt4(linked_list* list, SymTab* T, int D);
};
Stmt4(linked_list list, SymTab* T, int D)
{
    sTable = T, Depth = D, list=LIST;
    allExpression = new allexpr (sTable, Depth, list);
};
#endif //INC_125PROJ_STMT_H
