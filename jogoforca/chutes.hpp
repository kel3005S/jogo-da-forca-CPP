#pragma once
#include <string>
#include <array>
#include <map>

namespace forca {

	bool letra_existe(char chute, std::string& palavra_secreta);
	void chuta(std::string& palavra_secreta, std::map<char, bool>& ja_chutou, std::array<char, 5>& chutes_errados, int& erros);
}