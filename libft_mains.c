
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/*  main for ft_atoi
int	main(int ac, char **av)
{
	int	mine;
	int	org;

	if (ac == 2)
	{
		mine = ft_atoi(av[1]);
		org = atoi(av[1]);
		printf("mine: %d | org: %d\n", mine, org);
	}
	return (0);
} */

/* main for ft_bzero
int main(void)
{
	unsigned char a[] = "cr7";
	size_t	b = 2;

	ft_bzero(a, b);
	printf("%s\n", a);
} */

/* main for ft_isalnum
int main(void)
{
	char	a = '9';
	char	b = 'A';
	char	c = '(';

	printf("%d\n", ft_isalnum(a));
	printf("%d\n", ft_isalnum(b));
	printf("%d\n", ft_isalnum(c));
} */

/* main for ft_isalpha
int	main(void)
{
	int	c = '2';
	printf("%d", ft_isalpha(c));
} */

/* main for ft_isascii
int main(void)
{
	char	a = '9';
	char	b = '\n';
	char	c = '(';

	printf("%d\n", ft_isascii(a));
	printf("%d\n", ft_isascii(b));
	printf("%d\n", ft_isascii(c));
} */

/* main for ft_isdigit
int main(void)
{
	int	nu = '9';
	int c = ft_isdigit(nu);
	printf("%d\n", c);
} */

/* main for ft_isprint
int main(void)
{
	char	a = '9';
	char	b = '\n';
	char	c = ' ';

	printf("%d\n", ft_isprint(a));
	printf("%d\n", ft_isprint(b));
	printf("%d\n", ft_isprint(c));
} */

/* main for ft_memchr
int	main(void)
{
	unsigned char	*w;
	int				r;

	r = 'v';
	w = ft_memchr("for he will rule forever", r, 24);
	printf("%s\n", w);
} */


/* main for ft_memcmp
int	main(void)
{
	unsigned char	t1[] = "";
	unsigned char	t2[] = "";

	printf("%d\n", ft_memcmp(t1, t2, 7));
} */


/* main for ft_memcpy
int	main(void)
{
	unsigned char	s1[] = "Adew";
	unsigned char 	s2[] = "oluwa";
	
	printf("%s\n", ft_memcpy(s1, s2, 3));
} */


/* main for ft_memmove
int main(void)
{
	char	str[]  = "start stop";
	char	str1[] = "start stop";

	printf("%s\n", ft_memmove(str, str + 6, 4));
	printf("%s\n", memmove(str1, str1 + 6, 4));
} */

/* main for ft_memset
int	main(void)
{
	char	str[] = "we live in a beautiul world";
	int	sub;

	sub = '@';
//	printf("%s\n", ft_memset(str + 3, sub, 4));
//	printf("%s\n", str);
	printf("%s\n", ft_memset(str, sub, 5));
//	printf("%s\n", ft_memset(str + 7, sub, 5));
//	printf("%s\n", ft_memset(str + 9, sub, 5));
	printf("%s\n", memset(str, sub, 5));
} */


/* main for ft_putchar_fd
int	main(void)
{
	ft_putchar_fd(88, 1);
	ft_putchar_fd('\n', 1);
} */


/* main for ft_putendl_fd
int	main(void)
{
	ft_putendl_fd("Tetragammaton", 1);
} */


/* main for ft_putnbr_fd
int	main(void)
{
	int	input1;
	int	input2;
	int	input3;
	int	input4;

	input1 = -214743648;
	ft_putnbr_fd(input1, 1);
	ft_putchar_fd(('\n'), 1);

	input2 = -9;
	ft_putnbr_fd(input2, 1);
	ft_putchar_fd(('\n'), 1);

	input3 = 765;
	ft_putnbr_fd(input3, 1);
	ft_putchar_fd(('\n'), 1);

	input4 = 2147483647;
	ft_putnbr_fd(input4, 1);
	ft_putchar_fd(('\n'), 1);

	return (0);
} */

/* main for ft_putstr_fd
int	main(void)
{
	ft_putstr_fd("www.jw.org", 1);
	ft_putstr_fd("\n", 1);
	ft_putstr_fd("==========", 1);
	ft_putstr_fd("\n", 1);
} */

/* main for ft_strchr
int main(void)
{
	char	s[] = "and he will set up a kingdom";
	int	i = 'l';
	printf("%s\n", ft_strchr(s, i));
} */

/* main for ft_striteri
#include <stdio.h>

void	print_index_and_char(unsigned int index, char *character)
{
	printf("Index: %u, Character: %c\n", index, *character);
}

int	main(void)
{
	char	str[] = "tetragrammaton";

	ft_striteri(str, print_index_and_char);
	printf("%s\n", str);
} */

/* main for ft_strlcat
int	main(void)
{
	char	d[70] = "Hello, you are doing alright";
	char	s[] = ",_yes it is true";
	int	t = 32;

	printf("%zu\n", ft_strlcat(d, s, t));
	printf("%s\n", d);

	char	dx[70] = "Hello, you are doing alright";
	char	sx[] = ",_yes it is true";
	int		tx = 32;

	int		a = strlcat(dx, sx, tx);

	printf("%d\n", a);
	printf("%s\n", dx);

} */


/* main for ft_strlcpy
int	main(void)
{
	char	d[] = "12345";
	const char	s[] = "you can do it!";
	int a = ft_strlcpy(d, s, 25);

	printf("%d\n", a);
	printf("%s\n", d);


	// char	dx[] = "12345";
	// const char	sx[] = "you can do it!";
	// int ax = strlcpy(dx, sx, 15);

	// printf("%d\n", ax);
	// printf("%s\n", dx);
	// return (0);
} */

/* main for ft_strlen
int main()
{
	char	*lgt;
	lgt = "oluwaseun";

	printf("%d\n", ft_strlen(lgt));
}
*/

/* main for ft_strncmp
int	main(void)
{
	unsigned int n = 10;
	char s1[50] = "seunAdEwumi";
	char s2[50] = "seunAdewumi";
	int i = ft_strncmp(s1, s2, n);
	printf("%d\n", i);
} */

/* main for ft_strnstr
int	main(void)
{
	char	hay[] = "helsinhelki";
	char	ned[] = "els";
	
	printf("%s\n", ft_strnstr(hay, ned, 14));

	char	xhay[] = "helsinhelki";
	char	xned[] = "elk";
	
	printf("%s\n", strnstr(xhay, xned, 14));
} */

/* main for ft_strrchr
int	main(void)
{
	char	*s;
	int		i; 

	s = "and he will set up a kingdom";
	i = 'i';

	printf("%s\n", ft_strrchr(s, i));
} */

/* main for ft_tolower
int main(void)
{
	int			x;
	char	retur;

	x = 'A';
	retur = ft_tolower(x);
	write(1, &retur, 1);
	write(1, "\n", 1);
} */

/* main for ft_toupper
int	main(void)
{
	int		x;
	char	retur;

	x = 'q';
	retur = ft_toupper(x);
	write(1, &retur, 1);
} */