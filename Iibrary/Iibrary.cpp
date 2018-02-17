#include "Iibrary.h"

int getRandomNumber() {
	return 4;
}

Iibrary::Iibrary() {}
//Iibrary::Iibrary(int i) {
//    //constructor
//    _privateVar = i;
//}

double mapNumber(double x, double in_min, double in_max, double out_min, double out_max) {//Remaps a number to a given range
	return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

int roundMapNumber(double x, double in_min, double in_max, double out_min, double out_max) {//Remaps a number to a given range and rounds it
	return round((x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min);
}

void printi(String text) {
	Serial.print(text);
}

void printi(String text, char c, String endText) {
	Serial.print(text);
	Serial.print(c);
	Serial.print(endText);
}

void printi(short num, String endText) {
	Serial.print(num);
	Serial.print(endText);
}

void printi(unsigned short num, String endText) {
	Serial.print(num);
	Serial.print(endText);
}

void printi(int num, String endText) {
	Serial.print(num);
	Serial.print(endText);
}

void printi(unsigned int num, String endText) {
	Serial.print(num);
	Serial.print(endText);
}

void printi(long num, String endText) {
	Serial.print(num);
	Serial.print(endText);
}

void printi(unsigned long num, String endText) {
	Serial.print(num);
	Serial.print(endText);
}

void printi(float num, int dp, String endText) {
	Serial.print(num, dp);
	Serial.print(endText);
}

void printi(double num, int dp, String endText) {
	Serial.print(num, dp);
	Serial.print(endText);
}

void printi(String text, short num, String endText) {
	Serial.print(text);
	Serial.print(num);
	Serial.print(endText);
}

void printi(String text, unsigned short num, String endText) {
	Serial.print(text);
	Serial.print(num);
	Serial.print(endText);
}

void printi(String text, int num, String endText) {
	Serial.print(text);
	Serial.print(num);
	Serial.print(endText);
}

void printi(String text, unsigned int num, String endText) {
	Serial.print(text);
	Serial.print(num);
	Serial.print(endText);
}

void printi(String text, long num, String endText) {
	Serial.print(text);
	Serial.print(num);
	Serial.print(endText);
}

void printi(String text, unsigned long num, String endText) {
	Serial.print(text);
	Serial.print(num);
	Serial.print(endText);
}

void printi(String text, float num, int dp, String endText) {
	Serial.print(text);
	Serial.print(num, dp);
	Serial.print(endText);
}

void printi(String text, double num, int dp, String endText) {
	Serial.print(text);
	Serial.print(num, dp);
	Serial.print(endText);
}

double radsToDeg(double rads) {
	return rads * 180 / PI;
}

double degToRads(double deg) {
	return deg * PI / 180;
}

long Iibrary::serialReadInt() {
	bool negativeFlag = false;
	long serialValue = 0;
	while (Serial.available() > 0) {
		char c = Serial.read();//reads a byte
		if (c >= '0' && c <= '9') {//check the char is a number     
			serialValue = serialValue * 10 + c - '0';//Accumulate the value
		}
		else if (c == '-') {
			negativeFlag = true;
		}
	}
	if (negativeFlag) serialValue = -serialValue;
	return serialValue;
}