/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CloseWhile.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 17:33:41 by crenault          #+#    #+#             */
/*   Updated: 2015/04/17 17:44:29 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLOSEWHILE_HPP
# define CLOSEWHILE_HPP

# include "IInstruction.hpp"

class CloseWhile : public IInstruction {

public:
	CloseWhile();
	CloseWhile(CloseWhile const &);
	virtual ~CloseWhile();
	CloseWhile			&operator=(CloseWhile const &);

	bool			execute(Memory & memory);
	CloseWhile		*duplicate(void) const;

};

#endif
