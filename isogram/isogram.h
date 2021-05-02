#if !defined(ISOGRAM_H)
#define ISOGRAM_H

#include <string>
#include <unordered_set>
namespace isogram {
    bool is_isogram(std::string word);
    std::unordered_set<char> debug(std::string word);
}  // namespace isogram

#endif // ISOGRAM_H