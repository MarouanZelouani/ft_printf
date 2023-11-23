#include "ft_printf.h"

static int Hexa_len (unsigned int number)
{
    int len;

    len = 0;
    while (number != 0)
    {
        number = number/16;
        len++;
    }
    return (len);
}

static void change_holder(char * s, char c)
{
    int i;

    i = 0;
    if (c == 'X')
    {
        while (s[i])
        {
            if (ft_isalpha(s[i]))
                s[i] = ft_toupper(s[i]);
            i++;
        }
    }
}

int print_hexa(unsigned int number, char c)
{
    char s[] = "0123456789abcdef";
    char *holder;
    int remainder;
    int len;
    
    len = Hexa_len(number);
    holder = (char *) malloc ((len + 1) * sizeof(char));
    holder[len] = '\0';
    while (number != 0) {
        remainder = 0;
        remainder = number % 16;
        
        if (remainder < 10) {
            holder[len - 1] = s[remainder];
            len--;
        } else {
            holder[len - 1] = s[remainder];
            len--;
        }
        number = number / 16;
    }
    change_holder(holder, c);
    ft_putstr_fd(holder, 1);
    return (ft_strlen(holder));
}