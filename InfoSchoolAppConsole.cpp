#include <iostream>
#include <string>

struct Person {
    std::string name;
    int birthYear;
    int currentYear;
    bool isGamer;
};

struct Teacher {
    std::string name;
    int age;
    bool isAnnoying;
    bool isHot;
    bool isCool;
};

int ageCalculator(int currentYear, int birthYear) {
    int age = currentYear - birthYear;
    return age;
}

std::string verificadorPartidas(bool isGamer) {
    if (isGamer) {
        return "Você é um gamer";
    } else {
        return "Você não é um gamer";
    }
}

std::string isTeacherHot(bool isAnnoying, bool isHot, bool isCool) {
    if (isHot) {
        return "Carai moh garanhão o prof, macetando todas minas da sala e as outras professoras junto";
    } else if (isAnnoying) {
        return "Puta que pariu, moh velho chato da porra";
    } else {
        return "O prof é legal, mas não é o meu tipo";
    }
}

int main() {
    Person p1;
    std::string resposta;

    // Entrada de dados do aluno
    std::cout << "Seu nome:\n";
    std::cin >> p1.name;

    std::cout << "Que ano você nasceu?\n";
    std::cin >> p1.birthYear;

    std::cout << "Qual é o ano atual?\n";
    std::cin >> p1.currentYear;

    int idade = ageCalculator(p1.currentYear, p1.birthYear);
    std::cout << "Você tem " << idade << " anos\n";

    if (idade < 0) {
        std::cout << "Você não nasceu ainda" << std::endl;
    } else if (idade < 13) {
        std::cout << "Você é uma criancinha ainda" << std::endl;
    } else if (idade < 18) {
        std::cout << "Você já é um adolescente" << std::endl;
    } else {
        std::cout << "Você já é um adulto" << std::endl;
    }

    // Verificação se é gamer
    char answare;
    std::cout << "Você é gamer? (s/n)\n";
    std::cin >> answare;
    p1.isGamer = (answare == 's');
    std::cout << verificadorPartidas(p1.isGamer) << std::endl;

    Teacher prof;

    // Entrada de dados do professor
    std::cout << "Seu nome:\n";
    std::cin >> prof.name;
    std::cout << "Qual é a sua idade?\n";
    std::cin >> prof.age;

    // Inicialize as variáveis de estado do professor
    prof.isAnnoying = false;
    prof.isHot = false;
    prof.isCool = false;

    if (prof.age >= 26) {
        prof.isHot = true;
    } else if (prof.age >= 27 && prof.age <= 38) {
        prof.isCool = true;
    } else {
        prof.isAnnoying = true;
    }

    std::cout << isTeacherHot(prof.isAnnoying, prof.isHot, prof.isCool) << std::endl;

    return 0;
}