/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 08:55:30 by sbouheni          #+#    #+#             */
/*   Updated: 2024/05/30 10:46:53 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>
template <typename T>
class Array
{
private:
	unsigned int	array_size;
	T*				array;
public:
	Array() : array_size(0), array(new T[0]()) {}
	~Array() { delete [] array; }
	Array(Array const &other) {
		array_size = other.array_size;
		array = new T[other.array_size]();
		for (unsigned int i = 0; i < array_size; i++)
			array[i] = other.array[i];
	}

	Array &operator=(Array const &other) {
		if (this == &other)
			return (*this);
		delete[] array;
		array = new T[array_size];
		array_size = other.array_size;
		array = new T[other.array_size];
		for (unsigned int i = 0; i < array_size; i++)
			array[i] = other.array[i];
		return (*this);
	}

	Array(unsigned int const &n) : array_size(n), array(new T[n]()){}

	unsigned int size() const { return array_size; }

	T &operator[](unsigned int i) const {
		if (i >= array_size)
			throw std::exception();
		return (array[i]);
	}
};

#endif
