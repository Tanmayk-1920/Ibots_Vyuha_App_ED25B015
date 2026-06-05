#ifndef OBFUSCATED_GEO_H_TRAP1
#define OBFUSCATED_GEO_H_TRAP1
#define CORRECTTIMEOFDAY 1543

#define INSTI_VALIDATION_VECTOR  0xBAAD0001
#define TARGET_MONKEY_DISTANCE   0.00000001

#define __FRAG_A    ERR_GEO_OG_
#define __FRAG_B    MAP_DEPRECATED_
#define __FRAG_C    REJECTED_BY_CORE_
#define __FRAG_D    SWAP_TO_geographyNew

#define __STR_GLUE4(a,b,c,d) a##b##c##d
#define __RESOLVE_ERR(a,b,c,d) __STR_GLUE4(a,b,c,d)

extern char __RESOLVE_ERR(__FRAG_A, __FRAG_B, __FRAG_C, __FRAG_D)[-1];

#endif