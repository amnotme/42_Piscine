#include <stdio.h>
#include <unistd.h>

int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
int		ft_iterative_power(int nb, int power);
int 	ft_recursive_power(int nb, int power);
int		ft_fibonacci(int index);
int		ft_sqrt(int nb);
int		ft_is_prime(int nb);
int		ft_find_next_prime(int nb);
int		ft_eight_queens_puzzle(void);
int		ft_eight_queens_puzzle_2(void);

void	dashes(void)
{
	printf("------------------\n");
}

void	testn(int n, char c)
{
	char *str;

	dashes();
	switch (c)
	{
		case 'a':
			  str = "ft_iterative_factorial";
			  break;
		case 'b':
			  str = "ft_recursive_factorial";
			  break;
		case 'c':
			  str = "ft_iterative_power";
			  break;
		case 'd':
			  str = "ft_recursive_power";
			  break;
		case 'e':
			  str = "ft_fibonacci";
			  break;
		case 'f':
			  str = "ft_sqrt";
			  break;
		case 'g':
			  str = "ft_is_prime";
			  break;
		case 'h':
			  str = "ft_find_next_prime";
			  break;
		case 'i':
			  str = "ft_eight_queens_puzzle";
			  break;
		case 'j':
			  str = "ft_eight_queens_puzzle_2";
			  break;
			 default:
			  return ;
	}		


	printf("This is test no: %d => %s\n", n, str);
	dashes();
}

int		main(void)
{

	testn(0, 'a');
	printf("!0 : %d\n",ft_iterative_factorial(0));
	printf("!1 : %d\n",ft_iterative_factorial(1));
	printf("!2 : %d\n",ft_iterative_factorial(2));
	printf("!3 : %d\n",ft_iterative_factorial(3));
	printf("!4 : %d\n",ft_iterative_factorial(4));	
	printf("!12: %d\n",ft_iterative_factorial(12));
	printf("!13: %d\n",ft_iterative_factorial(13));
	printf("!0 : %d\n",ft_iterative_factorial(0));
	printf("!-1: %d\n",ft_iterative_factorial(-1));

	testn(1,'b');
	printf("!0 : %d\n",ft_recursive_factorial(0));
	printf("!1 : %d\n",ft_recursive_factorial(1));
	printf("!2 : %d\n",ft_recursive_factorial(2));
	printf("!3 : %d\n",ft_recursive_factorial(3));
	printf("!4 : %d\n",ft_recursive_factorial(4));
	printf("!12: %d\n",ft_recursive_factorial(12));
	printf("!13: %d\n",ft_recursive_factorial(13));
	printf("!0 : %d\n",ft_recursive_factorial(0));
	printf("!-1: %d\n",ft_recursive_factorial(-1));	

	testn(2,'c');
	printf("2^0: %d\n",ft_iterative_power(2, 0));
	printf("2^2: %d\n",ft_iterative_power(2, 2));
	printf("2^3: %d\n",ft_iterative_power(2, 3));
	printf("3^2: %d\n",ft_iterative_power(3, 2));
	printf("3^3: %d\n",ft_iterative_power(3, 3));
	printf("4^2: %d\n",ft_iterative_power(3, 2));
	printf("4^4: %d\n",ft_iterative_power(4, 4));
	printf("10^3: %d\n",ft_iterative_power(10, 3));
	printf("0^1: %d\n",ft_iterative_power(0, 1));
	printf("3^-1: %d\n",ft_iterative_power(3, -1));
	printf("40^3: %d\n",ft_iterative_power(40, 3));
	printf("-10^2: %d\n",ft_iterative_power(-10, 2));
	printf("-10^3: %d\n",ft_iterative_power(-10, 3));

	testn(3,'d');
	printf("2^0: %d\n",ft_recursive_power(2, 0));
	printf("2^2: %d\n",ft_recursive_power(2, 2));
	printf("2^3: %d\n",ft_recursive_power(2, 3));
	printf("3^2: %d\n",ft_recursive_power(3, 2));
	printf("3^3: %d\n",ft_recursive_power(3, 3));
	printf("4^2: %d\n",ft_recursive_power(3, 2));
	printf("4^4: %d\n",ft_recursive_power(4, 4));
	printf("10^3: %d\n",ft_recursive_power(10, 3));
	printf("0^1: %d\n",ft_recursive_power(0, 1));
	printf("3^-1: %d\n",ft_recursive_power(3, -1));
	printf("40^3: %d\n",ft_recursive_power(40, 3));
	printf("-10^2: %d\n",ft_recursive_power(-10, 2));
	printf("-10^3: %d\n",ft_recursive_power(-10, 3));
testn(4, 'e');
	printf("fib 1: %d\n",ft_fibonacci(0));
	printf("fib 2: %d\n",ft_fibonacci(1));
	printf("fib 3: %d\n",ft_fibonacci(2));
	printf("fib 4: %d\n",ft_fibonacci(3));
	printf("fib 5: %d\n",ft_fibonacci(4));
	printf("fib 6: %d\n",ft_fibonacci(5));
	printf("fib 7: %d\n",ft_fibonacci(6));
	printf("fib 8: %d\n",ft_fibonacci(7));
	printf("fib 9: %d\n",ft_fibonacci(8));
	printf("fib 10: %d\n",ft_fibonacci(9));
	printf("fib 29: %d\n",ft_fibonacci(28));
	printf("fib 46: %d\n",ft_fibonacci(46));
	printf("fib 47: %d\n",ft_fibonacci(47));
	printf("fib -10: %d\n",ft_fibonacci(-9));
	
	testn(5, 'f');
	printf("sqrroot of 4: %d\n", ft_sqrt(4));
	printf("sqrroot of 16: %d\n", ft_sqrt(16));
	printf("sqrroot of 25: %d\n", ft_sqrt(25));
	printf("sqrroot of 169: %d\n", ft_sqrt(169));
	printf("sqrroot of 10000: %d\n", ft_sqrt(10000));
	printf("sqrroot of 46656: %d\n", ft_sqrt(46656));
	printf("sqrroot of 9216: %d\n", ft_sqrt(9216));
	printf("sqrroot of 0: %d\n", ft_sqrt(0));
	printf("sqrroot of 40000: %d\n",ft_sqrt(40000));
	printf("sqrroot of 1: %d\n", ft_sqrt(1));
	printf("sqrroot of -20: %d\n", ft_sqrt(-20));
	
	testn(6, 'g');
	printf("The function will return 1 if it's prime 0 if not\n");
	printf("'0' => %d\n", ft_is_prime(0));
	printf("'1' => %d\n", ft_is_prime(1));
	printf("'2' => %d\n", ft_is_prime(2));
	printf("'3' => %d\n", ft_is_prime(3));
	printf("'7' => %d\n", ft_is_prime(7));
	printf("'1171' => %d\n",ft_is_prime(1171));
	printf("'7879' => %d\n",ft_is_prime(7879));
	printf("'-1' => %d\n",ft_is_prime(-1));
	printf("'50' => %d\n",ft_is_prime(50));
	printf("'169' => %d\n",ft_is_prime(169));
	printf("'2147483648' => %d\n",ft_is_prime(2147483648));	
	
	testn(7, 'h');
	printf("The function will find the next prime closes to the argument given:\n");
	printf("'4' => %d\n",ft_find_next_prime(4));
	printf("'1096' => %d\n",ft_find_next_prime(1096));
	printf("'7879' => %d\n",ft_find_next_prime(7879));
	printf("'0' => %d\n",ft_find_next_prime(0));
	printf("'1' => %d\n",ft_find_next_prime(1));
	printf("'-100' => %d\n",ft_find_next_prime(-100));
	printf("'984' => %d\n",ft_find_next_prime(984));
	return (0);


}
