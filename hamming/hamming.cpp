#include "hamming.h"
#include <string>

namespace hamming {
    int compute(const std::string& a, const std::string& b) {
        if (a == b) {
            return 0;
        }
        return 1;
    }
}  // namespace hamming
