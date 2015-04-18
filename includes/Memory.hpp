/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Memory.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 14:49:05 by crenault          #+#    #+#             */
/*   Updated: 2015/04/18 15:22:14 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_HPP
# define MEMORY_HPP

# include <iostream>

class Memory {

public:
	Memory() = delete;
	Memory(size_t memSize);
	Memory(Memory const &);
	virtual ~Memory();
	Memory					&operator=(Memory const &);

	// debug
	unsigned char const		&operator[](size_t pos) const;
	unsigned char const		&data(void) const;
	size_t const			&offset(void) const;

	size_t const			&size(void) const;
	unsigned char			&data(void);
	size_t					&offset(void);

private:
	size_t					_memSize;
	size_t					_offset;
	unsigned char			*_mem;

};

#endif
