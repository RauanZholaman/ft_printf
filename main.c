#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

size_t formatcount(const char *format)
{
	int	count;

	count = 0;
	while (*format != '\0')
	{
		if (!ft_strncmp(format, "%d", 2))
			count++;
		if (!ft_strncmp(format, "%s", 2))
			count++;
		format++;
	}
	return (count);
}

/*void	ft_printf(const char *format, ...)
{
	va_list valist;
	
	va_start(valist, format);
	
	char *str;
	while ((str = va_arg(valist, char*)) != NULL)
	{
		printf(format, str);
	}
	if (valist == NULL)
		valist 
	va_end(valist);
	
}*/

int main()
{
	//ft_printf("%s\n", "Hello,", "World!", "Of", "Destruction.", NULL);

	printf("%zu\n", formatcount("%d %d %s %s %s %zu"));
}
