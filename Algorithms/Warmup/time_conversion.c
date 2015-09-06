/**
 * Author: Onel Harrison
 * HackerRank: Algorithms > Warmup > Time Conversion
 */

 #include <stdio.h>
 #include <string.h>

 int main() {
    int hours = 0, minutes = 0, seconds = 0;
    char post_meridiem[] = "PM";
    char ante_meridiem[] = "AM";
    char meridiem[3];
    scanf("%02d:%02d:%02d%s", &hours, &minutes, &seconds, meridiem);

    if (strcmp(meridiem, ante_meridiem) == 0) {
        if (hours == 12) {
            printf("%02d:%02d:%02d", hours - hours, minutes, seconds);
        } else {
            printf("%02d:%02d:%02d", (hours + 24) % 24, minutes, seconds);
        }
    } else if (strcmp(meridiem, post_meridiem) == 0) {
        if (hours == 12) {
            printf("%02d:%02d:%02d", hours, minutes, seconds);
        } else {
            printf("%02d:%02d:%02d", hours + 12, minutes, seconds);
        }
    }
    return 0;
 }
