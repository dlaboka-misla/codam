#include "ft_printf.h"
#include <limits.h>

int main()
{


    printf("|%40.20i|\n", 12345);
    ft_printf("|%40.20i|\n", 12345);
    printf("\n");
    printf("|%i|\n", INT_MIN);
    ft_printf("|%i|\n", INT_MIN);
    printf("|%.20i|\n", INT_MAX + 1);
    ft_printf("|%.20i|\n", INT_MAX + 1);
    printf("\n");
    printf("|%.20i|\n", INT_MIN);
    ft_printf("|%.20i|\n", INT_MIN);
    printf("\n");
    printf("|%i|\n", INT_MIN);
    ft_printf("|%i|\n", INT_MIN);
    printf("\n");
    printf("|%.20d|\n", INT_MAX + 1);
    ft_printf("|%.20d|\n", INT_MAX + 1);
    printf("\n");
    printf("|%d|\n", INT_MAX + 1);
    ft_printf("|%d|\n", INT_MAX + 1);
    printf("\n");
    printf("|%d|\n", INT_MIN);
    ft_printf("|%d|\n", INT_MIN);
    printf("\n");
    printf("|%.20u|\n", UINT_MAX + 1);
    ft_printf("|%.20u|\n", UINT_MAX + 1);
     printf("\n");
    printf("|%u|\n", UINT_MAX + 1);
    ft_printf("|%u|\n", UINT_MAX + 1);
     printf("\n");
    printf("|%p|\n", (void*)ULONG_MAX + 1);
    printf("|%p|\n", (void*)ULONG_MAX + 1);
    printf("\n");
     printf("|%9u|\n", UINT_MAX);
    ft_printf("|%9u|\n", UINT_MAX);
    printf("\n");
    printf("|%10u|\n", UINT_MAX);
    ft_printf("|%10u|\n", UINT_MAX);
    printf("\n");
    printf("|%11u|\n", UINT_MAX);
    ft_printf("|%11u|\n", UINT_MAX);
    printf("\n");
    printf("|%-9u|\n", UINT_MAX);
    ft_printf("|%-9u|\n", UINT_MAX);
    printf("\n");
    printf("|%-10u|\n", UINT_MAX);
    ft_printf("|%-10u|\n", UINT_MAX);
    printf("\n");
    printf("|%-11u|\n", UINT_MAX);
    ft_printf("|%-11u|\n", UINT_MAX);
    printf("\n");
        printf("|%09u|\n", UINT_MAX);
    printf("|%010u|\n", UINT_MAX);
    printf("|%011u|\n", UINT_MAX);
        printf("|%-9.0x|\n", UINT_MAX);
        ft_printf("|%-9.0x|\n", UINT_MAX);
        printf("\n");
        printf("|%-9.1x|\n", UINT_MAX);
        ft_printf("|%-9.1x|\n", UINT_MAX);
        printf("\n");
        printf("|%-9.2x|\n", UINT_MAX);
        ft_printf("|%-9.2x|\n", UINT_MAX);
        printf("\n");
        printf("|%-10.0x|\n", UINT_MAX);
        ft_printf("|%-10.0x|\n", UINT_MAX);
        printf("\n");
        printf("|%-10.1x|\n", UINT_MAX);
        ft_printf("|%-10.2x|\n", UINT_MAX);
        printf("\n");
        printf("|%-11.0x|\n", UINT_MAX);
        ft_printf("|%-11.0x|\n", UINT_MAX);
        printf("\n");
        printf("|%-11.1x|\n", UINT_MAX);
        ft_printf("|%-11.1x|\n", UINT_MAX);
        printf("\n");
        printf("|%-11.2x|\n", UINT_MAX);
        ft_printf("|%-11.2x|\n", UINT_MAX);
        printf("\n");

        printf("|%-9.0X|\n", UINT_MAX);
        ft_printf("|%-9.0X|\n", UINT_MAX);
        printf("\n");
        printf("|%-9.1X|\n", UINT_MAX);
        ft_printf("|%-9.1X|\n", UINT_MAX);
        printf("\n");
        printf("|%-9.2X|\n", UINT_MAX);
        ft_printf("|%-9.2X|\n", UINT_MAX);
        printf("\n");
        printf("|%-10.0X|\n", UINT_MAX);
        ft_printf("|%-10.0X|\n", UINT_MAX);
        printf("\n");
        printf("|%-10.1X|\n", UINT_MAX);
        ft_printf("|%-10.1X|\n", UINT_MAX);
         printf("\n");
        printf("|%-10.2X|\n", UINT_MAX);
        ft_printf("|%-10.2X|\n", UINT_MAX);
        printf("\n");
        printf("|%-11.0X|\n", UINT_MAX);
        ft_printf("|%-11.0X|\n", UINT_MAX);
        printf("\n");
        printf("|%-11.1X|\n", UINT_MAX);
        ft_printf("|%-11.1X|\n", UINT_MAX);
        printf("\n");
        printf("|%-11.2X|\n", UINT_MAX);
        ft_printf("|%-11.2X|\n", UINT_MAX);
        printf("\n");
    printf("|%u|\n", 0);
    ft_printf("|%u|\n", 0);
     printf("\n");
    printf("|%u|\n", -1);
    printf("|%u|\n", -1);
     printf("\n");
    printf("|%u|\n", 1);
    printf("|%u|\n", 1);
     printf("\n");
    printf("|%u|\n", 42);
    ft_printf("|%u|\n", 42);
     printf("\n");
    printf("|%u|\n", 100);
    ft_printf("|%u|\n", 100);
    printf("\n");
    printf("|%*c|\n", -100, 'a');
    ft_printf("|%*c|\n", -100, 'a');
    printf("\n");
    printf("|%03.*c|\n", 2,'a');
    ft_printf("|%03.*c|\n", 2,'a');
    printf("\n");
    printf("|%9c|\n", 'a');
    ft_printf("|%9c|\n", 'a');
    printf("\n");
    printf("|%*s|\n", -100, "");
    ft_printf("|%*s|\n", -100, "");
    printf("\n");
    printf("|%05%|\n");
    ft_printf("|%05%|\n");
    printf("\n");
    printf("|%10%|\n");
    ft_printf("|%10%|\n");
    printf("\n");
    printf("|%1u|\n", 0);
    ft_printf("|%1u|\n", 0);
    printf("\n");
    printf("|%2u|\n", 0);
    ft_printf("|%2u|\n", 0);
    printf("\n");
    printf("|%10u|\n", 0);
    ft_printf("|%10u|\n", 0);
    printf("\n");
    printf("|%1u|\n", -1);
    ft_printf("|%1u|\n", -1);
    printf("\n");
    printf("|%2u|\n", -1);
    ft_printf("|%2u|\n", -1);
    printf("\n");
    printf("|%3u|\n", -1);
    ft_printf("|%3u|\n", -1);
    printf("\n");
    printf("|%-2%|\n");
    ft_printf("|%-2%|\n");
    printf("\n");
    printf("|%-10%|\n");
    ft_printf("|%-10%|\n");
    printf("\n");
    printf("|%-1u|\n", 0);
    ft_printf("|%-1u|\n", 0);
    printf("\n");
    printf("|%-2u|\n", 0);
    ft_printf("|%-2u|\n", 0);
    printf("\n");
    printf("|%-10u|\n", 0);
    ft_printf("|%-10u|\n", 0);
    printf("\n");
    printf("|%-1u|\n", -1);
    ft_printf("|%-1u|\n", -1);
    printf("\n");
    printf("|%-1u|\n", -1);
    ft_printf("|%-1u|\n", -1);
    printf("\n");
    printf("|%-2u|\n", -1);
    ft_printf("|%-2u|\n", -1);
    printf("\n");
    printf("|%-3u|\n", -1);
    ft_printf("|%-3u|\n", -1);
    printf("\n");

    printf("|%01i|\n", -1);
    ft_printf("|%01i|\n", -1);
    printf("\n");
    printf("|%02i|\n", -1);
    ft_printf("|%02i|\n", -1);
    printf("\n");
    printf("|%03i|\n", -1);
    ft_printf("|%03i|\n", -1);
    printf("\n");
    printf("|%01d|\n", -1);
    ft_printf("|%01d|\n", -1);
     printf("\n");
    printf("|%02d|\n", -1);
    ft_printf("|%02d|\n", -1);
    printf("\n");
    printf("|%03d|\n", -1);
    ft_printf("|%03d|\n", -1);
    printf("\n");
    printf("|%01u|\n", 0);
    ft_printf("|%01u|\n", 0);
    printf("\n");
    printf("|%02u|\n", 0);
    ft_printf("|%02u|\n", 0);
    printf("\n");
    printf("|%010u|\n", 0);
    ft_printf("|%010u|\n", 0);
    printf("\n");

    printf("|%01u|\n", -1);
    ft_printf("|%01u|\n", -1);
    printf("\n");
    printf("|%02u|\n", -1);
    printf("|%02u|\n", -1);
     printf("\n");
    printf("|%03u|\n", -1);
    printf("|%03u|\n", -1);
     printf("\n");
    printf("|%.0s|\n", "Hello");
    ft_printf("|%.0s|\n", "Hello");
    printf("\n");
    printf("|%.1s|\n", "Hello");
    ft_printf("|%.1s|\n", "Hello");
    printf("\n");
    printf("|%.2s|\n", "Hello");
    ft_printf("|%.2s|\n", "Hello");
    printf("|%.s|\n", "42");
    ft_printf("|%.s|\n", "42");
    printf("|%2.0%|\n");
     ft_printf("|%2.0%|\n");
     printf("\n");
    printf("|%2.1%|\n");
    ft_printf("|%2.1%|\n");
    printf("\n");
    printf("|%2.2%|\n");
    ft_printf("|%2.2%|\n");
    printf("\n");
    printf("|%2.10%|\n");
    ft_printf("|%2.10%|\n");
    printf("\n");
    printf("|%10.0%|\n");
    ft_printf("|%10.0%|\n");
    printf("\n");
    printf("|%10.1%|\n");
    ft_printf("|%10.1%|\n");
    printf("\n");
    printf("|%10.2%|\n");
    ft_printf("|%10.2%|\n");
    printf("\n");
    printf("|%10.10%|\n");
    ft_printf("|%10.10%|\n");
    printf("\n");
    printf("|%-2.0%|\n");
    ft_printf("|%-2.0%|\n");
    printf("\n");
    printf("|%-2.1%|\n");
    ft_printf("|%-2.1%|\n");
    printf("\n");
    printf("|%-2.2%|\n");
    ft_printf("|%-2.2%|\n");
    printf("\n");
    printf("|%-2.10%|\n");
    ft_printf("|%-2.10%|\n");
    printf("\n");
    printf("|%-10.0%|\n");
    ft_printf("|%-10.0%|\n");
    printf("\n");
    printf("|%-10.1%|\n");
    ft_printf("|%-10.1%|\n");
    printf("\n");
    printf("|%-10.2%|\n");
    ft_printf("|%-10.2%|\n");
    printf("\n");
    printf("|%-10.10%|\n");
    ft_printf("|%-10.10%|\n");
    printf("\n");

printf("|%5.0s|\n", "Hello");
ft_printf("|%5.0s|\n", "Hello");
printf("\n");
printf("|%5.1s|\n", "Hello");
ft_printf("|%5.1s|\n", "Hello");
printf("\n");
printf("|%5.2s|\n", "Hello");
ft_printf("|%5.2s|\n", "Hello");
printf("\n");
printf("|%6.0s|\n", "Hello");
ft_printf("|%6.0s|\n", "Hello");
printf("\n");
printf("|%6.1s|\n", "Hello");
printf("|%6.1s|\n", "Hello");
printf("\n");
ft_printf("|%3.1i|\n", -1);
printf("|%3.0i|\n", -1); //change nomint_int >= 0
ft_printf("|%3.0i|\n", -1);
printf("\n");
printf("|%3.1i|\n", -1);
ft_printf("|%3.1i|\n", -1);
printf("\n");
printf("|%3.0d|\n", -1);
ft_printf("|%3.0d|\n", -1);
printf("\n");
printf("|%3.1d|\n", -1);
ft_printf("|%3.1d|\n", -1);
 printf("\n");

printf("|%-5.0s|\n", "Hello");
ft_printf("|%-5.0s|\n", "Hello");
printf("|%-5.1s|\n", "Hello");
ft_printf("|%-5.1s|\n", "Hello");
printf("|%-5.2s|\n", "Hello");
ft_printf("|%-5.2s|\n", "Hello");
printf("|%-6.1s|\n", "Hello");
ft_printf("|%-6.1s|\n", "Hello");
printf("|%-6.2s|\n", "Hello");
ft_printf("|%-6.2s|\n", "Hello");
printf("|%-6.0s|\n", "Hello");
ft_printf("|%-6.0s|\n", "Hello");
 printf("\n");
printf("|%-1.0x|\n", -1);
printf("|%-1.0x|\n", -1);
printf("\n");
printf("|%-2.0x|\n", -1);
printf("|%-2.0x|\n", -1);
printf("\n");
printf("|%-2.1x|\n", -1);
printf("|%-2.1x|\n", -1);
printf("\n");
printf("|%-3.0x|\n", -1);
printf("|%-3.0x|\n", -1);
printf("\n");
printf("|%-3.1x|\n", -1);
printf("|%-3.1x|\n", -1);
printf("\n");
printf("|%-3.2x|\n", -1);
printf("|%-3.2x|\n", -1);
printf("\n");
printf("|%-1.0X|\n", -1);
printf("|%-1.0X|\n", -1);
printf("\n");
printf("|%-2.0X|\n", -1);
printf("|%-2.0X|\n", -1);
printf("\n");
printf("|%-2.1X|\n", -1);
printf("|%-2.1X|\n", -1);
printf("\n");
printf("|%-3.0X|\n", -1);
printf("|%-3.0X|\n", -1);
printf("\n");
printf("|%-3.1X|\n", -1);
printf("|%-3.1X|\n", -1);
printf("\n");
printf("|%-3.2X|\n", -1);
printf("|%-3.2X|\n", -1);
printf("\n");
printf("|%03.0i|\n", -1);
ft_printf("|%03.0i|\n", -1);
 printf("\n");
printf("|%03.1i|\n", -1);
ft_printf("|%03.1i|\n", -1);
 printf("\n");
printf("|%03.0d|\n", -1);
ft_printf("|%03.0d|\n", -1);
 printf("\n");
printf("|%03.1d|\n", -1);
ft_printf("|%03.1d|\n", -1);
 printf("\n");
printf("|%*d|\n", -10, 42);
ft_printf("|%*d|\n", -10, 42);
 printf("\n");
printf("|%0*d|\n", -10, 42);
ft_printf("|%0*d|\n", -10, 42);
printf("\n");
printf("|%0*d|\n",10, -42);
ft_printf("|%0*d|\n",10, -42);
 printf("\n");
printf("|%0*d|\n", -10, 0);
ft_printf("|%0*d|\n", -10, 0);
 printf("\n");
printf("|%*s|\n", -10, "Hello");
ft_printf("|%*s|\n", -10, "Hello");
printf("\n");
printf("|%-*d|\n", -10, -42);
ft_printf("|%-*d|\n", -10, -42);
printf("\n");
printf("|%*.*s|\n", 0, 0, "Hello");
ft_printf("|%*.*s|\n", 0, 0, "Hello");
printf("\n");
printf("|%*.*s|\n", -5, 0, "Hello");
ft_printf("|%*.*s|\n", -5, 0, "Hello");
printf("\n");
printf("|%*.*s|\n", 5, 0, "Hello");
ft_printf("|%*.*s|\n", 5, 0, "Hello");
unsigned int ui = 42424242;
 printf("|%20p|\n", &ui);
    ft_printf("|%20p|\n", &ui);
    printf("\n");
    printf("|%*p|\n", 10,&ui);
    ft_printf("|%*p|\n", 10,&ui);
    printf("\n");
    printf("|%-15p|\n", &ui);
    ft_printf("|%-15p|\n", &ui);
    printf("\n");
    printf("|%-30p|\n", &ui);
    ft_printf("|%-30p|\n", &ui);
    printf("\n");
    printf("|%20p|\n", &ui);
    ft_printf("|%20p|\n", &ui);
    printf("\n");
    printf("|%2.9p|\n", 0);
    ft_printf("|%2.9p|\n", 0);
    printf("\n");
    printf("|%10.20p|\n", 0);
    ft_printf("|%10.20p|\n", 0);
    printf("\n");
    printf("|%p|\n", &ui);
    ft_printf("|%p|\n", &ui);
   printf("\n");
    printf("|%*.*p|\n", -30, -20, &ui);
    ft_printf("|%*.*p|\n", -30, -20, &ui);
    printf("\n");

    return (0);
}
