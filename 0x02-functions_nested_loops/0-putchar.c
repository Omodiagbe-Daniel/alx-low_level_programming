/*
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	putchar('_');

	while (n == 'p' || n == 'u' || n == 't' || n == 'c')
		putchar(n);
	while (n == 'h' || n == 'a' || n == 'r')
		putchar(n);
	putchar('\n');
	return (0);
}
