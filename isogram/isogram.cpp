#include "isogram.h"
#include <string>
#include <unordered_set>
#include <algorithm>

namespace isogram {
    bool is_isogram(std::string word) {
        std::string _word;
        for (auto c : word) {
            if (std::isalpha(c) != 0) _word += c;
        } // replace by remove_if
        std::transform(_word.begin(), _word.end(), _word.begin(), ::tolower);

        return std::unordered_set<char>(_word.begin(), _word.end()).size() == _word.size();
    }
}  // namespace isogram
