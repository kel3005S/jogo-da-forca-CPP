#include "ganhou.hpp"

bool forca::nao_ganhou(std::string& palavra_secreta, const std::map<char, bool>& ja_chutou){

    for(char letra : palavra_secreta){

        if(ja_chutou.find(letra) == ja_chutou.end() || !ja_chutou.at(letra)){

            return true;
        }
    }

    return false;
}