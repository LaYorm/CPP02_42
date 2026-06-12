/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 15:02:03 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/12 14:55:15 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include "iostream"

class Fixed
{
	private:
		int					_raw_bits;
		static const int	_number_of_fractional_bits;
		
	public:
		Fixed();  //canonic
		~Fixed();  //canonic
		Fixed(Fixed const &other);  //canonic
		Fixed	&operator=(Fixed const &other);  //canonic

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		
};

#endif