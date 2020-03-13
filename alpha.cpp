#include "alpha.h"

void	toUpper(std::string &str)
{
	for(int i = 0; i < str.length(); i++)
	{
		if(str[i] >= 'a' and str[i] <= 'z')
			str[i] = (str[i] - 'a') + 'A';
	}
}

void	draw(Bug* b, char c)
{
	std::cout << "Drawing " << c << std::endl;
	DRAW[c-'A'](b);
	std::cout << "Finished Drawing " << c << std::endl;
}
void	draw_A(Bug*	b)
{
	double	start_x = b->get_x();
	double	start_y = b->get_y();
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("r", 0);
		b->move("u", 0);
		b->move("u", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y());
		b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("r", 0);
		b->move("d", 0);
		b->move("d", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y());
		b->get_anim()->frame();
	}
	b->teleport(start_x+75, start_y+150);
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("r", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y());
		b->get_anim()->frame();
	}
}

void	draw_B(Bug* b)
{
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("u", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y());
		b->get_anim()->frame();
	}
	b->prepare_circle(b->get_x(),b->get_y()-50, 50);
	for(int i = 0; i < 180/b->get_v(); i++)
	{
		b->move("c", ((-1*i)+90)*PI/180);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	b->prepare_circle(b->get_x(),b->get_y()-100, 100);
	for(int i = 0; i < 180/b->get_v(); i++)
	{
		b->move("c", ((-1*i)+90)*PI/180);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}

void	draw_C(Bug* b)
{
	double	start_x = b->get_x();
	double	start_y = b->get_y();
	b->prepare_circle(start_x+150, start_y+200, 100);
	for(int i = 0; i < 180/b->get_v(); i++)
	{
		b->move("c", ((1*i))*PI/180);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 100/b->get_v(); i++)
	{
		b->move("d", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	
	b->prepare_circle(start_x+150, start_y+100, 100);
	for(int i = 0; i < 180/b->get_v(); i++)
	{
		b->move("c", ((i)+180)*PI/180);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}

void	draw_D(Bug* b)
{
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("u", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	b->prepare_circle(b->get_x(), b->get_y()-150, 150);
	for(int i = 0; i < 180/b->get_v(); i++)
	{
		b->move("c", ((-1*i)+90)*PI/180);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}

void	draw_E(Bug *b)
{
	b->set_x(b->get_x()+300);
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("l", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("u", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("r", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("l", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("u", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("r", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}
void	draw_F(Bug *b)
{
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("u", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("r", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("l", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("u", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("r", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}

void	draw_G(Bug *b)
{
	double	start_x = b->get_x();
	double	start_y = b->get_y();
	b->teleport(b->get_x()+150, b->get_y()+150);
	b->prepare_circle(start_x+150, start_y+150, 150);
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("r", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 315/b->get_v(); i++)
	{
		b->move("c", ((-1*i))*PI/180);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}

void	draw_H(Bug* b)
{
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("u", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("d", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("r", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("d", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("u", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}

void	draw_I(Bug* b)
{
	b->teleport(b->get_x()+125, b->get_y());
	for(int i = 0; i < 50/b->get_v(); i++)
	{
		b->move("l",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 100/b->get_v(); i++)
	{
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 50/b->get_v(); i++)
	{
		b->move("l",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("u",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 50/b->get_v(); i++)
	{
		b->move("l",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 100/b->get_v(); i++)
	{
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}
void		draw_J(Bug* b)
{
	b->teleport(b->get_x()+150, 300);
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("d",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	b->prepare_circle(b->get_x()-150, b->get_y(), 150);
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("c", ((-1*i))*PI/180);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}
void		draw_K(Bug* b)
{
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("u",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("d",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("u",0);
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("d",0);
		b->move("l",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("d",0);
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}
void		draw_L(Bug* b)
{
	b->teleport(b->get_x(), 300);
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("d",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 200/b->get_v(); i++)
	{
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}
void		draw_M(Bug* b)
{
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("u",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("d",0);
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("u",0);
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("d",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}
void		draw_N(Bug* b)
{
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("u",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("d",0);
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("u",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}
void		draw_O(Bug* b)
{
	b->prepare_circle(b->get_x()+150, 150, 150);
	for(int i = 0; i < 360/b->get_v(); i++)
	{
		b->move("c", ((-1*i))*PI/180);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}
void		draw_P(Bug* b)
{
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("u",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	b->prepare_circle(b->get_x(), b->get_y()-75, 75);
	for(int i = 0; i < 180/b->get_v(); i++)
	{
		b->move("c", ((-1*i)+90)*PI/180);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}
void		draw_Q(Bug* b)
{
	b->prepare_circle(b->get_x()+150, 150, 150);
	for(int i = 0; i < 360/b->get_v(); i++)
	{
		b->move("c", ((1*i)+270)*PI/180);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("r", 0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}

}
void		draw_R(Bug* b)
{
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("u",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	b->prepare_circle(b->get_x(), b->get_y()-75, 75);
	for(int i = 0; i < 180/b->get_v(); i++)
	{
		b->move("c", ((-1*i)+90)*PI/180);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("d",0);
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}
void		draw_S(Bug* b)
{
	b->prepare_circle(b->get_x()+150, b->get_y()+225, 75);
	for(int i = 0; i < 270/b->get_v(); i++)
	{
		b->move("c", ((1*i))*PI/180);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	b->prepare_circle(b->get_x(), b->get_y()-75, 75);
	for(int i = 0; i < 270/b->get_v(); i++)
	{
		b->move("c", ((-1*i)+90)*PI/180);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}
void		draw_T(Bug* b)
{
	b->teleport(b->get_x()+150, b->get_y());
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("u",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("l",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	
}
void		draw_U(Bug* b)
{
	b->teleport(b->get_x(), b->get_y()+300);
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("d",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	b->prepare_circle(b->get_x(), b->get_y()-75, 75);
	for(int i = 0; i < 180/b->get_v(); i++)
	{
		b->move("c", ((i)+180)*PI/180);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("u",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}
void		draw_V(Bug* b)
{
	b->teleport(b->get_x(), b->get_y()+300);
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("d",0);
		b->move("d",0);
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("u",0);
		b->move("u",0);
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}
void		draw_W(Bug* b)
{
	b->teleport(b->get_x(), b->get_y()+300);
	for(int i = 0; i < 100/b->get_v(); i++)
	{
		b->move("d",0);
		b->move("d",0);
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 50/b->get_v(); i++)
	{
		b->move("u",0);
		b->move("u",0);
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 50/b->get_v(); i++)
	{
		b->move("d",0);
		b->move("d",0);
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 100/b->get_v(); i++)
	{
		b->move("u",0);
		b->move("u",0);
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}
void		draw_X(Bug* b)
{
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("u",0);
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	b->teleport(b->get_x()-300, b->get_y()+300);
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("d",0);
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}
void		draw_Y(Bug* b)
{
	b->teleport(b->get_x(), b->get_y()+300);
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("d",0);
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("u",0);
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("d",0);
		b->move("l",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 150/b->get_v(); i++)
	{
		b->move("d",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}
void		draw_Z(Bug* b)
{
	b->teleport(b->get_x(), b->get_y()+300);
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("d",0);
		b->move("l",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
	for(int i = 0; i < 300/b->get_v(); i++)
	{
		b->move("r",0);
		b->get_anim()->add(b->get_p(), b->get_x(), (HEIGHT+PADDING/2) - b->get_y()); b->get_anim()->frame();
	}
}