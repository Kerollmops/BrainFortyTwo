/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   While.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 15:15:56 by crenault          #+#    #+#             */
/*   Updated: 2015/04/17 18:39:21 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHILE_HPP
# define WHILE_HPP

# include <iostream>
# include <deque>

# include "IInstruction.hpp"

class While : public IInstruction {

public:
	While();
	While(While const &);
	virtual ~While();
	While			&operator=(While const &);

	bool			execute(Memory &mem);
	While			*duplicate(void) const;
	void			addInstr(IInstruction *inst);

private:
	std::deque<IInstruction *>	_instructions;

};

#endif
