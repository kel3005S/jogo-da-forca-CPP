#include <fstream>
#include <ctime>
#include <iostream>

#include "define_palavra.hpp"

std::vector<std::string> forca::le_arquivo(){

    std::ifstream arquivo;

    arquivo.open("forcapalavras.txt");

    if(arquivo.is_open()){
    
        int qtd;
        arquivo >> qtd;

        std::vector<std::string> palavras_do_arquivo;

        for(int i = 0; i < qtd; i++){

            std::string palavra_lida;
            arquivo >> palavra_lida;

            palavras_do_arquivo.push_back(palavra_lida);
        }    

        arquivo.close();

        return palavras_do_arquivo;
    }
    else{

        std::cout << "banco de palavras nao encontrado" << std::endl;

        exit(0);
    }
}

std::string forca::sorteia_palavra(){

    std::vector<std::string> palavras = le_arquivo();

    srand(time(0));
    int randomico = rand() % palavras.size();

    return palavras[randomico];
}