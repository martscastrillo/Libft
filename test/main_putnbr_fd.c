#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void ft_putnbr_fd(int n, int fd);

int main() {
	ft_putnbr(0, 1);
	write(1, "\n", 1);
	ft_putnbr(10, 1);
	write(1, "\n", 1);
	ft_putnbr(-10, 1);
	write(1, "\n", 1);
	ft_putnbr(INT_MAX, 1);
	write(1, "\n", 1);
	ft_putnbr(INT_MIN, 1);
	write(1, "\n", 1);
}