#include <iostream>
#include <string>
#include <map>
#include <vector>

#include "fim_e_inicio.hpp"
#include "chutes.hpp"
#include "mostra_chutes.hpp"
#include "adiciona_palavra.hpp"
#include "define_palavra.hpp"
#include "ganhou.hpp"

using namespace std;

int main(){

    static string palavra_secreta;
    static map<char, bool> ja_chutou;
    static array<char, 5> chutes_errados;

    int erros = 0;

    forca::titulo();

    palavra_secreta = forca::sorteia_palavra();

    do{

        forca::monstra_erros(chutes_errados);

        forca::mostra_palavra(palavra_secreta, ja_chutou);

        forca::chuta(palavra_secreta, ja_chutou, chutes_errados, erros);
    } while (forca::nao_ganhou(palavra_secreta, ja_chutou) && erros < 5);

    forca::fim_de_jogo(palavra_secreta, ja_chutou, erros);

    forca::adiciona_palavra();
}