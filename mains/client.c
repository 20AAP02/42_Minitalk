#include <minitalk.h>

int main(int argc, char **argv)
{
	int		pid_t;
	char	*str;

	if (argc != 3)
		return (ft_printf("invalid parameters\n"));	
	if (ft_strlen(argv[1]))
		pid_t = ft_atoi(argv[1]);
	if (pid_t <= 0 || kill(pid_t, 0) < 0)
		return (ft_printf("invalid pid\n"));
	str = argv[2];
	while (*str)
		kill(pid_t, *str++);
	return (0);
}