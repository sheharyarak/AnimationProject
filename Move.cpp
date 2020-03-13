#include "Move.h"
#include <cmath>

void	move_cir(Bug* b, double t)
{
	b->move_cir(t);
}
void	move_up(Bug* b, double t)
{
	b->move_up();
}
void	move_down(Bug* b, double t)
{
	b->move_down();
}
void	move_left(Bug* b, double t)
{
	b->move_left();
}
void	move_right(Bug* b, double t)
{
	b->move_right();
}

void	Bug::move_cir(double t)
{
	x = r*cos(t*v) + center_x;
	y = r*sin(t*v) + center_y;
}
void	Bug::move_up()
{
	y+=v;
}
void	Bug::move_down()
{
	y-=v;
}
void	Bug::move_left()
{
	x-=v;
}
void	Bug::move_right()
{
	x+=v;
}