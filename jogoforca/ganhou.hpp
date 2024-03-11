#pragma once
#include <string>
#include <map>
#include <vector>

namespace forca {

    bool nao_ganhou(std::string& palavra_secreta, const std::map<char, bool>& ja_chutou);
}