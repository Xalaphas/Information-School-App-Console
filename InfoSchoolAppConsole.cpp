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
   int year;
   int currentYear;
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

   /*
ALGORITIMO verificadorPartidas
ÍNICIO
DECLARE isGamer, isProPlayer, isNoobPlayer COMO BOOLEANO
DECLARE answare COMO CHAR
DECLARE resposta COMO STRING

ENQUANTO
EXIBA "Voce eh um gamer?"
    LEIA answare
        SE (answare = 's') ENTÂO
            isGamer = VERDADEIRO
            EXIBA "Eres noob ou pro?"
            LEIA resposta
                SE (resposta = "pro") ENTÂO
                    isProPlayer = VERDADEIRO
                    EXIBA "Muito GOD, mas nao precisa matar o controle seu verme maldito"
                    SAIR
                SENÃO SE (resposta = "noob") ENTÃO
                    isNoobPlayer = VERDADEIRO
                    EXIBA "Ala muito ruim! hahahahahahahahahahahahahahah"
                    SAIR
        SENÂO SE (answare = 'n') ENTÂO
            isGamer = FALSO
            EXIBA "Vai estudar para o enem, pare de fazer dancinha vergonhosa no Tico e Teco"
            SAIR
        SENÃO
        EXIBA "Insira uma resposta valida, por favor"
        FIM_SE
FIM_ENQUANTO
FIM
   */
    return 0;
}