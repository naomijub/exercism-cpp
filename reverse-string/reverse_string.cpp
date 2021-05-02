#include "reverse_string.h"
#include <string>

namespace reverse_string {
    std::string reverse_string(const std::string& str) {
        std::string rstr(str.rbegin(), str.rend());
        return rstr;
    }
}  // namespace reverse_string
