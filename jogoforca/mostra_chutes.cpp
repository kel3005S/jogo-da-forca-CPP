#include <iostream>

#include "mostra_chutes.hpp"

void forca::monstra_erros(const std::array<char, 5>& chutes_errados){

    std::cout << "letras erradas: ";

    for(char letra : chutes_errados){

        std::cout << letra << " ";
    }
    std::cout << std::endl;
    
}

void forca::mostra_palavra(std::string& palavra_secreta, const std::map<char, bool>& ja_chutou){

    for(char letra : palavra_secreta){

        if(ja_chutou.find(letra) != ja_chutou.end()){

            std::cout << letra << " ";
        }    
        else{

            std::cout << "_ ";
        }    
    }
    std::cout << std::endl;
}