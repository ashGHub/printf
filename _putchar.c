/**
 * _putchar - a function to print a character to stdout
 * @ch: character to print
 *
 * Return: number of character printed
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
