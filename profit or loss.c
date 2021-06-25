#include <stdio.h>/*if cost price and selling price of an item is input though the keyboard,write a program to determine whether
the seller has made profit or loss.also determine how much profit or loss he made*/

int main()
{
    int cost,sell,c=0;
    printf("Enter the cost price=");
    scanf("%d", &cost);
    printf("Enter the selling price=");
    scanf("%d", &sell);
    c=sell-cost;
    if(sell>cost)
    {
        printf("Seller has made profit=%d\n", c);
    }
    else
    {
        printf("Seller has made loss=%d\n", c);
    }

    return 0;
}
