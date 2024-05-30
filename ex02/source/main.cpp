/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 08:43:50 by sbouheni          #+#    #+#             */
/*   Updated: 2024/05/30 10:43:10 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
	Array <int>test;

	std::cout << test.size() << std::endl;

	Array <char>chars(10);
	std::cout << chars.size() << std::endl;
	std::cout << chars[9] << std::endl;
	chars[9] = 'A';
	std::cout << chars[9] << std::endl;
	
	Array <char>chars2(chars);
	std::cout << chars2[9] << std::endl;

	Array <char>lol;

	lol = chars2;

	return (0);
}
