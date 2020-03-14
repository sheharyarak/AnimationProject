#ifndef ALPHA_H
#define ALPHA_H

#include "Bug.h"
#include <cmath>
#include <iostream>

const unsigned int PADDING = 100;
const unsigned int WIDTH = 300;
const unsigned int HEIGHT = 300;
const double PI = 3.1415926535897;
const	std::string ALPHABETS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
typedef	void (*DrawFunction)(Bug* b);

void	toUpper(std::string &str);

void	draw(Bug* b, char c);
void	draw_A(Bug*	b);
void	draw_B(Bug*	b);
void	draw_C(Bug*	b);
void	draw_D(Bug*	b);
void	draw_E(Bug*	b);
void	draw_F(Bug*	b);
void	draw_G(Bug*	b);
void	draw_H(Bug* b);
void	draw_I(Bug* b);
void	draw_J(Bug* b);
void	draw_K(Bug* b);
void	draw_L(Bug* b);
void	draw_M(Bug* b);
void	draw_N(Bug* b);
void	draw_O(Bug* b);
void	draw_P(Bug* b);
void	draw_Q(Bug* b);
void	draw_R(Bug* b);
void	draw_S(Bug* b);
void	draw_T(Bug* b);
void	draw_U(Bug* b);
void	draw_V(Bug* b);
void	draw_W(Bug* b);
void	draw_X(Bug* b);
void	draw_Y(Bug* b);
void	draw_Z(Bug* b);

const DrawFunction DRAW[] = {
	draw_A,
	draw_B,
	draw_C,
	draw_D,
	draw_E,
	draw_F,
	draw_G,
	draw_H,
	draw_I,
	draw_J,
	draw_K,
	draw_L,
	draw_M,
	draw_N,
	draw_O,
	draw_P,
	draw_Q,
	draw_R,
	draw_S,
	draw_T,
	draw_U,
	draw_V,
	draw_W,
	draw_X,
	draw_Y,
	draw_Z,
};

#endif
