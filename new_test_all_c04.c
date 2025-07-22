#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

// Include ex00
#include "ex00/ft_strlen.c"

// Include ex01
#include "ex01/ft_putstr.c"

// Include ex02
#include "ex02/ft_putnbr.c"

// Include ex03
#include "ex03/ft_atoi.c"

// Include ex04 with renamed conflicting functions
#define ft_strlen       ft_strlen_ex04
#define ft_putchar      ft_putchar_ex04
#define check_base      check_base_ex04
#include "ex04/ft_putnbr_base.c"
#undef ft_strlen
#undef ft_putchar
#undef check_base

int main(void)
{
    /* ---------- ex00 ---------- */
    printf("\n----------ex00----------\n");
    char ex00_str1[] = "Hello World";
    char ex00_str2[] = "";
    char ex00_str3[] = "42";

    printf("\n-Expected-\n");
    printf("strlen(\"Hello World\") = %zu\n", strlen(ex00_str1));
    printf("strlen(\"\") = %zu\n", strlen(ex00_str2));
    printf("strlen(\"42\") = %zu\n", strlen(ex00_str3));

    printf("\n-Output-\n");
    printf("ft_strlen(\"Hello World\") = %d\n", ft_strlen(ex00_str1));
    printf("ft_strlen(\"\") = %d\n", ft_strlen(ex00_str2));
    printf("ft_strlen(\"42\") = %d\n", ft_strlen(ex00_str3));

    /* ---------- ex01 ---------- */
    printf("\n----------ex01----------\n");
    char ex01_str1[] = "Hello World!";
    char ex01_str2[] = "Testing ft_putstr";

    printf("\n-Expected-\n");
    printf("%s\n", ex01_str1);
    printf("%s\n", ex01_str2);

    printf("\n-Output-\n");
    ft_putstr(ex01_str1);
    write(1, "\n", 1);
    ft_putstr(ex01_str2);
    write(1, "\n", 1);

    /* ---------- ex02 ---------- */
    printf("\n----------ex02----------\n");
    int ex02_numbers[] = {42, -42, 0, 2147483647, -2147483648, 123456789};
    int ex02_size = sizeof(ex02_numbers) / sizeof(ex02_numbers[0]);

    printf("\n-Expected-\n");
    for (int i = 0; i < ex02_size; i++) {
        printf("%d\n", ex02_numbers[i]);
    }

    printf("\n-Output-\n");
    for (int i = 0; i < ex02_size; i++) {
        ft_putnbr(ex02_numbers[i]);
        write(1, "\n", 1);
    }

    /* ---------- ex03 ---------- */
    printf("\n----------ex03----------\n");
    char *ex03_strings[] = {
        "42",
        "-42",
        "   123",
        "   -456",
        "   +++---+123",
        "   ---+--+1234ab567",
        "0",
        "2147483647",
        "-2147483648"
    };
    int ex03_size = sizeof(ex03_strings) / sizeof(ex03_strings[0]);

    printf("\n-Expected-\n");
    for (int i = 0; i < ex03_size; i++) {
        printf("atoi(\"%s\") = %d\n", ex03_strings[i], atoi(ex03_strings[i]));
    }

    printf("\n-Output-\n");
    for (int i = 0; i < ex03_size; i++) {
        printf("ft_atoi(\"%s\") = %d\n", ex03_strings[i], ft_atoi(ex03_strings[i]));
    }

    /* ---------- ex04 ---------- */
    printf("\n----------ex04----------\n");

    printf("\n-Expected-\n");
    printf("42 in base 10 = 42\n");
    printf("42 in base 16 = 2a\n");
    printf("42 in base 2 = 101010\n");
    printf("-42 in base 16 = -2a\n");
    printf("0 in base 10 = 0\n");

    printf("\n-Output-\n");
    printf("ft_putnbr_base(42, \"0123456789\") = ");
    fflush(stdout);
    ft_putnbr_base(42, "0123456789");
    write(1, "\n", 1);

    printf("ft_putnbr_base(42, \"0123456789abcdef\") = ");
    fflush(stdout);
    ft_putnbr_base(42, "0123456789abcdef");
    write(1, "\n", 1);

    printf("ft_putnbr_base(42, \"01\") = ");
    fflush(stdout);
    ft_putnbr_base(42, "01");
    write(1, "\n", 1);

    printf("ft_putnbr_base(-42, \"0123456789abcdef\") = ");
    fflush(stdout);
    ft_putnbr_base(-42, "0123456789abcdef");
    write(1, "\n", 1);

    printf("ft_putnbr_base(0, \"0123456789\") = ");
    fflush(stdout);
    ft_putnbr_base(0, "0123456789");
    write(1, "\n", 1);

    return 0;
}

