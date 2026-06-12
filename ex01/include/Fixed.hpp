/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 12:00:29 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/12 15:49:46 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include "iostream"
#include "cmath"

class Fixed
{
	private:
		int					_raw_bits;
		static const int	_number_of_fractional_bits;
	public:
		Fixed(); //canonical
		~Fixed(); //canonical
		Fixed(Fixed const &other); //canonical
		Fixed(const int raw);
		Fixed(const float raw);
		
		Fixed &operator=(Fixed const &other); //canonical

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void)const;
		int		toInt(void) const;
		
};

std::ostream &operator<<(std::ostream &o, Fixed const &other);

#endif