#include <iostream>
#include <string>
using namespace std;

struct person {
    string name;
    int birthYear;
    int currentYear;
    bool isGamer;
};

struct teacher
{
    string name;
    int age;
    bool isAnoying;
    bool isHot;
    bool isCool;
};


int ageCalculator(int currentYear, int birthYear) {
    int idade = currentYear - birthYear;
    return idade;
}

string verificadorPartidas(bool isGamer, string resposta) {
    if (isGamer) {
        return resposta = "Voce eh um gamer";
    } else {
        return resposta = "Voce nao eh um gamer";
    }
}

string isTeacherHot(bool isAnnoying, bool isHot, bool isCool, string resposta){
    if (isHot)
    {
        isAnnoying = false;
        isCool = false;
        return resposta = "Carai moh garanhao o prof, macetando todas minas da sala e as outras professoras junto";
    }
    else if (isAnnoying)
    {
        isHot = false;
        isCool = false;
        return resposta = "Puta que pariu, moh velho chato da porra";
    }
    else
    {
        isCool = true;
        isHot = false;
        isAnnoying = false;
        return resposta = "O prof eh legal, mas nao eh o meu tipo";
    }
    
}

int main() {
    person p1;
    string resposta;

    // Entrada de dados do aluno
    cout << "Seu nome:\n";
    cin >> p1.name;

    cout << "Que ano voce nasceu?\n";
    cin >> p1.birthYear;

    cout << "Qual eh o ano atual?\n";
    cin >> p1.currentYear;

    int idade = ageCalculator(p1.currentYear, p1.birthYear);
    cout << "Voce tem " << idade << " anos\n";

    if (idade < 0) {
        cout << "Voce nao nasceu ainda" << endl;
    } else if (idade < 13) {
        cout << "Voce eh uma criancinha ainda" << endl;
    } else if (idade < 18) {
        cout << "Voce ja eh um adolescente" << endl;
    } else {
        cout << "Voce ja eh um adulto" << endl;
    }

    // Verificação se é gamer
    char answare;
    cout << "Voce eh gamer? (s/n)\n";
    cin >> answare;
    p1.isGamer = (answare == 's');

    cout << verificadorPartidas(p1.isGamer, resposta) << endl;

    teacher prof;
    

    //entrada de dados do professor
    cout << "Seu nome:\n";
    cin >> prof.name;
    std::cout << "Qual a sua idade?\n";
    cin >> prof.age;
    int ageTeacher = isTeacherHot(prof.isAnoying, prof.isHot, prof.isCool, resposta);
    if (ageTeacher >= 26)
    {
        prof.isHot = true;
        std::cout << isTeacherHot(prof.isAnoying, prof.isHot, prof.isCool, resposta) << std::endl;
    }
    else if (ageTeacher >= 27 && ageTeacher <= 38)
    {
        prof.isCool = true;
        std::cout << isTeacherHot(prof.isAnoying, prof.isHot, prof.isCool, resposta) << std::endl;
    }
    else
    {
        prof.isAnoying = true;
        std::cout << isTeacherHot(prof.isAnoying, prof.isHot, prof.isCool, resposta) << std::endl;
    }
    

    return 0;
}