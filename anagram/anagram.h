#if !defined(ANAGRAM_H)
#define ANAGRAM_H

#include <string>
#include <vector>

namespace anagram {
    class anagram
    {
    private:
        std::string word_;
    public:
        anagram(const std::string word);
        ~anagram();
        std::vector<std::string> matches(std::vector<std::string> candidates);
        bool is_anagram(std::string candidate);
    };
}  // namespace anagram

#endif // ANAGRAM_H