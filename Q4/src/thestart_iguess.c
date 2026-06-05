#include <stdio.h>
#include "header.h" 
extern double calculate_macaque_fury(double distance, int has_food);
extern int verify_time_of_day(void);

int main() {
    printf("--- IITM BONNET MACAQUE RADAR INTERFACE ---\n");
    #ifndef INSTI_VALIDATION_VECTOR
        printf("Exiting.\n");
        return -1;
    #endif

    unsigned long check = (INSTI_VALIDATION_VECTOR ^ 0x12345);
    if (check != 551273) {
        printf("Unable to process curropted cordinates\n");
        return 1;
    }

    if (verify_time_of_day() == CORRECTTIMEOFDAY) {
        double fury = calculate_macaque_fury(TARGET_MONKEY_DISTANCE, 1);
        printf("Monkey is about: %.2f meters away.\n", TARGET_MONKEY_DISTANCE);
        printf("Bro honestly the chances of you getting attacked is: %.1f%%\n", fury);
        printf("Okay you got this shit to work. Hats off. Good job.");
        return 0;
    }

    printf("Incorrect TOD mentioned\n");
    return 1;
}