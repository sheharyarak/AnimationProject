#ifndef BUG_H
#define BUG_H

#include "animation/animation.h"

class	Bug
{
	private:
	Picture		p;
	double		v = 1;
	double		x;
	double		y;
	Animation	*anim;
	double		r = 0;
	double		center_x = 0;
	double		center_y = 0;
	public:
	Bug();
	Bug(double x, double y, Animation *anim);
	Bug(double x, double y, double v, Animation *anim);
	void	move(std::string d, double t);
	void	move_cir(double t);
	void	move_up();
	void	move_down();
	void	move_left();
	void	move_right();
	double	get_x()	const;
	double	get_y()	const;
	double	get_v()	const;
	Picture	get_p()	const;
	void	set_x(double x);
	void	set_y(double y);
	void	set_v(double v);
	void	set_p(Picture p);
	void	teleport(double x, double y);
	void	center();
	void	prepare_circle(double x, double y, double r);
	Animation	*get_anim()	const;
};



#endif