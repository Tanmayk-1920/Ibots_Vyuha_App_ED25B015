#include <stdio.h>

extern int core_time_resolver(void);

int verify_time_of_day(void) {
    return core_time_resolver();
}