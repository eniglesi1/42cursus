# include "ft_printf.h"

int main(){
	int c = 42;
	int d = 2147483647;

	int a =  ft_printf("\n%s %s %s %s %s %s %s %s %s %s %d %d %d %d %d %d %d %d %d %d %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %x %x %x %x %x %x %x %x %x %x %c %c %c %c %c %c %c %c %c %c %% %% %% %% %% %% %% %% %% ", "" , "hola mundo", "khkgjadhs gdh", NULL ," LKDSGHKSHGKJHSFGKLJHAFKJGHHJG KSJDHGLKHGKKG ", "" , "hola mundo", "khkgjadhs gdh", NULL ," LKDSGHKSHGKJHSFGKLJHAFKJGHHJG KSJDHGLKHGKKG ", 12, 12345, 234567, 0, 7852, -1, 1234567, 9809799, -2147483648, 2147483647, &c, &c, &c, &c, &c, &c, &c, &c, &c, NULL, &d, &d, &d, &d, &d, &d, &d, &d, &d, &d, d, d, d, d, d, d, d, d, d, d, c, c, c, c, c, c, c, c, c, c );
	printf("\n-----------------------------------------------------------------------------------\n");
	int b =   printf("\n%s %s %s %s %s %s %s %s %s %s %d %d %d %d %d %d %d %d %ld %d %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %x %x %x %x %x %x %x %x %x %x %c %c %c %c %c %c %c %c %c %c %% %% %% %% %% %% %% %% %% ", "" , "hola mundo", "khkgjadhs gdh", NULL ," LKDSGHKSHGKJHSFGKLJHAFKJGHHJG KSJDHGLKHGKKG ", "" , "hola mundo", "khkgjadhs gdh", NULL ," LKDSGHKSHGKJHSFGKLJHAFKJGHHJG KSJDHGLKHGKKG ", 12, 12345, 234567, 0, 7852, -1, 1234567, 9809799, -2147483648, 2147483647, &c, &c, &c, &c, &c, &c, &c, &c, &c, NULL, &d, &d, &d, &d, &d, &d, &d, &d, &d, &d, d, d, d, d, d, d, d, d, d, d, c, c, c, c, c, c, c, c, c, c );
	if (a !=  b)
		printf ("Error\n");
	return(0);
}
