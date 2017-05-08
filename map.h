#ifndef map_hpp
#define map_hpp

#include "Game.h"

//Map 1, A Walk in Park
class map {
	//Use Switch
	void drawMap () {

	}
	//Register Grids

	

	
	//Maze 1, A Walk in Park
	glColor3d(0.0, 0.0, 0.0);         
	glBegin(GL_POLYGON);
	glVertex2f(-1.0, 0.5);
	glVertex2f(1.0, 0.5);
	glVertex2f(1.0, -0.5);
	glVertex2f(-1.0, -0.5);

	glEnd();

/*
//Funnel
	glBegin(GL_POLYGON);
    glVertex2f(-1.0, 0.75);
    glVertex2f(-0.5, 0.75);
    glVertex2f(-0.5, -0.75);
    glVertex2f(-1.0, -0.75);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.5, 0.75);
    glVertex2f(-0.5, -0.75);
	glVertex2f(1.0, 0.0);
    glEnd();

//Slide
	glBegin(GL_POLYGON);
    glVertex2f(-1.0, 1.0);
    glVertex2f(-0.5, 1.0);
    glVertex2f(-0.5, 0.85);
    glVertex2f(-1.0, 0.85);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.5, 1.0);
    glVertex2f(-0.5, 0.85);
    glVertex2f(-0.25, 1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.5, 0.85);
    glVertex2f(-0.25, 1.0);
    glVertex2f(0.5, -0.85);
    glVertex2f(0.25, -1.0);
    glEnd();

//The Z
    glBegin(GL_POLYGON);
    glVertex2f(-1.0, 1.0);
    glVertex2f(0.25, 1.0);
    glVertex2f(0.25, 0.50);
    glVertex2f(-1.0, 0.50);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.25, 1.0);
    glVertex2f(0.25, 0.5);
    glVertex2f(0.75, 1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.75, 1.0);
    glVertex2f(1.0, 0.75);
    glVertex2f(-0.75, -1.0);
    glVertex2f(-1.0, -0.75);
    glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(-0.25, -1.0);
    glVertex2f(-0.25, -0.5);
    glVertex2f(-0.75, -1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1.0, -1.0);
    glVertex2f(-0.25, -1.0);
    glVertex2f(-0.25, -0.50);
    glVertex2f(1.0, -0.50);
    glEnd();



//The Follicle
    glBegin(GL_POLYGON);
    glVertex2f(-1.0, 1.0);
    glVertex2f(-0.25, 1.0);
    glVertex2f(-0.25, 0.75);
    glVertex2f(-1.0, 0.75);
    glEnd();
	
    glBegin(GL_POLYGON);
	glVertex2f(-0.25, 1.0);
    glVertex2f(0.0, 0.75);
    glVertex2f(-0.25, 0.5);
    glVertex2f(-0.5, 0.75);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.5, 0.75);
	glVertex2f(-0.25, 0.5);
    glVertex2f(-0.75, 0.0);
    glVertex2f(-1.0, 0.25);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.75, 0.0);
    glVertex2f(-1.0, 0.25);
    glVertex2f(-1.0, -0.25);
    glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(-0.25, -0.5);
    glVertex2f(-0.5, -0.75);
    glVertex2f(-1.0, -0.25);
    glVertex2f();
    glEnd();    

*/

//Wirlwind

/*
	//Maze 1
	glColor3d(0.0, 0.0, 0.0);    
    glBegin(GL_LINES);

    //Boarder
	glVertex2f(-0.90, -0.95);
	glVertex2f(-0.90, 0.35);
	glVertex2f(-0.90, 0.65);
    glVertex2f(-0.90, 0.95);

    glVertex2f(-0.90, 0.95);
    glVertex2f(0.90, 0.95);

    glVertex2f(-0.9, 0.35);
    glVertex2f(-0.6, 0.35);

    glVertex2f(-0.9, -0.35);
    glVertex2f(-0.3, -0.35);

    //Boarder
    glVertex2f(-0.9, -0.95);
	glVertex2f(0.9, -0.95);

	glVertex2f(-0.6, -0.65);
	glVertex2f(0.0, -0.65);

	glVertex2f(-0.6, -0.15);
	glVertex2f(0.0, -0.15);	

	glVertex2f(-0.6, 0.65);
	glVertex2f(-0.6, 0.15);

	glVertex2f(-0.6, 0.65);
	glVertex2f(0.0, 0.65);

	glVertex2f(-0.3, 0.35);
	glVertex2f(-0.3, -0.15);

	glVertex2f(-0.3, -0.35);
	glVertex2f(-0.3, -0.65);

	glVertex2f(-0.3, 0.15);
	glVertex2f(0.9, 0.15);

	glVertex2f(0.0, 0.65);
	glVertex2f(0.0, 0.35);

	glVertex2f(0.0, -0.15);
	glVertex2f(0.0, -0.35);

	glVertex2f(0.0, -0.35);
	glVertex2f(0.3, -0.35);

	glVertex2f(0.0, 0.35);
	glVertex2f(0.6, 0.35);

	glVertex2f(-0.6, -0.65);
	glVertex2f(0.0, -0.65);

	glVertex2f(0.3, 0.95);
	glVertex2f(0.3, 0.65);

	glVertex2f(0.3, -0.15);
	glVertex2f(0.3, -0.65);

	glVertex2f(-0.6, -0.65);
	glVertex2f(0.0, -0.65);

	glVertex2f(0.6, 0.65);
	glVertex2f(0.6, 0.35);

	glVertex2f(0.6, -0.15);
	glVertex2f(0.6, -0.95);

	glVertex2f(-0.6, -0.65);
	glVertex2f(0.0, -0.65);

	//Boarder
	glVertex2f(0.9, 0.95);
	glVertex2f(0.9, -0.65);

    glEnd();
*/


};

#endif