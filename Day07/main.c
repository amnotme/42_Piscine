#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

char		*ft_strdup(char *src);
int			*ft_range(int min, int max);
int			*ft_ultimate_range(int **range, int min, int max);
char		*ft_concat_params(int argc, char **argv);
char		**ft_split_whitespaces(char *str);
void		ft_print_words_tables(char **tab);
char		*ft_convert_base(char *nbr, char *base_from, char *base_to);
char		**ft_split(char *str, char *charset);

void		dashes(void)
{
	printf("\n-----------------\n");
}

void		testn(int i, char c)
{
    char *str;
    str = "whatever";

	dashes();
	switch (c)
	{
		case 'a':
			str = "ft_strdup";
			break;
		case 'b':
			str = "ft_range";
			break;
		case 'c':
			str = "ft_ultimate_range";
			break;
		case 'd':
			str = "ft_concat_params";
			break;
		case 'e':
			str = "ft_split_whitespaces";
			break;
		case 'f':
			str = "ft_print_word_tables";
			break;
		case 'g':
			str = "ft_convert_base";
			break;
		case 'h':
			str = "ft_split";
			break;
		default:
			break;
	}
	printf("This is test no: %d => %s",i,  str);
	dashes();
}


int		main(void)
{
	testn(0, 'a');
	char *p1 = "yo!";
	char *p2;
	char p3 [100];

	p2 = strdup(p1);
	printf("This uses the 'strdup' from the 'stdlib'");
	dashes();
	printf("Duplicated string is => %s\n", p2);
	printf("This is a duplicate of the duplicate =>  %s\n", strcpy(p3, p2));
	free(p2);

	p1 = "";
	p2 = strdup(p1);

	printf("Duplicated string is => %s\n", p2);
	printf("This is a duplicate of the duplicate =>  %s\n", strcpy(p3, p2));
	free(p2);

	p1 = "I'm a copy!>()ffs 1232456";
	p2 = strdup(p1);

	printf("Duplicated string is => %s\n", p2);
	printf("This is a duplicate of the duplicate =>  %s\n", strcpy(p3, p2));
	free(p2);
	dashes();
	printf("This uses your function. if your output below matches the one above\nyou should be good. ^_^");
	dashes();
	p1 = "yo!";
	p2 = ft_strdup(p1);

	printf("Duplicated string is => %s\n", p2);
	printf("This is a duplicate of the duplicate =>  %s\n", strcpy(p3, p2));
	free(p2);

	p1 = "";
	p2 = ft_strdup(p1);

	printf("Duplicated string is => %s\n", p2);
	printf("This is a duplicate of the duplicate =>  %s\n", strcpy(p3, p2));
	free(p2);

	p1 = "I'm a copy!>()ffs 1232456";
	p2 = ft_strdup(p1);

	printf("Duplicated string is => %s\n", p2);
	printf("This is a duplicate of the duplicate =>  %s\n", strcpy(p3, p2));
	free(p2);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	testn(1, 'b');
	int *range;
    int i = 0;
    int min = 30;
    int max = 0;
    int l = max - min;
	range = ft_range(min, max);
    printf("range: min: 30, max: 0 => \n");
    while (i  < l)
	{
        if (range[i] == max - 1)
        {
            printf("%d.\n", range[i]);
            i++;
        }
        else
            {
                printf("%d, ",range[i]);
                i++;
            }
	}
    dashes();
    i = 0;
    min = -2147483648;
    max = -2147483600;
    l = max - min;
    range = ft_range(min, max);
    printf("range min: -2147483648, max: -2147483600 => \n");
    while (i  < l)
    {
        if (range[i] == max - 1)
        {
            printf("%d.\n", range[i]);
            i++;
        }
        else
        {
            printf("%d, ",range[i]);
            i++;
        }
    }
    dashes();
    i = 0;
    min = 10;
    max = 10;
    l = max - min;
    range = ft_range(min, max);
    printf("range min: 10, max: 10 => \n");
    while (i  < l)
    {
        if (range[i] == max - 1)
        {
            printf("%d.\n", range[i]);
            i++;
        }
        else
        {
            printf("%d, ",range[i]);
            i++;
        }
    }
    dashes();
    i = 0;
    min = 0;
    max = 43;
    l = max - min;
    range = ft_range(min, max);
    printf("range min: 0, max: 43 => \n");
    while (i  < l)
    {
        if (range[i] == max - 1)
        {
            printf("%d.\n", range[i]);
            i++;
        }
        else
        {
            printf("%d, ",range[i]);
            i++;
        }
    }
    dashes();
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    testn(2, 'c');
//    printf("Must run withouth the -Wint-converstion flag in python_tutor.");
//    int    ii = 0;
//    int  minn = 0;
//    int  maxx = 10;
//    int  ll = maxx - minn;
//    int *len;
//    int length;
//    length = ft_ultimate_range(&len, minn, maxx);
//    printf("range: min: 0, max: 10 length: %d => \n", length);
//    while (ii  < ll)
//    {
//        if (len[ii] == maxx - 1)
//        {
//            printf("%d.\n", len[ii]);
//            ii++;
//        }
//        else
//        {
//            printf("%d, ",len[ii]);
//            ii++;
//        }
//    }
    testn(3, 'd');
    
	return (0);
}
