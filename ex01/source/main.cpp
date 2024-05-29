/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 22:29:53 by sbouheni          #+#    #+#             */
/*   Updated: 2024/05/29 10:13:25 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void add_ten(int& i)
{
	i += 10;
}

int main(void)
{
	int array [9] = {1, 2, 3, 4, 5, 6, 7 ,8 ,9};
	int i = 0;
	
	while (i < 9)
	{
		std::cout << array[i] << std::endl;
		i++;
	}

	iter(array, 9, add_ten);

	i = 0;
	while (i < 9)
	{
		std::cout << array[i] << std::endl;
		i++;
	}
	return (0);
}
