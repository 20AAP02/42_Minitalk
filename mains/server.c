#include <minitalk.h>

int main()
{
	int	pid_t;

	pid_t = getpid();
	ft_printf("%i\n", pid_t);
	pause();
	return (0);
}