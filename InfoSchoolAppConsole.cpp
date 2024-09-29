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
    p1.name;
    p1.isGamer;

    bool isProPlayer;
    bool isNoobPlayer;
    string resposta;
    char answare;

    //entrada de dados do aluno
    std::cout << "Seu nome:\n";
    std::cin >> p1.name;

    while (true)
    {
    std::cout << "Como foi a sua partida(boa/ruim)\n";
    std::cin >> resposta;
    if (resposta == "boa")
    {
        isProPlayer = true;
        isNoobPlayer = false;
        std::cout << "Insane gameplays, joga e joga\n";
    }
    else if (resposta == "ruim")
    {
    std::cout << verificadorPartidas(p1.isGamer, isProPlayer, isNoobPlayer, answare, resposta) << std::endl;
    }
    else
    {
       std::cout << "Insira uma resposta valida, por favor\n";
    }
    }
    
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

string verificadorPartidas(bool isGamer, bool isProPlayer, bool isNoobPlayer, char answare, string resposta){
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

bool isLiar;
bool isGoodGame;
while (true)
{
    std::cout << "Voce realmente eh um gamer?(s/n)\n";
    std::cin >> answare;
    if (answare  == 's')
    {
        std::cout << "Zerou todos os GTA que nem o Davy Jones?SKSKSKKSKKSKSKKSKKSKS larga mao de ser otario seu merda\n";
        break;
        return isLiar = true;
    }
    else if (answare == 'n')
    {
        std::cout << "Eres noob?(sim/nao)\n";
        std::cin >> resposta;
        if (resposta == "sim")
        {
            isNoobPlayer = true;
            isProPlayer = false;
            std::cout << "Ala muito ruim! hahahahahahahah\n";
            break;
            return isGoodGame = false;
        }
        else if (resposta == "nao")
        {
            isNoobPlayer = false;
            isProPlayer = true;
            std::cout << "ala o Davys Jones Jr skkskakskskksksks\n";
            break;
            return isGoodGame = true;
        }
        else
        {
            std::cout << "Insira uma resposta valida, por favor\n";
        }
    }
    else
    {
        std::cout << "Insira uma resposta valida, por favor\n";
    }
}
}
