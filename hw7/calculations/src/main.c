#include <stdio.h>
#include <sqlite3.h>
#include "calculations.h"
#include "area.h"

sqlite3 *db;

int main()
{
    int rc;
    int a = 14;
    int b = 7;
    int h = 2;
    int r = 8;
    int s = 15;
    printf("Result of %d + %d = %d\n", a, b, addition_operation(a, b));
    printf("Result of %d * %d = %d\n", a, b, subtraction_operation(a, b));
    printf("Result of %d / %d = %d\n", a, b, division_operation(a, b));
    printf("Area of a rectangle is %d\n", area_rectangle(a, b));
    printf("Area of a triangle is %.2f\n", area_triangle(a, h));
    printf("Area of a circle is %.2f\n", area_circle(r));
    printf("Area of a trapezoid is %.2f\n", area_trapezoid(a, b, h));
    printf("Area of a hexagon is %.3f\n", area_hexagon(s));

    const char *db_path = RESOURCE_PATH "/test.db";
    // Открываем базу данных SQLite
    if (sqlite3_open(db_path, &db) != SQLITE_OK)
    {
        printf("Cannot open database: %s\n", sqlite3_errmsg(db));
        return 1;
    } else
        printf("sqlite3_open\n");


    rc = sqlite3_close(db);
    if (rc == SQLITE_OK)
    {
        printf("Database closed successfully.\n");
    } else
    {
        printf("Failed to close database. Error code: %d\n", rc);
    }
    return 0;
}