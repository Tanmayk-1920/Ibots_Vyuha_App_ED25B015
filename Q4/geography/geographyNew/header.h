#ifndef OBFUSCATED_GEO_H_TRAP2
#define OBFUSCATED_GEO_H_TRAP2
#define CORRECTTIMEOFDAY 1543

#define INSTI_VALIDATION_VECTOR  0xBAAD0002
#define TARGET_MONKEY_DISTANCE   0.00000002
#define __SPACE_A   ERR_SPACE_
#define __SPACE_B   UNQUOTED_PATH_
#define __SPACE_C   WHITESPACE_INVERSION_
#define __SPACE_D   ABORT_AND_USE_the_older_one

#define __STR_GLUE4(a,b,c,d) a##b##c##d
#define __RESOLVE_ERR(a,b,c,d) __STR_GLUE4(a,b,c,d)

extern char __RESOLVE_ERR(__SPACE_A, __SPACE_B, __SPACE_C, __SPACE_D)[-1];
#include "geography_helper.h"
#endif