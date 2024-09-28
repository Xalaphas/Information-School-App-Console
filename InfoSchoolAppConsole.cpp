#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

struct person
{
    string name;
    string surname;
    string turma;
    string old;
    string adult;
    string teenager;
    string child;
    int age;
    int year;
    int currentYear;
    bool isGamer;
    bool isWorking;
    bool isProgrammer;
    bool isStudent;
    bool isAnoying;
};

struct teacher
{
   string turma;
   string name;
   string surname;
   string young;
   string old;
   string hot;
   int age;
   bool isTeacher;
   bool isWorking;
   bool isAnoying;
   bool isYoung;
   bool isOld;
   bool isHot;
};


int main()
{
    person p1;
    teacher t1;

    p1.child = "";
    p1.teenager = "";
    p1.adult = "";
    p1.old = "";

    //entrada de dados do aluno

    t1.old = "";
    t1.young = "";
    t1.hot = "";

    //entrada de dados do professor

    return 0;
}

int ageCalculator(){
    //calcular idade e retornar o resultado com uma mensagem de string
    return 0;
}

int calculadoraMedia(){
    //calcular a média de uma lista de números 
    return 0;
}

string verificadorPartidas(){
    //verificar se o aluno teve uma boa partida no jogo
    return 0;
}