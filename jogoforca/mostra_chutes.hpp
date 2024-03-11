#pragma once
#include <string>
#include <array>
#include <map>

namespace forca {

	void monstra_erros(const std::array<char, 5>& chutes_errados);
	void mostra_palavra(std::string& palavra_secreta, const std::map<char, bool>& ja_chutou);
}