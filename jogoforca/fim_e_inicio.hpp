#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>

namespace forca {

    void fim_de_jogo(std::string& palavra_secreta, std::map<char, bool>& ja_chutou,int& erros);

    inline void titulo() {

        std::cout << "*****************" << std::endl;
        std::cout << "* jogo da forca *" << std::endl;
        std::cout << "*****************" << std::endl;
        std::cout << std::endl;
    }
}