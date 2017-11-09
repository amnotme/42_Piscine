#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char 	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strcat(char *dest, char *src);
char 	*ft_strncat(char *dest, char *src, int nb);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int 	ft_strlcpy(char *dest, char *src, unsigned int size);
void	ft_putnbr_base(int nbr, char *base);
int		ft_atoi_base(char *str, char *base);
void	ft_putstr_non_printable(char *str);
void	*ft_print_memory(void *addr, unsigned int size);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void 	dashes(void)
{
	printf("\n---------------------\n");
}
void	testn(int i, char c)
{
	char *str;
	switch (c)
	{
		case 'a' :
			str = "ft_pustr";
			break;
		case 'b' :
			str = "ft_putnbr";
			break;
		case 'c' :
			str = "ft_atoi";
			break;
		case 'd' :
			str = "ft_strcpy";
			break;
		case 'e' :
			str = "ft_strncpy";
			break;
		case 'f' :
			str = "ft_strstr";
			break;
		case 'g' :
			str = "ft_strcmp";
			break;
		case 'h' :
			str = "ft_strncmp";
			break;
		case 'i' :
			str = "ft_strupcase";
			break;
		case 'j' :
			str = "ft_strlowcase";
			break;
		case 'k' :
			str = "ft_strcapitalize";
			break;
		case 'l' :
			str = "ft_str_is_alpha";
			break;
		case 'm' :
			str = "ft_str_is_numeric";
			break;
		case 'n' :
			str = "ft_str_is_lowercase";
			break;
		case 'o' :
			str = "ft_str_is_uppercase";
			break;
		case 'p' :
			str = "ft_str_is_printable";
			break;
		case 'q' :
			str = "ft_strcat";
			break;
		case 'r' :
			str = "ft_strncat";
			break;
		case 's' :
			str = "ft_strlcat";
			break;
		case 't' :
			str = "ft_strlcpy";
			break;
		case 'u' :
			str = "ft_putnbr_base";
			break;
		case 'v' :
			str = "ft_atoi_base";
			break;
		case 'w' :
			str = "ft_putstr_non_printable";
			break;
		case 'y' :
			str = "ft_print_memory";
			break;
		default :
			str = "invalid selection";
	}
	printf("------------------\n");
	printf("TEST NUMBER: %d => %s\n", i, str);
	printf("------------------\n");
	
}
int		main(void)
{
	testn(0, 'a');
	ft_putstr("This is a test of putstr\n");
	ft_putstr("This\nis\na\ntest\n");
    
	testn(1, 'b');
	ft_putstr("0 => ");
   	ft_putnbr(0);
	ft_putstr("\n1 => ");
  	ft_putnbr(1);
	ft_putstr("\n-1 => ");
	ft_putnbr(-1);
	ft_putstr("\n10 => ");
	ft_putnbr(10);
	ft_putstr("\n-10 => ");
	ft_putnbr(-10);
	ft_putstr("\n3333 => ");
	ft_putnbr(3333);
	ft_putstr("\n-3333 => ");
	ft_putnbr(-3333);
	ft_putstr("\n42 => ");
   	ft_putnbr(42);
	ft_putstr("\n-42 => ");
	ft_putnbr(-42);
	ft_putstr("\n2147483647 => ");
	ft_putnbr(2147483647);
	ft_putstr("\n-2147483648 => ");
	ft_putnbr(-2147483648);
	ft_putstr("\n0123\n");
	ft_putnbr(0123);
	ft_putstr("\n");

	testn(2, 'c');
	printf("input: 333 expected 333 => %d\n",ft_atoi("333"));
	printf("input: 123456789 expected 123456789 => %d\n",ft_atoi("123456789"));
	printf("input: 42 expected: 42 => %d\n",ft_atoi("42"));
	printf("input: -333 expected: -333 => %d\n",ft_atoi("-333"));
	printf("input: -123456789 expected: -123456789 => %d\n",ft_atoi("-123456789"));
	printf("input: -42 expected: -42 => %d\n",ft_atoi("-42"));
	printf("input: \\f\\r\\t\\v\\' \'42 expected: 42 => %d\n",ft_atoi("\f\r\t\v 42"));
	printf("input: ?!@#$*() 3245 expected: 0 => %d\n",ft_atoi("?!@#$*() 3245"));
	printf("input: 42abc- 42 4242 expected: 42 => %d\n", ft_atoi("42abc- 42 4242"));
	printf("input: -+42 expected: 0 => %d\n", ft_atoi("-+42"));
	printf("input: +-42 expected: 0 => %d\n", ft_atoi("+-42"));
	printf("input: --42 expected: 0 => %d\n", ft_atoi("--42"));	
	printf("input: 2147483647 expected: 2147483647 => %d\n", ft_atoi("2147483647"));
	printf("input: -2147483648 expected: -2147483648 => %d\n", ft_atoi("-2147483648"));
	printf("input:'    +12  ' expected: 12 => %d\n", ft_atoi("     +12 "));
    printf("input:'3147483649' expected: ?? => %d\n", atoi("3147483649"));
    printf("input:'3147483649' expected: ?? => %d\n", ft_atoi("3147483649"));
	testn(3, 'd');
	
	char new[100];
	ft_putstr("This test will copy the right parameter \ninto the left variable and null all other\n characters.");
	dashes();
	ft_putstr(ft_strcpy(new, "This same string variable"));
	ft_putstr("\n");
	ft_putstr(ft_strcpy(new, "is being passed down"));
	ft_putstr("\n");
	ft_putstr(ft_strcpy(new, "from ft_strcpy to"));	
	ft_putstr("\n");
	ft_putstr(ft_strcpy(new, "ft_strcpy ^_^"));
	ft_putstr("\n");
	ft_putstr(ft_strcpy(new, "isn't that weird"));
	ft_putstr("\n");
	ft_putstr(ft_strcpy(new, "????????????"));
	ft_putstr("\n");

	testn(4, 'e');

	char new1[100];
	ft_putstr("This test will only copy up to the nth \nnumber specified in the paramenter it won't\nnecessary null charactesr after.");
	dashes();
	ft_putstr("\nThis is initial string: \n");
	ft_putstr(new1);
	ft_putstr("\n");
	ft_putstr(ft_strncpy(new1, "This is it", 7));
	ft_putstr("\n");
	ft_putstr(ft_strncpy(new1, "I'm not exactly sure", 6));
	ft_putstr("\n");
	ft_putstr(ft_strncpy(new1, "if this is going to work", 5));
	ft_putstr("\n");
	ft_putstr(ft_strncpy(new1, "but here it goes", 1));
	ft_putstr("\n");
	
    dashes();
    ft_putstr("\nThis is initial string: \n");
    ft_putstr(new);
    ft_putstr("\n");
    ft_putstr(ft_strncpy(new, "This is it", 7));
    ft_putstr("\n");
    ft_putstr(ft_strncpy(new, "I'm not exactly sure", 6));
    ft_putstr("\n");
    ft_putstr(ft_strncpy(new, "if this is going to work", 5));
    ft_putstr("\n");
    ft_putstr(ft_strncpy(new, "but here it goes", 1));
    ft_putstr("\n");

    
	testn(5, 'f');

	char *big;
	char *little;

	big = "This is definitely not a little string";
	little = "";
	ft_putstr("This function will return the first instarnce where little\nstring is found in big string\n");
    dashes();
	printf("This is the big string: => %s\n", big);
	printf("This is the litte string: (yes it's empty) => %s\n", little);
	ft_putstr(ft_strstr(big, little));
    ft_putstr("\n\n");
    
    big = "Foo Bar Baz";
    little = "Bar";
    printf("This is the big string: => %s\n", big);
    printf("This is the litte string: => %s\n", little);
    ft_putstr(ft_strstr(big, little));
    ft_putstr("\n\n");
    
    big = "His name is Leopoldo";
    little = "what is his name Leopoldo";
    printf("This is the big string: => %s\n", big);
    printf("This is the litte string: => %s\n", little);
    printf("%s\n", ft_strstr(big, little));
    ft_putstr("\n\n");
    
    testn(6, 'g');
    printf("%d\n",ft_strcmp("abcd", "Abcd"));
    printf("%d\n",ft_strcmp("abcefg", "abcd"));
    printf("%d\n",ft_strcmp("bcd", "abcdd"));
    printf("%d\n\n",ft_strcmp("Leo", "leon"));
    printf("Below uses the library\nIf output is the same, then you are correct ^_^");
    dashes();
    printf("%d\n",strcmp("abcd", "Abcd"));
    printf("%d\n",strcmp("abcefg", "abcd"));
    printf("%d\n",strcmp("bcd", "abcdd"));
    printf("%d\n",strcmp("Leo", "leon"));
    
    testn(7, 'h');
    printf("%d\n",ft_strncmp("abcd", "abck", 4));
    printf("%d\n",ft_strncmp("abcefg", "abcd", 2));
    printf("%d\n",ft_strncmp("bcd", "abcdd", 1));
    printf("%d\n",ft_strncmp("Leo", "leon", 0));
    printf("%d\n",ft_strncmp("qwerty", "qwerty type", 7));
    printf("%d\n",ft_strncmp("qwerty", "qwerty type", 5));
    printf("%d\n",ft_strncmp("qwerty", "qwerty type", 20));
    printf("Below uses the library\nIf output is the same, then you are correct ^_^");
    dashes();
    printf("%d\n",strncmp("abcd", "abck", 4));
    printf("%d\n",strncmp("abcefg", "abcd", 2));
    printf("%d\n",strncmp("bcd", "abcdd",1));
    printf("%d\n",strncmp("Leo", "leon", 0));
    printf("%d\n",strncmp("qwerty", "qwerty type", 7));
    printf("%d\n",strncmp("qwerty", "qwertygit  type", 5));
    printf("%d\n",strncmp("qwerty", "qwerty type", 20));
    
    testn(8, 'i');
    char low[] = "what";
    char low1[] = "this string has to be returned with uppercase letters";
    char low2[] ="aBcDeFgHiJkLmNoPqRsTuVwXyZ";
    char low3[] = "hello world!?.,';][-09876545321!@@#$$";
    
    printf("what => %s\n", ft_strupcase(low));
    printf("this string has to be returned with uppercase letters => %s\n",ft_strupcase(low1));
    printf("aBcDeFgHiJkLmNoPqRsTuVwXyZ => %s\n", ft_strupcase(low2));
    printf("hello world!?.,';][-09876545321!@@#$$ => %s\n", ft_strupcase(low3));

    testn(9, 'j');
    char upp[] = "WHAT";
    char upp1[] = "THIS STRING HAS TO BE RETURNED WITH LOWERCASE LETTERS";
    char upp2[] ="aBcDeFgHiJkLmNoPqRsTuVwXyZ";
    char upp3[] = "HELLO wORLD!?.,';][-09876545321!@@#$$";
    
    printf("WHAT => %s\n", ft_strlowcase(upp));
    printf("THIS STRING HAS TO BE RETURNED WITH LOWERCASE LETTERS => %s\n",ft_strlowcase(upp1));
    printf("aBcDeFgHiJkLmNoPqRsTuVwXyZ => %s\n", ft_strlowcase(upp2));
    printf("HELLO wORLD!?.,';][-09876545321!@@#$$ => %s\n", ft_strlowcase(upp3));
    
    testn(10, 'k');
    
    char cap[] ="this is-a test!";
    char cap1[] ="tHis Is-A? test!";
    char cap2[] = "this string has to be returned with capitalized words";
    char cap3[] ="salut, coment tu vas ? 42mots quarante-deux; cinquante+et+un";
    
    printf("this is-a test! = > %s\n", ft_strcapitalize(cap));
    printf("tHis Is-A? test! = > %s\n", ft_strcapitalize(cap1));
    printf("this string has to be returned with capitalized words = > %s\n", ft_strcapitalize(cap2));
    printf("salut, coment tu vas ? 42mots quarante-deux; cinquante+et+un = > %s\n", ft_strcapitalize(cap3));
    
    testn(11, 'l');
    
    printf("input: What expected: 1 => %d\n", ft_str_is_alpha("What"));
    printf("input: This is a string expected: 0 => %d\n", ft_str_is_alpha("This is a string"));
    printf("input: FORTYTWO! expected: 0 => %d\n", ft_str_is_alpha("FORTYTWO!"));
    printf("input: '' expected: 1 => %d\n", ft_str_is_alpha(""));
    printf("input: 'ABCcdasdfdlrounnn1' expected: 0 => %d\n", ft_str_is_alpha("ABCcdasdfdlrounnn1"));
    printf("input: 'ABCcdasdfdlrounnn' expected: 1 => %d\n", ft_str_is_alpha("ABCcdasdfdlrounnn"));
    printf("input: '   ABCcdasdfdlrounnn' expected: 0 => %d\n", ft_str_is_alpha("   ABCcdasdfdlrounnn"));

    testn(12, 'm');
    
    printf("input: '1234567890': 1 => %d\n", ft_str_is_numeric("1234567890"));
    printf("input: '    567890': 0 => %d\n", ft_str_is_numeric("    567890"));
    printf("input: '1234abcdef': 0 => %d\n", ft_str_is_numeric("1234abcdef"));
    printf("input: '42424242 4': 0 => %d\n", ft_str_is_numeric("42424242 4"));
    printf("input: ' ' : 1 => %d\n", ft_str_is_numeric(""));
    printf("input: 'sans scr1p': 0 => %d\n", ft_str_is_numeric("sans scr1p"));
    
    testn(13, 'n');
    
    printf("input: '1234567890': 0 => %d\n", ft_str_is_lowercase("1234567890"));
    printf("input: '    567890': 0 => %d\n", ft_str_is_lowercase("    567890"));
    printf("input: 'abcdefghij': 1 => %d\n", ft_str_is_lowercase("abcdefghij"));
    printf("input: '42424242 4': 0 => %d\n", ft_str_is_lowercase("42424242 4"));
    printf("input: ' ' : 1 => %d\n", ft_str_is_lowercase(""));
    printf("input: 'ABCDEFGHIJ': 0 => %d\n", ft_str_is_lowercase("ABCDEFGHIJ"));
    
    testn(14, 'o');
    
    printf("input: '1234567890': 0 => %d\n", ft_str_is_uppercase("1234567890"));
    printf("input: '    567890': 0 => %d\n", ft_str_is_uppercase("    567890"));
    printf("input: 'abcdefghij': 0 => %d\n", ft_str_is_uppercase("abcdefghij"));
    printf("input: '42424242 4': 0 => %d\n", ft_str_is_uppercase("42424242 4"));
    printf("input: ' ' : 1 => %d\n", ft_str_is_uppercase(""));
    printf("input: 'ABCDEFGHIJ': 1 => %d\n", ft_str_is_uppercase("ABCDEFGHIJ"));
    
    testn(15, 'p');
    
    printf("input: 'short long \\r\\f\\t\\v' '': 0 => %d\n", ft_str_is_printable("short long \r\f\v\t "));
    printf("input: '123456789a': 1 => %d\n", ft_str_is_printable("123456789a"));
    printf("input: '!@#$&*()_+': 1 => %d\n", ft_str_is_printable("!@#$&*()_+"));
    printf("input: 'shortLONG\nstring: 0 => %d\n", ft_str_is_printable("shortLONG\nstring"));
    printf("input: ' ' : 1 => %d\n", ft_str_is_printable(""));
    printf("input: 'THER\x7FzININPAIN': 1 => %d\n", ft_str_is_printable("THER\x7FzININPAIN"));

    testn(16, 'q');
    char part1[1000] = "The fox";

    
    printf("part1 : %s\n",part1);
    printf("The fox jumped over the rainbow => %s\n",ft_strcat(part1, " jumped over the rainbow"));
    printf("The fox jumped over the rainbow again=> %s\n",ft_strcat(part1, " again"));
    printf("The fox jumped over the rainbow again and again=> %s\n",ft_strcat(part1, " and again."));
    
    testn(17, 'r');
    char part2[1000] = "The fox";
    
    printf("part1 : %s\n",part2);
    printf("The fox jumped => %s\n",ft_strncat(part2, " jumped over the rainbow", 7));
    printf("The fox jumped aga => %s\n",ft_strncat(part2, " again", 4));
    printf("The fox jumped aga and => %s\n",ft_strncat(part2, " and again.", 4));

    
    
    
    return (0);
}

