//
// Created by lhy on 5/7/24.
//

#include "CCpp.h"
extern LCD lcd;

void lvgl_LCD_Color_Fill(u16 sx, u16 sy, u16 ex, u16 ey, lv_color_t *color)
{

    uint32_t y=0;
    u16 height, width;
    width = ex - sx + 1;            //�õ����Ŀ��
    height = ey - sy + 1;           //�߶�

    lcd.Address_Set(sx,sy,ex,ey);

    for(y = 0; y <width*height; y++)
    {
        lcd.WR_DATA(color->full);
        color++;
    }
}

