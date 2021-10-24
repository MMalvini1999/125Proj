
#ifndef INC_125PROJ_LEXER_H
#define INC_125PROJ_LEXER_H
#include <string>

using namespace std;
class Token {
public:
    Token *next;
    Token *prev;
    std::string data;
    std::string Class;
    Token(string data, string Class) : data(data),Class(Class), next(nullptr), prev(nullptr){};
};

class linked_list {
public:
    Token *head, *tail;
    linked_list();
    ~linked_list();
    bool isEmpty();
    int listSize();
    void push(string input, string Class);
    void pop();
    linked_list split(int pos);
};

class Lexer {
    linked_list* List;
public:
    Lexer();
    ~Lexer();
    int bookmark = 0;
    Token getNextToken();
    bool isTokenL1(string T, char N);
    bool isTokenL2(string input, char N);
    bool isTokenL3plus(string input, char N);
};

string getLabel(string input);
bool isDigit(char input);
bool isLetter(char input);
bool isChar(char input);

#endif //INC_125PROJ_LEXER_H