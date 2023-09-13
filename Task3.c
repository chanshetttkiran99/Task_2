#include <stdio.h>
enum Weekdays {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
#define Name(day) \
    (day == Monday ? "Monday" : \
    day == Tuesday ? "Tuesday" : \
    day == Wednesday ? "Wednesday" : \
    day == Thursday ? "Thursday" : \
    day == Friday ? "Friday" : \
    day == Saturday ? "Saturday" : \
    day == Sunday ? "Sunday" : "Invalid Day")

int main() {
    enum Weekdays today = Wednesday;
    printf("Today is : %s.\n", Name(today));
    return 0;
}
