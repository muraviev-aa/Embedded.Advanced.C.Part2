#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t my_time = time(NULL);
    struct tm *now = localtime(&my_time);
    printf("Date: %d.%d.%d\n", now->tm_mday,
           now->tm_mon + 1, now->tm_year + 1900);
    printf("Time: %d:%d:%d\n", now->tm_hour,
           now->tm_min, now->tm_sec);
    // tm_isdst - флаг перехода на летнее время
    // now->tm_wday - день недели, начиная с воскресенья
    // tm_yday - количество дней, начиная с 1 января
    printf("%d;%d;%d\n", now->tm_isdst, now->tm_wday, now->tm_yday);
    return 0;
}