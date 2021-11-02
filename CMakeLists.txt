cmake_minimum_required(VERSION 3.17)
project(125Proj)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(
        125Proj
        Linked_list.h Linked_list.cpp
        Lexer.h Lexer.cpp
        Parser.h Parser.cpp
        Stmt.h

        MiscClass.h MiscClass.cpp
        main.cpp
        SymTab.h Decl.h Statement.h)