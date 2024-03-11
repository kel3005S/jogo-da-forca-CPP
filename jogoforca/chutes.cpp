#include <iostream>

#include "chutes.hpp"

bool forca::letra_existe(char chute, std::string& palavra_secreta){

    for(char letra : palavra_secreta){

        if(chute == letra){

            return true;
        }    
    }

    return false;
}

void forca::chuta(std::string& palavra_secreta, std::map<char, bool>& ja_chutou, std::array<char, 5>& chutes_errados, int& erros){

    
    std::cout << "seu chute: ";
    char chute;
    std::cin >> chute;

    ja_chutou[chute] = chute;
    
    if(forca::letra_existe(chute, palavra_secreta)){

        std::cout << "a letra | " << chute << " | existe na palavra secreta" << std::endl;
    }
    else{

        std::cout << "a letra | " << chute << " | nao existe na palavra secreta" << std::endl;
        erros++;
        chutes_errados[erros] = chute;
    }
    std::cout << std::endl;
}