#include "ft_printf.h"

static int count_digits (unsigned int n)
{
    int count;

    count = 0;
    while (n != 0)
    {
        n = n/10;
        count++;
    }
    return (count);
}

static char *ft_utoa(unsigned int n)
{
	int			count;
	char		*s;

	count = count_digits(n);
	s = (char *)malloc((count + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	s[count] = '\0';
	while (count > 0)
	{
		s[count - 1] = (n % 10) + 48;
		n /= 10;
		count--;
	}
	return (s);
}

int print_unsigned(unsigned int number)
{
    char *holder;
    
    holder = ft_utoa(number);
    ft_putstr_fd(holder, 1);
    return (ft_strlen(holder));
}