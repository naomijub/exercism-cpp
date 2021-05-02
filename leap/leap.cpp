#include "leap.h"

namespace leap {
    bool is_leap_year (unsigned int year) {
        (void)year;
        return year % 4 == 0 && year % 100 != 0;
    }
}  // namespace leap
