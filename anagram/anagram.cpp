#include "anagram.h"
#include <string>
#include <vector>
#include <algorithm>

namespace anagram {
    anagram::anagram(const std::string word) : word_(word)
    {
    }
    
    anagram::~anagram()
    {
    }

    std::vector<std::string> anagram::matches(std::vector<std::string> candidates) {
        std::vector<std::string> matched({});
        std::copy_if(candidates.begin(), candidates.end(), std::back_inserter(matched), [this](std::string candidate) {
            std::string lowered;
            std::transform(candidate.begin(), candidate.end(), std::back_inserter(lowered), ::tolower);
            return this->is_anagram(lowered);
        });

        return matched;
    }

    bool anagram::is_anagram(std::string candidate) {
        if (this->word_.size() != candidate.size()) return false;

        return std::is_permutation(word_.begin(), word_.end(), candidate.begin());
    }
    
}  // namespace anagram
