/*interest calculation*/
#include <stdio.h>
#define PERIOD 10
#define Amount 5000.00
int main()
{
    int year=0;
    float value;
    while(year<=10)
        {
        printf("Year=%d\nAmount=%.2f\n",year,Amount);
        value=Amount+(0.11*Amount);
         printf("Value=%.2f",value);
         ++year;

        }

  return 0;
}
