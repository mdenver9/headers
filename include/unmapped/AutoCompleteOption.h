#pragma once

#include <string>


class AutoCompleteOption {

public:
    AutoCompleteOption(std::string const&, std::string const&, std::string const&, unsigned int, unsigned int, unsigned int, unsigned int);
    AutoCompleteOption(AutoCompleteOption &&);
    ~AutoCompleteOption();
};
