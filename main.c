#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"
/*
size_t	wordcount(const char *str)
{
	int count;
	int is_space;

	count = 0;
	is_space = 0;
	while (*str)
	{
		if (*str != ' ' && is_space == 0)
		{
			count++;
			is_space = 1;
		}
		else if (*str == ' ')
			is_space = 0;
		str++;
	}
	return (count);
}

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
		if (!ft_strncmp(format, "%zu", 3))
			count++;
		format++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list valist;
	va_start(valist, format);

	while 
	char *str;
	str = va_arg(valist, char*);
	
	size_t word_count;
	size_t sign_count;

	word_count = wordcount(format);
	sign_count = formatcount(format);	
	
	printf("%lu", word_count);
	//va_end(valist);
}
*/

int main()
{
	//ft_printf("Idi Nahui! %s %s %d", "Hello, ", "World!", 123);

	//printf("The return value is: %d", printf("Hello, World! %f", 1.2 + 1.32));
	printf("%X\n", 123456789);
	printf("%x\n", 123456789);

}
