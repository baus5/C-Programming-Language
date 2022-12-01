# include <stdio.h>

/* print Fahrenheit-Celcius table
    for fahr = 0, 20, ..., 300 */

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    char fLabel[20] = "Fahrenheit";
    char cLabel[20] = "Celsius";

    // printf("%3c\t%6c\n", 'F', 'C');  /* Title Char */
    printf("%s\t%s\n", fLabel, cLabel);  /* Title String */

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%10.0f\t%7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
