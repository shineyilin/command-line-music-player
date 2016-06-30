/*
 * play.h
 *
 *  Created on: 2015年8月23日
 *      Author: admin
 */



#ifndef GUI_H_
#define GUI_H_

#include <graphics.h>

//============================================================================

int print_text(char *world);




//============================================================================

int print_text(char *world)
{
	setbkcolor(GREEN);
	setfont(18,0,"宋体");
	setcolor(BLACK);
	setbkmode(TRANSPARENT);
	outtextxy(10,10,world);
	return 0;
}

#endif /* PLAY_H_ */
