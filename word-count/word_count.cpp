#include "word_count.h"
#include <map>
#include <string>
#include <vector>
#include <algorithm>

namespace word_count {
    std::vector<std::string> split(const std::string& phrase) {
        std::vector<std::string> result;
        std::string item;

        for(auto chInterator = phrase.begin(); 
            chInterator != phrase.end();
            chInterator++) {
            if (::isalnum(*chInterator)) {
                item += *chInterator;
            } else if (*chInterator == '\'' && (::isalnum(*std::next(chInterator)) && ::isalnum(*std::prev(chInterator)) )) {
                item += *chInterator;
            } else if (!item.empty()) {
                std::transform(item.begin(), item.end(), item.begin(), ::tolower);
                result.push_back(item);
                item = "";
            } else {
                item = "";
            }
        }

        if (!item.empty()) 
            result.push_back(item);

        return result;
    }

    std::map<std::string, int> words(const std::string& phrase) {
        std::map<std::string, int>  map;
        std::vector<std::string> split_words = split(phrase);

        for(auto& word: split_words) 
        {
            ++map[word];
        }
        
        return map;
    }
}  // namespace word_count
