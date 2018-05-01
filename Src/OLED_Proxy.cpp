/*
 * OLED_Proxy.cpp
 *
 *  Created on: 2018/02/20
 *      Author: Haru
 */

#include "OLED_Proxy.h"
#include "stm32f4xx_hal.h"
#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"

Adafruit_SSD1306 display;

void OLED_seti2c(I2C_HandleTypeDef *oledi2c) {
	display.seti2c(oledi2c);
}

void OLED_begin() {
	display.begin();
}

void OLED_clearDisplay() {
	display.clearDisplay();
}

void OLED_invertDisplay(uint8_t i) {
	display.invertDisplay(i);
}

void OLED_display() {
	display.display();
}

void OLED_startscrollright(uint8_t start, uint8_t stop) {
	display.startscrollright(start, stop);
}

void OLED_startscrollleft(uint8_t start, uint8_t stop) {
	display.startscrollleft(start, stop);
}

void OLED_startscrolldiagright(uint8_t start, uint8_t stop) {
	display.startscrolldiagright(start, stop);
}

void OLED_startscrolldiagleft(uint8_t start, uint8_t stop) {
	display.startscrolldiagleft(start, stop);
}

void OLED_stopscroll() {
	display.stopscroll();
}

void OLED_dim(bool d) {
	display.dim(d);
}

void OLED_drawPixel(int16_t x, int16_t y, uint16_t color) {
	display.drawPixel(x, y, color);
}

void OLED_fillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color) {
	display.fillRect(x, y, w, h, color);
}

void OLED_fillScreen(uint16_t color) {
	display.fillScreen(color);
}

void OLED_drawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1,
		uint16_t color) {
	display.drawLine(x0, y0, x1, y1, color);
}

void OLED_drawRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color) {
	display.drawRect(x, y, w, h, color);
}

void OLED_drawCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color) {
	display.drawCircle(x0, y0, r, color);
}

void OLED_fillCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color) {
	display.fillCircle(x0, y0, r, color);
}

void OLED_drawTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1,
		int16_t x2, int16_t y2, uint16_t color) {
	display.drawTriangle(x0, y0, x1, y1, x2, y2, color);
}

void OLED_fillTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1,
		int16_t x2, int16_t y2, uint16_t color) {
	display.fillTriangle(x0, y0, x1, y1, x2, y2, color);
}

void OLED_drawRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h,
		int16_t radius, uint16_t color) {
	display.drawRoundRect(x0, y0, w, h, radius, color);
}
void OLED_fillRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h,
		int16_t radius, uint16_t color) {
	display.fillRoundRect(x0, y0, w, h, radius, color);
}
void OLED_drawBitmap(int16_t x, int16_t y, const uint8_t bitmap[], int16_t w,
		int16_t h, uint16_t color) {
	display.drawBitmap(x, y, bitmap, w, h, color);
}
void OLED_drawChar(int16_t x, int16_t y, unsigned char c, uint16_t color,
		uint16_t bg, uint8_t size) {
	display.drawChar(x, y, c, color, bg, size);
}

void OLED_setCursor(int16_t x, int16_t y) {
	display.setCursor(x, y);
}

void OLED_setTextColor(uint16_t c) {
	display.setTextColor(c);
}

void OLED_setTextSize(uint8_t s) {
	display.setTextSize(s);
}

void OLED_setTextWrap(boolean w) {
	display.setTextWrap(w);
}

void OLED_cp437(boolean x) {
	display.cp437(x);
}

void OLED_setFont(const GFXfont *f) {
	display.setFont(f);
}

void OLED_print(char* str){
	display.print(str);
}

void OLED_println(char* str){
	display.println(str);
}
