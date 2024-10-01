#include <iostream>
#include <string>
using namespace std;

struct person {
    string name;
    int birthYear;
    int currentYear;
    bool isGamer;
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

    return 0;
}