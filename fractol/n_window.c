/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_window.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkolomiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 11:11:58 by pkolomiy          #+#    #+#             */
/*   Updated: 2017/04/01 02:28:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h.h"

int		keyn(int k, t_v *v)
{
	(k == 53) ? exit(0) : 0;
	(k == 69) ? newton(v, 1) : 0;
	(k == 78) ? newton(v, 2) : 0;
	(k == 123) ? newton(v, 3) : 0;
	(k == 124) ? newton(v, 4) : 0;
	(k == 125) ? newton(v, 5) : 0;
	(k == 126) ? newton(v, 6) : 0;
	(k == 67) ? newton(v, 7) : 0;
	(k == 75) ? newton(v, 8) : 0;
	(k == 49) ? newton(v, 9) : 0;
	(k == 18) ? newton(v, 13) : 0;
	(k == 19) ? newton(v, 14) : 0;
	(k == 20) ? newton(v, 15) : 0;
	(k == 21) ? newton(v, 16) : 0;
	(k == 23) ? newton(v, 17) : 0;
	return (0);
}

int		mousen(int b, int x, int y, t_v *v)
{
	v->x = x - 500;
	v->y = y - 500;
	(x >= 0 && x <= 1000 && y >= 0 && y <= 1000) && b == 4 ?
		newton(v, 10) : 0;
	(x >= 0 && x <= 1000 && y >= 0 && y <= 1000) && b == 5 ?
		newton(v, 11) : 0;
	return (0);
}

void	windown(t_v v)
{
	v.mlx = mlx_init();
	v.win = mlx_new_window(v.mlx, 1000, 1000, v.s);
	v.z = 0.3;
	v.i = 60;
	v.v = 0;
	v.f = (int*)malloc(sizeof(int) * 3);
	v.f[0] = 50;
	v.f[1] = 10;
	v.f[2] = 10;
	v.m1 = 0;
	v.m2 = 0;
	newton(&v, 0);
	mlx_hook(v.win, 2, 5, keyn, &v);
	mlx_mouse_hook(v.win, mousen, &v);
	mlx_loop(v.mlx);
}
