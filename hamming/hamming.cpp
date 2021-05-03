#include "hamming.h"
#include <string>

namespace hamming {
    int compute(const std::string& a, const std::string& b) {
        if (a == b) {
            return 0;
        }
        unsigned int hamming = 0;
        for (unsigned long i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) hamming++;
        }
        return hamming;
    }
}  // namespace hamming
