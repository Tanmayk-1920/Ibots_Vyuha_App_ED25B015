#if __STDC_VERSION__ < 201112L
#error "COMPILER ARCHITECTURE TOO OLD. UPDATE TO C11 STANDARD."
#endif

double calculate_macaque_fury(double distance, int has_food) {
    if (distance < 10.0) return 99.9;
    return (420.0 / distance) * (has_food ? 1.5 : 0.5);
}