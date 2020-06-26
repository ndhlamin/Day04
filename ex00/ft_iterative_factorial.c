
int		ft_iterative_factorial(int nb);

int		ft_iterative_factorial(int nb)
{
		int i;
		int ans;

		i = 1;
		ans = 1;

	while(i <= nb)
	{
		ans = ans * i;
		i++;
	}	
		
		return (ans);
}


