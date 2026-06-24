/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 09:52:24 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/24 09:47:05 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Fixed	area(Point const a, Point const b, Point const c)
{
	Fixed	area;

	area = a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY());
	if (area < 0)
		area = area * (-1);
	area = area / 2;
	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed area_1;
	Fixed area_2;
	Fixed area_3;
	Fixed area_tot;

	area_1 = area(a, b, point);
	area_2 = area(a, c, point);
	area_3 = area(b, c, point);
	area_tot = area(a, b, c);
	if (area_1 == 0 || area_2 == 0 || area_3 == 0 || area_tot == 0)
		return (false);
	if (area_1 + area_2 + area_3 != area_tot)
		return (false);
	return (true);
}