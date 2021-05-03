#include "isogram.h"
#include <string>
#include <unordered_set>
#include <algorithm>

namespace isogram {
    bool is_isogram(std::string word) {
        std::string _word;
        auto is_alpha = [](char c) {return std::isalpha(c) != 0;};
        std::copy_if(word.begin(), word.end(), back_inserter(_word), is_alpha);
        std::transform(_word.begin(), _word.end(), _word.begin(), ::tolower);

        return std::unordered_set<char>(_word.begin(), _word.end()).size() == _word.size();
    }
}  // namespace isogram