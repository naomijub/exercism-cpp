#include "isogram.h"
#include <string>
#include <unordered_set>
#include <algorithm>

namespace isogram {
    bool is_isogram(std::string word) {
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
        return std::unordered_set<char>(word.begin(), word.end()).size() == word.size();
    }
}  // namespace isogram
