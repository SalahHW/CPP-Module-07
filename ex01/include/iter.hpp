/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 22:30:43 by sbouheni          #+#    #+#             */
/*   Updated: 2024/05/29 10:20:17 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>

template <typename T>
void iter(T* array_address, size_t array_lenght, void (function)(int&))
{
	for (size_t i = 0; i < array_lenght; i++)
	{
		function(array_address[i]);
	}
}


#endif
