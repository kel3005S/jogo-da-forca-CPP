#include <iostream>
#include <fstream> 

#include "adiciona_palavra.hpp"
#include "define_palavra.hpp"

void forca::salva_banco(std::vector<std::string> nova_lista){

    std::ofstream arquivo;
    arquivo.open("forcapalavras.txt");

    if(arquivo.is_open()){
        arquivo << nova_lista.size() << std::endl;

        for(std::string palavra : nova_lista){

            arquivo << palavra << std::endl;
        }
       
       arquivo.close();
    }
    else{

        std::cout << "banco de palavras nao encontrado" << std::endl;

        exit(0);
    }
}

void forca::adiciona_palavra(){

    std::cout << "gostaria de adicionar uma nova palavra ao banco? (S / N)";

    char sn;
    std::cin >> sn;

    if(sn == 's' || sn == 'S'){

        std::cout << "digite a nova palavra: (use letras minusculas)" << std::endl;

        std::string nova_palavra;
        std::cin >> nova_palavra;

        std::vector<std::string> lista_antiga = forca::le_arquivo();

        lista_antiga.push_back(nova_palavra);

        forca::salva_banco(lista_antiga);
    }
    else{

        exit(1);
    } 
}
