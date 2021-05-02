#include "isogram.h"
#include <string>
#include <unordered_set>

namespace isogram {
    bool is_isogram(std::string word) {
        return std::unordered_set<char>(word.begin(), word.end()).size() == word.size();
    }
}  // namespace isogram
