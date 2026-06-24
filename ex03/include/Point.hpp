/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 13:48:15 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/24 09:51:15 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;
		
	public:
		Point();
		~Point();
		Point (const float x, const float y);
		Point(const Point &copy);

		Point	&operator=(Point const &other);

		Fixed	getX(void)const;
		Fixed	getY(void)const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif