#include <iostream>
#include <vector>

int main() {
    const char delimiter = ' ';
    std::string txt = "Tokenizing a string means splitting it with respect to a delimiter";
    std::vector<std::string> tokens;

    std::string s;
    for (size_t i = 0; i < txt.size(); ++i) {
        if (txt[i] == delimiter) {
            tokens.push_back(s);
            s.clear();
        } else {
            s += txt[i];
        }
    }

    for (int i = 0; i < tokens.size(); ++i) {
        std::cout << tokens[i] << std::endl;
    }

    return 0;
}