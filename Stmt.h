//
// Created by Jared Tuck on 10/24/2021.
//

#ifndef INC_125PROJ_STMT_H
#define INC_125PROJ_STMT_H
#include "Parser.h"
#include "Linked_list.h"
#include <list>
#include "MiscClass.h"
#include "Statement.h"
class Stmt1{
    //Assign => id = allexpr;
    Stmt1(linked_list* list, SymTab* T, int D);
    int Depth;
    SymTab* sTable;
    string ID;
    allexpr* allExpression; //pointer to object
    linked_list* LIST; //pointer to object
    void ScanCls1();
    //void printStmt1(linked_list* list, SymTab* T, int D); //Prints "|" according to depth, and the corresponding components. ID, allexpr.
};
Stmt1::Stmt1(linked_list* list, SymTab* T, int D) //constructor
{
    sTable = T; Depth = D; LIST=list;
    ScanCls1();
}
void Stmt1::ScanCls1() //id terminal, equal sign, an allexpr, and a semicolon
{
    Token* temp;
    ID=temp->get_data();
    int equal=0;
    int semicolon=0;
    if (temp->get_data()=="=") {equal++;}
    temp=LIST->head->next->next;
    int position=2; //index 2 starting
    int LP=1;
    int RP=0;
    linked_list* ptr;
    linked_list* ptr2;
    while(temp->next)
    {
        if (temp->get_data()=="(") {RP++;}
        if (temp->get_data()==")") {RP++;}
        if (LP==RP){ptr=LIST->split_set(2, position-1); break;} //removing allexpr from linked list
    }
    allExpression= new allexpr (ptr, sTable, Depth++);
    if(temp->get_data()==";") {semicolon++;}
    ptr2=LIST->split_set(3, LIST->listSize()-1); //accounting for end of the list
}
//void Stmt1::printStmt1(linked_list* list, SymTab* T, int D)
//{
//
//}

////////////////////////////////////////////////////////////////////
class Stmt2 {
    //if(allexpr)stmt
    Stmt2(linked_list* list, SymTab* T, int D);
    int Depth;
    SymTab* sTable;
    string IF = "IF";
    allexpr* allExpression;
    Stmt2* statement;
    linked_list* LIST;
    void ScanCls2();
   //void printStmt2(linked_list* list, SymTab* T, int D);
};
Stmt2::Stmt2(linked_list* list, SymTab* T, int D)
{
    sTable = T, Depth = D; LIST=list;
    ScanCls2();
}

void Stmt2::ScanCls2()
{
    Token* temp=LIST->head->next->next;
    int position=2; //index 2 starting
    int LP=1;
    int RP=0;
    linked_list* ptr;
    linked_list* ptr2;
    while(temp->next)
    {
        if (temp->get_data()=="(") {RP++;}
        if (temp->get_data()==")") {RP++;}
        if (LP==RP){ptr=LIST->split_set(2, position-1); break;} //removing allexpr from linked list
    }
    allExpression= new allexpr (ptr, sTable, Depth++);
    ptr2=LIST->split_set(3, LIST->listSize()-1); //accounting for end of the list
    statement =new Stmt2 (ptr2, sTable, Depth++);
}

///////////////////////////////////////////////////////////////////
class Stmt3{
    //if(allexpr) stmt else stmt
    Stmt3(linked_list* list, SymTab* T, int D);
    int Depth;
    SymTab* sTable;
    allexpr* allExpression;
    string IF = "IF";
    Stmt3* S1;
    string ELSE = "ELSE";
    Stmt3* S2;
    linked_list* LIST;
    void ScanCls3();
};
Stmt3::Stmt3(linked_list* list, SymTab* T, int D)
{
    sTable = T, Depth = D; LIST=list;
    ScanCls3();
};

void Stmt3::ScanCls3()
    {
        Token* temp=LIST->head->next->next;
        int position=2; //index 2 starting
        int LP=1;
        int RP=0;
        SymTab* sTable;
        linked_list* ptr;
        linked_list* ptr2;
        linked_list* ptr3;
        while(temp->next)
        {
            if (temp->get_data()=="(") {RP++;}
            if (temp->get_data()==")") {RP++;}
            if (LP==RP){ptr=LIST->split_set(2, position-1); break;} //removing allexpr from linked list
        }
        allExpression= new allexpr (ptr, sTable, Depth++);
        ptr2=LIST->split_set(3, LIST->listSize()-1); //accounting for end of the list
        S1 =new Stmt3 (ptr2, sTable, Depth++); //stmt1
        S2 =new Stmt3 (ptr3,sTable, Depth++); //stmt2
    }
////////////////////////////////////////////////////////////////////
class Stmt4{
    //while(allexpr)stmt
    Stmt4(linked_list* list, SymTab* T, int D);
    int Depth;
    SymTab* sTable;
    string While = "WHILE";
    Stmt4* statement;
    allexpr* allExpression;
    linked_list* LIST;
   // void printStmt4(linked_list* list, SymTab* T, int D);
    void ScanCls4();
};
Stmt4::Stmt4(linked_list* list, SymTab* T, int D)
{
    sTable = T, Depth = D, LIST=list;
    ScanCls4();
};

void Stmt4::ScanCls4()
{
    Token* temp=LIST->head->next->next;
    int position=2; //index 2 starting
    int LP=1;
    int RP=0;
    SymTab* sTable;
    linked_list* ptr;
    linked_list* ptr2;
    while(temp->next)
    {
        if (temp->get_data()=="(") {RP++;}
        if (temp->get_data()==")") {RP++;}
        if (LP==RP){ptr=LIST->split_set(2, position-1); break;} //removing allexpr from linked list
    }
    allExpression= new allexpr (ptr, sTable, Depth++);
    ptr2=LIST->split_set(3, LIST->listSize()-1); //accounting for end of the list
    statement =new Stmt4 (ptr2, sTable, Depth++);
}
#endif //INC_125PROJ_STMT_H
