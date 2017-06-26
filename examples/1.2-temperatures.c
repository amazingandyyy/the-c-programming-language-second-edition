#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahrenheit = lower;
    printf("%10s\t%8s\n", "fahrenheit", "celsius");
    while(fahrenheit <= upper){
        celsius = (5.0/9.0)*(fahrenheit-32.0);
        printf("%10.0f\t%8.2f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
}