/*
 * OLED_Proxy.h
 *
 *  Created on: 2018/02/20
 *      Author: Haru
 */

#ifndef OLED_PROXY_H_
#define OLED_PROXY_H_

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include "stm32f4xx_hal.h"
#include "gfxfont.h"

#define BLACK 0
#define WHITE 1
#define INVERSE 2


#ifdef __cplusplus
#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"

extern "C" {
#endif

void OLED_seti2c(I2C_HandleTypeDef *oledi2c);
void OLED_begin();

void OLED_clearDisplay();
void OLED_invertDisplay(uint8_t i);
void OLED_display();

void OLED_startscrollright(uint8_t start, uint8_t stop);
void OLED_startscrollleft(uint8_t start, uint8_t stop);
void OLED_startscrolldiagright(uint8_t start, uint8_t stop);
void OLED_startscrolldiagleft(uint8_t start, uint8_t stop);
void OLED_stopscroll();

void OLED_dim(bool d);

void OLED_drawPixel(int16_t x, int16_t y, uint16_t color);
void OLED_fillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);
void OLED_fillScreen(uint16_t color);
void OLED_drawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1,
		uint16_t color);
void OLED_drawRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);
void OLED_drawCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color);
void OLED_drawTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1,
		int16_t x2, int16_t y2, uint16_t color);
void OLED_fillTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1,
		int16_t x2, int16_t y2, uint16_t color);
void OLED_drawRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h,
		int16_t radius, uint16_t color);
void OLED_fillRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h,
		int16_t radius, uint16_t color);
void OLED_drawBitmap(int16_t x, int16_t y, const uint8_t bitmap[], int16_t w,
		int16_t h, uint16_t color);

void OLED_drawChar(int16_t x, int16_t y, unsigned char c, uint16_t color,
		uint16_t bg, uint8_t size);

void OLED_setCursor(int16_t x, int16_t y);
void OLED_setTextColor(uint16_t c);
void OLED_setTextSize(uint8_t s);
void OLED_setTextWrap(bool w);
void OLED_cp437(bool x);
void OLED_setFont(const GFXfont *f);
void OLED_print(char* str);
void OLED_println(char* str);

#ifdef __cplusplus
}
;
#endif

#endif /* OLED_PROXY_H_ */
