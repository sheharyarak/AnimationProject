#ifndef MOVE_H
#define MOVE_H

#include "Bug.h"


void	move_cir(Bug* b, double t);
void	move_up(Bug* b, double t);
void	move_down(Bug* b, double t);
void	move_left(Bug* b, double t);
void	move_right(Bug* b, double t);

typedef	void(*Function)(Bug* b, double t);

const	std::string DIRECTION = "udlrc";

const Function MOVE[] = {
	move_up,
	move_down,
	move_left,
	move_right,
	move_cir,
};

#endif