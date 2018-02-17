/*
Iibriariy is a library with functions that I commonly use.
Created by isaac879 (02/08/2017)
*/

#ifndef Iibrary_h
#define Iibrary_h

#if ARDUINO > 22
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

int getRandomNumber();
double mapNumber(double x, double in_min, double in_max, double out_min, double out_max);
int roundMapNumber(double x, double in_min, double in_max, double out_min, double out_max);
void printi(String text);
void printi(String text, char c, String endText = "\n");
void printi(short num, String endText = "\n");
void printi(unsigned short num, String endText = "\n");
void printi(int num, String endText = "\n");
void printi(unsigned int num, String endText = "\n");
void printi(long num, String endText = "\n");
void printi(unsigned long num, String endText = "\n");
void printi(float num, int dp = 3, String endText = "\n");
void printi(double num, int dp = 3, String endText = "\n");
void printi(String text, short num, String endText = "\n");
void printi(String text, unsigned short num, String endText = "\n");
void printi(String text, int num, String endText = "\n");
void printi(String text, unsigned int num, String endText = "\n");
void printi(String text, long num, String endText = "\n");
void printi(String text, unsigned long num, String endText = "\n");
void printi(String text, float num, int dp = 3, String endText = "\n");
void printi(String text, double num, int dp = 3, String endText = "\n");
double degToRads(double deg);
double radsToDeg(double rads);

class Iibrary {
public:
	Iibrary();//constructor
			  //Iibrary(int i = 0);//constructor
	long serialReadInt();
private:
	int _privateVar;
};
#endif