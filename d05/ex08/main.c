#include <stdio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define GOES return printf("\e[0;32mGOES ✓\e[0m\n");
#define FAKE_N_GAY return printf("\e[0;31mFAKE AND GAY ✗\e[0m\n")
#define SNAIL return printf("\e[0;33mYOU ARE TOO SLOW! ✗\e[0m\n")

#define TEST_CASES 5

char	*strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		++i;
	}
	return (str);
}

char	*ft_strupcase(char *str);

void	ft_add_test_case(char **data, char *str)
{
	data[0] = str;
}

void	ft_get_values(char **data, char **str)
{
	*str = data[0];
}

int		main(void)
{
	time_t 	start_t, end_t;
	double	diff_t;
	char *data[TEST_CASES];
	char *str;
	char your_result[300];
	char actual_result[300];
	char master_test[300];
	int i;

	ft_add_test_case(&data[0], "je code avec le cul");
	ft_add_test_case(&data[1], "u mad");
	ft_add_test_case(&data[2], "");
	ft_add_test_case(&data[3], "asfg372348n9tryasg");
	ft_add_test_case(&data[4], master_test);

	i = 21;
	while (i < 255)
	{
		master_test[i-21] = i;
		++i;
	}
	master_test[i-21] = '\0';
	
	i = 0;
	while (i < TEST_CASES)
	{
		ft_get_values(&data[i], &str);
		strcpy(your_result, str);
		strcpy(actual_result, str);
		time(&start_t);
		ft_strupcase(your_result);
		time(&end_t);
		strupcase(actual_result);
		diff_t = difftime(end_t, start_t);
		printf("str: %s, your_result: %s, actual_result: %s, execution time = %f\n", str, your_result, actual_result, diff_t);
		if (strcmp(your_result,actual_result) != 0)
			FAKE_N_GAY;
		if (diff_t >= 2.0)
			SNAIL;
		++i;
	}
	GOES;
}
