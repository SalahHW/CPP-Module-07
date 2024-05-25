/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:43:44 by sbouheni          #+#    #+#             */
/*   Updated: 2024/05/25 22:22:26 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	int a = 42;
	int b = 24;
	int smallest;
	int biggest;

	std::cout << "A = " << a << std::endl;
	std::cout << "B = " << b << std::endl;
	swap(a, b);
	std::cout << "A = " << a << std::endl;
	std::cout << "B = " << b << std::endl;

	smallest = min(a, b);
	biggest = max (a, b);
	std::cout << "The smallest is " << smallest << std::endl;
	std::cout << "The biggest is " << biggest << std::endl;
	return (0);
}
