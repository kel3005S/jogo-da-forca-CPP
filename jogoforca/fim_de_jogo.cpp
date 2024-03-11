
#include "fim_e_inicio.hpp"
#include "ganhou.hpp"

void forca::fim_de_jogo(std::string& palavra_secreta, std::map<char, bool>& ja_chutou, int& erros) {

    std::cout << "Fim de jogo!" << std::endl;
    std::cout << "a palavra secreta era: " << palavra_secreta << std::endl;

    if(!forca::nao_ganhou(palavra_secreta, ja_chutou)){

        std::cout << "parabens voce acertou a palavra secreta" << std::endl;
    }
    else if(erros < 5){

        std::cout << "infelizmente voce nao acertou a palavra secreta" << std::endl;
    }

    std::cout << "jogue mais uma vez!" << std::endl;
    std::cout << std::endl;
}