#include "Bug.h"
#include "Move.h"
#include <cmath>

Bug::Bug()
{
	v = 1;
	x = 0;
	y = 0;
	p = Picture("default.png");
	anim = new Animation("animation.gif", 100, 100);
}
Bug::Bug(double x, double y, Animation *anim)
{
	this->v = 1;
	this->x = x;
	this->y = y;
	this->anim = anim;
}
Bug::Bug(double x, double y, double v, Animation *anim)
{
	this->v = v;
	this->x = x;
	this->y = y;
	this->anim = anim;
}

void	Bug::move(std::string d, double t)
{
	for(int i = 0; i < 5; i++)
	{
		if(d[0] == DIRECTION[i])
		{
			MOVE[i](this, t);
		}
	}
}
Picture		Bug::get_p()	const
{
	return p;
}
double	Bug::get_x()	const
{
	return x;
}
double	Bug::get_y()	const
{
	return y;
}
double	Bug::get_v()	const
{
	return v;
}

void	Bug::set_x(double x)
{
	this->x = x;
}
void	Bug::set_y(double y)
{
	this->y = y;
}
void	Bug::set_v(double v)
{
	this->v = v;
}
void	Bug::set_p(Picture p)
{
	this->p = p;
}
void	Bug::prepare_circle(double x, double y, double r)
{
	center_x = x;
	center_y = y;
	this->r = r;
}
Animation*	Bug::get_anim()	const
{
	return anim;
}
void	Bug::teleport(double x, double y)
{
	this->x = x;
	this->y = y;
}
void	Bug::center()
{
	this->x = anim->get_width()/2;
	this->y = anim->get_height()/2;
}