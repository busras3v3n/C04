/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busras3v3n@proton.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:06:16 by busseven          #+#    #+#             */
/*   Updated: 2024/07/20 12:27:25 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
	{
		return (1);
	}
	if (c == '\f' || c == '\v')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign_count;
	int	i;

	result = 0;
	sign_count = 0;
	i = 0;
	while (is_space(str[i]))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign_count++;
		i++;
	}
	while (is_digit(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if ((sign_count % 2) != 0)
		result = -result;
	return (result);
}
