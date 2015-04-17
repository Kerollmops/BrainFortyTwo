/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IInstruction.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 14:45:57 by crenault          #+#    #+#             */
/*   Updated: 2015/04/17 18:29:47 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IINSTRUCTION_HPP
# define IINSTRUCTION_HPP

# include "Memory.hpp"

class IInstruction {

public:
	virtual bool			execute(Memory &mem) = 0;
	virtual IInstruction	*duplicate(void) const = 0;
};


#endif
