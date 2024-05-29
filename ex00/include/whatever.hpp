/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:48:43 by sbouheni          #+#    #+#             */
/*   Updated: 2024/05/25 22:19:27 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  WHATEVER_HPP
# define  WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
	std::cout << "Values swapped" << std::endl;
}

template <typename T>
T min(T& a, T& b)
{
	if (b <= a)
		return (b);
	return (a);
}

template <typename T>
T max(T& a, T& b)
{
	if (b >= a)
		return (b);
	return (a);
}

#endif
