// #define DEBUG

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <math.h>

#include "window.h"

GLint winWidth = 256, winHeight = 256;

Window win;

int OPENGL_XRES = winWidth;
int OPENGL_YRES = winHeight;
int OPENGL_FULLSCREEN = false;
int keydown [256];

const int numProgs = 10;

int variable[numProgs];

class Operator
{
public: 
	unsigned char opcode;
	Operator *param[2];
	unsigned char constant;

	Operator(){
	
	}
	Operator(char _opcode){
		opcode = _opcode;
	}


};