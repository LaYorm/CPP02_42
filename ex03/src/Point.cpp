/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 13:49:11 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/23 14:18:58 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"


Point::Point(): _x(0), _y(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Point::~Point()
{
	std::cout << "Destructor called" << std::endl;
}

Point::Point(Point const &other): _x(other.getX()), _y(other.getY())
{
	std::cout << "Copy constructor called" << std::endl;	
	
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
	std::cout << "Constructor called" << std::endl;
}

Point	&Point::operator=(Point const &other)
{
	(void)other;
	//_x et _y const donc impossible de les modifier
	return (*this);
}

Fixed	Point::getX(void)const
{
	return (this->_x);
}

Fixed	Point::getY(void)const
{
	return (this->_y);
}
