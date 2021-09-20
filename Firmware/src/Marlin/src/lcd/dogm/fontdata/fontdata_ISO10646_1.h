/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#include <U8glib-HAL.h>

#if defined(__AVR__) && ENABLED(NOT_EXTENDED_ISO10646_1_5X7)
  // reduced font (only symbols 1 - 127) - saves about 1278 bytes of FLASH

/*
  Fontname: -Marlin6x12-Fixed-Medium-R-SemiCondensed--12-90-100-100-C-111-ISO10646-1
  Copyright: Public domain terminal emulator font.  Share and enjoy. original font -Misc-Fixed-Medium-R-SemiCondensed--12-110-75-75-C-60-ISO10646-1
  Capital A Height: 7, '1' Height: 7
  Calculated Max Values w= 7 h=10 x= 5 y= 5 dx= 7 dy= 0 ascent= 8 len=10
  Font Bounding box     w=12 h=15 x= 0 y=-2
  Calculated Min Values           x= 0 y=-2 dx= 0 dy= 0
  Pure Font   ascent = 7 descent=-2
  X Font      ascent = 8 descent=-2
  Max Font    ascent = 8 descent=-2
*/
const u8g_fntpgm_uint8_t ISO10646_1_5x7[1324] U8G_FONT_SECTION("ISO10646_1_5x7") = {
  0x00,0x0C,0x0F,0x00,0xFE,0x07,0x02,0x25,0x03,0xBB,0x01,0x7F,0xFE,0x08,0xFE,0x08,
  0xFE,0x05,0x08,0x08,0x06,0x00,0x00,0x40,0xF0,0xC8,0x88,0x88,0x98,0x78,0x10,0x05,
  0x08,0x08,0x06,0x00,0x00,0xC0,0xF8,0x88,0x88,0x88,0x88,0x88,0xF8,0x05,0x05,0x05,
  0x06,0x00,0x01,0x20,0x30,0xF8,0x30,0x20,0x05,0x08,0x08,0x06,0x00,0x00,0x20,0x70,
  0xF8,0x20,0x20,0x20,0x20,0xE0,0x05,0x09,0x09,0x06,0x00,0xFF,0x20,0x70,0xA8,0xA8,
  0xB8,0x88,0x88,0x70,0x20,0x07,0x05,0x05,0x07,0x00,0x01,0xD8,0x6C,0x36,0x6C,0xD8,
  0x05,0x09,0x09,0x06,0x00,0xFF,0xF8,0xA8,0x88,0x88,0x88,0x88,0x88,0xA8,0xF8,0x05,
  0x0A,0x0A,0x06,0x00,0xFE,0x20,0x50,0x50,0x50,0x50,0x88,0xA8,0xA8,0x88,0x70,0x03,
  0x03,0x03,0x06,0x00,0x03,0x40,0xA0,0x40,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
  0x00,0x06,0x05,0xFF,0x01,0x07,0x07,0x06,0x02,0x00,0x80,0x80,0x80,0x80,0x80,0x00,
  0x80,0x03,0x03,0x03,0x06,0x01,0x05,0xA0,0xA0,0xA0,0x05,0x06,0x06,0x06,0x00,0x00,
  0x50,0xF8,0x50,0x50,0xF8,0x50,0x05,0x09,0x09,0x06,0x00,0xFF,0x20,0x70,0xA8,0xA0,
  0x70,0x28,0xA8,0x70,0x20,0x05,0x07,0x07,0x06,0x00,0x00,0xC8,0xC8,0x10,0x20,0x40,
  0x98,0x98,0x05,0x07,0x07,0x06,0x00,0x00,0x40,0xA0,0xA0,0x40,0xA8,0x90,0x68,0x01,
  0x03,0x03,0x06,0x02,0x05,0x80,0x80,0x80,0x03,0x09,0x09,0x06,0x01,0xFF,0x20,0x40,
  0x40,0x80,0x80,0x80,0x40,0x40,0x20,0x03,0x09,0x09,0x06,0x01,0xFF,0x80,0x40,0x40,
  0x20,0x20,0x20,0x40,0x40,0x80,0x05,0x07,0x07,0x06,0x00,0x00,0x20,0xA8,0x70,0x20,
  0x70,0xA8,0x20,0x05,0x05,0x05,0x06,0x00,0x01,0x20,0x20,0xF8,0x20,0x20,0x02,0x03,
  0x03,0x06,0x01,0xFF,0xC0,0x40,0x80,0x05,0x01,0x01,0x06,0x00,0x03,0xF8,0x02,0x02,
  0x02,0x06,0x01,0x00,0xC0,0xC0,0x05,0x07,0x07,0x06,0x00,0x00,0x08,0x10,0x10,0x20,
  0x40,0x40,0x80,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x98,0xA8,0xC8,0x88,0x70,
  0x03,0x07,0x07,0x06,0x01,0x00,0x40,0xC0,0x40,0x40,0x40,0x40,0xE0,0x05,0x07,0x07,
  0x06,0x00,0x00,0x70,0x88,0x08,0x10,0x20,0x40,0xF8,0x05,0x07,0x07,0x06,0x00,0x00,
  0xF8,0x08,0x10,0x30,0x08,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x10,0x30,0x50,
  0x90,0xF8,0x10,0x10,0x05,0x07,0x07,0x06,0x00,0x00,0xF8,0x80,0xF0,0x08,0x08,0x88,
  0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x30,0x40,0x80,0xF0,0x88,0x88,0x70,0x05,0x07,
  0x07,0x06,0x00,0x00,0xF8,0x08,0x10,0x10,0x20,0x20,0x20,0x05,0x07,0x07,0x06,0x00,
  0x00,0x70,0x88,0x88,0x70,0x88,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,
  0x88,0x78,0x08,0x10,0x60,0x02,0x05,0x05,0x06,0x01,0x00,0xC0,0xC0,0x00,0xC0,0xC0,
  0x02,0x06,0x06,0x06,0x01,0xFF,0xC0,0xC0,0x00,0xC0,0x40,0x80,0x03,0x05,0x05,0x06,
  0x01,0x01,0x20,0x40,0x80,0x40,0x20,0x05,0x03,0x03,0x06,0x00,0x02,0xF8,0x00,0xF8,
  0x03,0x05,0x05,0x06,0x01,0x01,0x80,0x40,0x20,0x40,0x80,0x05,0x07,0x07,0x06,0x00,
  0x00,0x70,0x88,0x10,0x20,0x20,0x00,0x20,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,
  0xB8,0xA8,0xB8,0x80,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x88,0xF8,0x88,
  0x88,0x88,0x05,0x07,0x07,0x06,0x00,0x00,0xF0,0x48,0x48,0x70,0x48,0x48,0xF0,0x05,
  0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x80,0x80,0x80,0x88,0x70,0x05,0x07,0x07,0x06,
  0x00,0x00,0xF0,0x48,0x48,0x48,0x48,0x48,0xF0,0x05,0x07,0x07,0x06,0x00,0x00,0xF8,
  0x80,0x80,0xF0,0x80,0x80,0xF8,0x05,0x07,0x07,0x06,0x00,0x00,0xF8,0x80,0x80,0xF0,
  0x80,0x80,0x80,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x80,0x80,0x98,0x88,0x70,
  0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x88,0x88,0xF8,0x88,0x88,0x88,0x03,0x07,0x07,
  0x06,0x01,0x00,0xE0,0x40,0x40,0x40,0x40,0x40,0xE0,0x05,0x07,0x07,0x06,0x00,0x00,
  0x38,0x10,0x10,0x10,0x10,0x90,0x60,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x90,0xA0,
  0xC0,0xA0,0x90,0x88,0x05,0x07,0x07,0x06,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,
  0xF8,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0xD8,0xA8,0x88,0x88,0x88,0x88,0x05,0x07,
  0x07,0x06,0x00,0x00,0x88,0x88,0xC8,0xA8,0x98,0x88,0x88,0x05,0x07,0x07,0x06,0x00,
  0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0xF0,0x88,
  0x88,0xF0,0x80,0x80,0x80,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x88,0x88,0xA8,
  0x90,0x68,0x05,0x07,0x07,0x06,0x00,0x00,0xF0,0x88,0x88,0xF0,0xA0,0x90,0x88,0x05,
  0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x80,0x70,0x08,0x88,0x70,0x05,0x07,0x07,0x06,
  0x00,0x00,0xF8,0x20,0x20,0x20,0x20,0x20,0x20,0x05,0x07,0x07,0x06,0x00,0x00,0x88,
  0x88,0x88,0x88,0x88,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x88,0x88,0x88,
  0x50,0x50,0x20,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x88,0x88,0x88,0xA8,0xA8,0x50,
  0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x88,0x50,0x20,0x50,0x88,0x88,0x05,0x07,0x07,
  0x06,0x00,0x00,0x88,0x88,0x50,0x20,0x20,0x20,0x20,0x05,0x07,0x07,0x06,0x00,0x00,
  0xF8,0x08,0x10,0x20,0x40,0x80,0xF8,0x03,0x09,0x09,0x06,0x01,0xFF,0xE0,0x80,0x80,
  0x80,0x80,0x80,0x80,0x80,0xE0,0x05,0x07,0x07,0x06,0x00,0x00,0x80,0x40,0x40,0x20,
  0x10,0x10,0x08,0x03,0x09,0x09,0x06,0x01,0xFF,0xE0,0x20,0x20,0x20,0x20,0x20,0x20,
  0x20,0xE0,0x05,0x03,0x03,0x06,0x00,0x05,0x20,0x50,0x88,0x05,0x01,0x01,0x06,0x00,
  0xFE,0xF8,0x03,0x03,0x03,0x06,0x01,0x05,0x80,0x40,0x20,0x05,0x05,0x05,0x06,0x00,
  0x00,0x70,0x08,0x78,0x88,0x78,0x05,0x07,0x07,0x06,0x00,0x00,0x80,0x80,0xF0,0x88,
  0x88,0x88,0xF0,0x05,0x05,0x05,0x06,0x00,0x00,0x70,0x80,0x80,0x88,0x70,0x05,0x07,
  0x07,0x06,0x00,0x00,0x08,0x08,0x78,0x88,0x88,0x88,0x78,0x05,0x05,0x05,0x06,0x00,
  0x00,0x70,0x88,0xF0,0x80,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x30,0x48,0x40,0xE0,
  0x40,0x40,0x40,0x05,0x07,0x07,0x06,0x00,0xFE,0x70,0x88,0x88,0x88,0x78,0x08,0x70,
  0x05,0x07,0x07,0x06,0x00,0x00,0x80,0x80,0xF0,0x88,0x88,0x88,0x88,0x03,0x07,0x07,
  0x06,0x01,0x00,0x40,0x00,0xC0,0x40,0x40,0x40,0xE0,0x04,0x09,0x09,0x06,0x01,0xFE,
  0x10,0x00,0x30,0x10,0x10,0x10,0x10,0x90,0x60,0x05,0x07,0x07,0x06,0x00,0x00,0x80,
  0x80,0x88,0x90,0xE0,0x90,0x88,0x03,0x07,0x07,0x06,0x01,0x00,0xC0,0x40,0x40,0x40,
  0x40,0x40,0xE0,0x05,0x05,0x05,0x06,0x00,0x00,0xD0,0xA8,0xA8,0xA8,0xA8,0x05,0x05,
  0x05,0x06,0x00,0x00,0xB0,0xC8,0x88,0x88,0x88,0x05,0x05,0x05,0x06,0x00,0x00,0x70,
  0x88,0x88,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0xFE,0xF0,0x88,0x88,0x88,0xF0,0x80,
  0x80,0x05,0x07,0x07,0x06,0x00,0xFE,0x78,0x88,0x88,0x88,0x78,0x08,0x08,0x05,0x05,
  0x05,0x06,0x00,0x00,0xB0,0xC8,0x80,0x80,0x80,0x05,0x05,0x05,0x06,0x00,0x00,0x78,
  0x80,0x70,0x08,0xF0,0x05,0x07,0x07,0x06,0x00,0x00,0x20,0x20,0xF8,0x20,0x20,0x20,
  0x18,0x05,0x05,0x05,0x06,0x00,0x00,0x88,0x88,0x88,0x98,0x68,0x05,0x05,0x05,0x06,
  0x00,0x00,0x88,0x88,0x88,0x50,0x20,0x05,0x05,0x05,0x06,0x00,0x00,0x88,0x88,0xA8,
  0xA8,0x50,0x05,0x05,0x05,0x06,0x00,0x00,0x88,0x50,0x20,0x50,0x88,0x05,0x07,0x07,
  0x06,0x00,0xFE,0x88,0x88,0x88,0x50,0x20,0x40,0x80,0x05,0x05,0x05,0x06,0x00,0x00,
  0xF8,0x10,0x20,0x40,0xF8,0x03,0x09,0x09,0x06,0x01,0xFF,0x20,0x40,0x40,0x40,0x80,
  0x40,0x40,0x40,0x20,0x01,0x09,0x09,0x06,0x02,0xFF,0x80,0x80,0x80,0x80,0x80,0x80,
  0x80,0x80,0x80,0x03,0x09,0x09,0x06,0x01,0xFF,0x80,0x40,0x40,0x40,0x20,0x40,0x40,
  0x40,0x80,0x05,0x03,0x03,0x06,0x00,0x02,0x48,0xA8,0x90,0xFF};
#else
  // extended (original) font (symbols 1 - 255)

/*
  Fontname: -Marlin6x12-Fixed-Medium-R-SemiCondensed--12-90-100-100-C-111-ISO10646-1
  Copyright: Public domain terminal emulator font.  Share and enjoy. original font -Misc-Fixed-Medium-R-SemiCondensed--12-110-75-75-C-60-ISO10646-1
  Capital A Height: 7, '1' Height: 7
  Calculated Max Values w= 7 h=10 x= 5 y= 7 dx= 7 dy= 0 ascent=10 len=10
  Font Bounding box     w=12 h=15 x= 0 y=-2
  Calculated Min Values           x= 0 y=-2 dx= 0 dy= 0
  Pure Font   ascent = 7 descent=-2
  X Font      ascent = 8 descent=-2
  Max Font    ascent =10 descent=-2
*/
const u8g_fntpgm_uint8_t ISO10646_1_5x7[2647] U8G_FONT_SECTION("ISO10646_1_5x7") = {
  0x00,0x0C,0x0F,0x00,0xFE,0x07,0x02,0x25,0x03,0xBB,0x01,0xFF,0xFE,0x0A,0xFE,0x08,
  0xFE,0x05,0x08,0x08,0x06,0x00,0x00,0x40,0xF0,0xC8,0x88,0x88,0x98,0x78,0x10,0x05,
  0x08,0x08,0x06,0x00,0x00,0xC0,0xF8,0x88,0x88,0x88,0x88,0x88,0xF8,0x05,0x05,0x05,
  0x06,0x00,0x01,0x20,0x30,0xF8,0x30,0x20,0x05,0x08,0x08,0x06,0x00,0x00,0x20,0x70,
  0xF8,0x20,0x20,0x20,0x20,0xE0,0x05,0x09,0x09,0x06,0x00,0xFF,0x20,0x70,0xA8,0xA8,
  0xB8,0x88,0x88,0x70,0x20,0x07,0x05,0x05,0x07,0x00,0x01,0xD8,0x6C,0x36,0x6C,0xD8,
  0x05,0x09,0x09,0x06,0x00,0xFF,0xF8,0xA8,0x88,0x88,0x88,0x88,0x88,0xA8,0xF8,0x05,
  0x0A,0x0A,0x06,0x00,0xFE,0x20,0x50,0x50,0x50,0x50,0x88,0xA8,0xA8,0x88,0x70,0x03,
  0x03,0x03,0x06,0x00,0x03,0x40,0xA0,0x40,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
  0x00,0x06,0x05,0xFF,0x01,0x07,0x07,0x06,0x02,0x00,0x80,0x80,0x80,0x80,0x80,0x00,
  0x80,0x03,0x03,0x03,0x06,0x01,0x05,0xA0,0xA0,0xA0,0x05,0x06,0x06,0x06,0x00,0x00,
  0x50,0xF8,0x50,0x50,0xF8,0x50,0x05,0x09,0x09,0x06,0x00,0xFF,0x20,0x70,0xA8,0xA0,
  0x70,0x28,0xA8,0x70,0x20,0x05,0x07,0x07,0x06,0x00,0x00,0xC8,0xC8,0x10,0x20,0x40,
  0x98,0x98,0x05,0x07,0x07,0x06,0x00,0x00,0x40,0xA0,0xA0,0x40,0xA8,0x90,0x68,0x01,
  0x03,0x03,0x06,0x02,0x05,0x80,0x80,0x80,0x03,0x09,0x09,0x06,0x01,0xFF,0x20,0x40,
  0x40,0x80,0x80,0x80,0x40,0x40,0x20,0x03,0x09,0x09,0x06,0x01,0xFF,0x80,0x40,0x40,
  0x20,0x20,0x20,0x40,0x40,0x80,0x05,0x07,0x07,0x06,0x00,0x00,0x20,0xA8,0x70,0x20,
  0x70,0xA8,0x20,0x05,0x05,0x05,0x06,0x00,0x01,0x20,0x20,0xF8,0x20,0x20,0x02,0x03,
  0x03,0x06,0x01,0xFF,0xC0,0x40,0x80,0x05,0x01,0x01,0x06,0x00,0x03,0xF8,0x02,0x02,
  0x02,0x06,0x01,0x00,0xC0,0xC0,0x05,0x07,0x07,0x06,0x00,0x00,0x08,0x10,0x10,0x20,
  0x40,0x40,0x80,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x98,0xA8,0xC8,0x88,0x70,
  0x03,0x07,0x07,0x06,0x01,0x00,0x40,0xC0,0x40,0x40,0x40,0x40,0xE0,0x05,0x07,0x07,
  0x06,0x00,0x00,0x70,0x88,0x08,0x10,0x20,0x40,0xF8,0x05,0x07,0x07,0x06,0x00,0x00,
  0xF8,0x08,0x10,0x30,0x08,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x10,0x30,0x50,
  0x90,0xF8,0x10,0x10,0x05,0x07,0x07,0x06,0x00,0x00,0xF8,0x80,0xF0,0x08,0x08,0x88,
  0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x30,0x40,0x80,0xF0,0x88,0x88,0x70,0x05,0x07,
  0x07,0x06,0x00,0x00,0xF8,0x08,0x10,0x10,0x20,0x20,0x20,0x05,0x07,0x07,0x06,0x00,
  0x00,0x70,0x88,0x88,0x70,0x88,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,
  0x88,0x78,0x08,0x10,0x60,0x02,0x05,0x05,0x06,0x01,0x00,0xC0,0xC0,0x00,0xC0,0xC0,
  0x02,0x06,0x06,0x06,0x01,0xFF,0xC0,0xC0,0x00,0xC0,0x40,0x80,0x03,0x05,0x05,0x06,
  0x01,0x01,0x20,0x40,0x80,0x40,0x20,0x05,0x03,0x03,0x06,0x00,0x02,0xF8,0x00,0xF8,
  0x03,0x05,0x05,0x06,0x01,0x01,0x80,0x40,0x20,0x40,0x80,0x05,0x07,0x07,0x06,0x00,
  0x00,0x70,0x88,0x10,0x20,0x20,0x00,0x20,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,
  0xB8,0xA8,0xB8,0x80,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x88,0xF8,0x88,
  0x88,0x88,0x05,0x07,0x07,0x06,0x00,0x00,0xF0,0x48,0x48,0x70,0x48,0x48,0xF0,0x05,
  0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x80,0x80,0x80,0x88,0x70,0x05,0x07,0x07,0x06,
  0x00,0x00,0xF0,0x48,0x48,0x48,0x48,0x48,0xF0,0x05,0x07,0x07,0x06,0x00,0x00,0xF8,
  0x80,0x80,0xF0,0x80,0x80,0xF8,0x05,0x07,0x07,0x06,0x00,0x00,0xF8,0x80,0x80,0xF0,
  0x80,0x80,0x80,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x80,0x80,0x98,0x88,0x70,
  0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x88,0x88,0xF8,0x88,0x88,0x88,0x03,0x07,0x07,
  0x06,0x01,0x00,0xE0,0x40,0x40,0x40,0x40,0x40,0xE0,0x05,0x07,0x07,0x06,0x00,0x00,
  0x38,0x10,0x10,0x10,0x10,0x90,0x60,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x90,0xA0,
  0xC0,0xA0,0x90,0x88,0x05,0x07,0x07,0x06,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,
  0xF8,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0xD8,0xA8,0x88,0x88,0x88,0x88,0x05,0x07,
  0x07,0x06,0x00,0x00,0x88,0x88,0xC8,0xA8,0x98,0x88,0x88,0x05,0x07,0x07,0x06,0x00,
  0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0xF0,0x88,
  0x88,0xF0,0x80,0x80,0x80,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x88,0x88,0xA8,
  0x90,0x68,0x05,0x07,0x07,0x06,0x00,0x00,0xF0,0x88,0x88,0xF0,0xA0,0x90,0x88,0x05,
  0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x80,0x70,0x08,0x88,0x70,0x05,0x07,0x07,0x06,
  0x00,0x00,0xF8,0x20,0x20,0x20,0x20,0x20,0x20,0x05,0x07,0x07,0x06,0x00,0x00,0x88,
  0x88,0x88,0x88,0x88,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x88,0x88,0x88,
  0x50,0x50,0x20,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x88,0x88,0x88,0xA8,0xA8,0x50,
  0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x88,0x50,0x20,0x50,0x88,0x88,0x05,0x07,0x07,
  0x06,0x00,0x00,0x88,0x88,0x50,0x20,0x20,0x20,0x20,0x05,0x07,0x07,0x06,0x00,0x00,
  0xF8,0x08,0x10,0x20,0x40,0x80,0xF8,0x03,0x09,0x09,0x06,0x01,0xFF,0xE0,0x80,0x80,
  0x80,0x80,0x80,0x80,0x80,0xE0,0x05,0x07,0x07,0x06,0x00,0x00,0x80,0x40,0x40,0x20,
  0x10,0x10,0x08,0x03,0x09,0x09,0x06,0x01,0xFF,0xE0,0x20,0x20,0x20,0x20,0x20,0x20,
  0x20,0xE0,0x05,0x03,0x03,0x06,0x00,0x05,0x20,0x50,0x88,0x05,0x01,0x01,0x06,0x00,
  0xFE,0xF8,0x03,0x03,0x03,0x06,0x01,0x05,0x80,0x40,0x20,0x05,0x05,0x05,0x06,0x00,
  0x00,0x70,0x08,0x78,0x88,0x78,0x05,0x07,0x07,0x06,0x00,0x00,0x80,0x80,0xF0,0x88,
  0x88,0x88,0xF0,0x05,0x05,0x05,0x06,0x00,0x00,0x70,0x80,0x80,0x88,0x70,0x05,0x07,
  0x07,0x06,0x00,0x00,0x08,0x08,0x78,0x88,0x88,0x88,0x78,0x05,0x05,0x05,0x06,0x00,
  0x00,0x70,0x88,0xF0,0x80,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x30,0x48,0x40,0xE0,
  0x40,0x40,0x40,0x05,0x07,0x07,0x06,0x00,0xFE,0x70,0x88,0x88,0x88,0x78,0x08,0x70,
  0x05,0x07,0x07,0x06,0x00,0x00,0x80,0x80,0xF0,0x88,0x88,0x88,0x88,0x03,0x07,0x07,
  0x06,0x01,0x00,0x40,0x00,0xC0,0x40,0x40,0x40,0xE0,0x04,0x09,0x09,0x06,0x01,0xFE,
  0x10,0x00,0x30,0x10,0x10,0x10,0x10,0x90,0x60,0x05,0x07,0x07,0x06,0x00,0x00,0x80,
  0x80,0x88,0x90,0xE0,0x90,0x88,0x03,0x07,0x07,0x06,0x01,0x00,0xC0,0x40,0x40,0x40,
  0x40,0x40,0xE0,0x05,0x05,0x05,0x06,0x00,0x00,0xD0,0xA8,0xA8,0xA8,0xA8,0x05,0x05,
  0x05,0x06,0x00,0x00,0xB0,0xC8,0x88,0x88,0x88,0x05,0x05,0x05,0x06,0x00,0x00,0x70,
  0x88,0x88,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0xFE,0xF0,0x88,0x88,0x88,0xF0,0x80,
  0x80,0x05,0x07,0x07,0x06,0x00,0xFE,0x78,0x88,0x88,0x88,0x78,0x08,0x08,0x05,0x05,
  0x05,0x06,0x00,0x00,0xB0,0xC8,0x80,0x80,0x80,0x05,0x05,0x05,0x06,0x00,0x00,0x78,
  0x80,0x70,0x08,0xF0,0x05,0x07,0x07,0x06,0x00,0x00,0x20,0x20,0xF8,0x20,0x20,0x20,
  0x18,0x05,0x05,0x05,0x06,0x00,0x00,0x88,0x88,0x88,0x98,0x68,0x05,0x05,0x05,0x06,
  0x00,0x00,0x88,0x88,0x88,0x50,0x20,0x05,0x05,0x05,0x06,0x00,0x00,0x88,0x88,0xA8,
  0xA8,0x50,0x05,0x05,0x05,0x06,0x00,0x00,0x88,0x50,0x20,0x50,0x88,0x05,0x07,0x07,
  0x06,0x00,0xFE,0x88,0x88,0x88,0x50,0x20,0x40,0x80,0x05,0x05,0x05,0x06,0x00,0x00,
  0xF8,0x10,0x20,0x40,0xF8,0x03,0x09,0x09,0x06,0x01,0xFF,0x20,0x40,0x40,0x40,0x80,
  0x40,0x40,0x40,0x20,0x01,0x09,0x09,0x06,0x02,0xFF,0x80,0x80,0x80,0x80,0x80,0x80,
  0x80,0x80,0x80,0x03,0x09,0x09,0x06,0x01,0xFF,0x80,0x40,0x40,0x40,0x20,0x40,0x40,
  0x40,0x80,0x05,0x03,0x03,0x06,0x00,0x02,0x48,0xA8,0x90,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x06,
  0x05,0xFF,0x01,0x07,0x07,0x06,0x02,0x00,0x80,0x00,0x80,0x80,0x80,0x80,0x80,0x05,
  0x07,0x07,0x06,0x00,0xFF,0x20,0x70,0xA8,0xA0,0xA8,0x70,0x20,0x05,0x07,0x07,0x06,
  0x00,0x00,0x30,0x48,0x40,0xE0,0x40,0x48,0xB0,0x05,0x05,0x05,0x06,0x00,0x00,0xA8,
  0x50,0x88,0x50,0xA8,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x50,0xF8,0x20,0xF8,0x20,
  0x20,0x01,0x07,0x07,0x06,0x02,0x00,0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x04,0x08,
  0x08,0x06,0x01,0x00,0x70,0x80,0x60,0x90,0x90,0x60,0x10,0xE0,0x03,0x01,0x01,0x06,
  0x01,0x07,0xA0,0x06,0x07,0x07,0x06,0x00,0x00,0x78,0x84,0xB4,0xA4,0xB4,0x84,0x78,
  0x03,0x05,0x05,0x06,0x01,0x04,0x60,0xA0,0x60,0x00,0xE0,0x05,0x05,0x05,0x06,0x00,
  0x00,0x28,0x50,0xA0,0x50,0x28,0x05,0x03,0x03,0x06,0x00,0x01,0xF8,0x08,0x08,0x03,
  0x01,0x01,0x06,0x01,0x03,0xE0,0x06,0x07,0x07,0x06,0x00,0x00,0x78,0x84,0xB4,0xA4,
  0xA4,0x84,0x78,0x05,0x01,0x01,0x06,0x00,0x07,0xF8,0x04,0x04,0x04,0x06,0x01,0x05,
  0x60,0x90,0x90,0x60,0x05,0x07,0x07,0x06,0x00,0x00,0x20,0x20,0xF8,0x20,0x20,0x00,
  0xF8,0x03,0x05,0x05,0x06,0x01,0x04,0x40,0xA0,0x20,0x40,0xE0,0x03,0x05,0x05,0x06,
  0x01,0x04,0xC0,0x20,0x40,0x20,0xC0,0x03,0x03,0x03,0x06,0x01,0x05,0x20,0x40,0x80,
  0x05,0x07,0x07,0x06,0x00,0xFE,0x88,0x88,0x88,0x98,0xE8,0x80,0x80,0x05,0x08,0x08,
  0x06,0x00,0x00,0x78,0xE8,0xE8,0xE8,0x68,0x28,0x28,0x28,0x02,0x02,0x02,0x06,0x02,
  0x03,0xC0,0xC0,0x03,0x02,0x02,0x06,0x01,0xFE,0x20,0xC0,0x03,0x05,0x05,0x06,0x01,
  0x04,0x40,0xC0,0x40,0x40,0xE0,0x03,0x05,0x05,0x06,0x01,0x05,0x40,0xA0,0x40,0x00,
  0xE0,0x05,0x05,0x05,0x06,0x00,0x00,0xA0,0x50,0x28,0x50,0xA0,0x05,0x0A,0x0A,0x06,
  0x00,0x00,0x40,0xC0,0x48,0x50,0x60,0x50,0xB0,0x50,0x78,0x10,0x05,0x0A,0x0A,0x06,
  0x00,0x00,0x40,0xC0,0x48,0x50,0x60,0x50,0xA8,0x08,0x10,0x38,0x05,0x0A,0x0A,0x06,
  0x00,0x00,0xC0,0x20,0x48,0x30,0xE0,0x50,0xB0,0x50,0x78,0x10,0x05,0x07,0x07,0x06,
  0x00,0x00,0x20,0x00,0x20,0x20,0x40,0x88,0x70,0x05,0x0A,0x0A,0x06,0x00,0x00,0x40,
  0x20,0x00,0x70,0x88,0x88,0xF8,0x88,0x88,0x88,0x05,0x0A,0x0A,0x06,0x00,0x00,0x10,
  0x20,0x00,0x70,0x88,0x88,0xF8,0x88,0x88,0x88,0x05,0x0A,0x0A,0x06,0x00,0x00,0x20,
  0x50,0x00,0x70,0x88,0x88,0xF8,0x88,0x88,0x88,0x05,0x0A,0x0A,0x06,0x00,0x00,0x68,
  0xB0,0x00,0x70,0x88,0x88,0xF8,0x88,0x88,0x88,0x05,0x09,0x09,0x06,0x00,0x00,0x50,
  0x00,0x70,0x88,0x88,0xF8,0x88,0x88,0x88,0x05,0x0A,0x0A,0x06,0x00,0x00,0x20,0x50,
  0x20,0x70,0x88,0x88,0xF8,0x88,0x88,0x88,0x05,0x07,0x07,0x06,0x00,0x00,0x78,0xA0,
  0xA0,0xF0,0xA0,0xA0,0xB8,0x05,0x09,0x09,0x06,0x00,0xFE,0x70,0x88,0x80,0x80,0x80,
  0x88,0x70,0x10,0x60,0x05,0x0A,0x0A,0x06,0x00,0x00,0x40,0x20,0x00,0xF8,0x80,0x80,
  0xF0,0x80,0x80,0xF8,0x05,0x0A,0x0A,0x06,0x00,0x00,0x10,0x20,0x00,0xF8,0x80,0x80,
  0xF0,0x80,0x80,0xF8,0x05,0x0A,0x0A,0x06,0x00,0x00,0x20,0x50,0x00,0xF8,0x80,0x80,
  0xF0,0x80,0x80,0xF8,0x05,0x09,0x09,0x06,0x00,0x00,0x50,0x00,0xF8,0x80,0x80,0xF0,
  0x80,0x80,0xF8,0x03,0x0A,0x0A,0x06,0x01,0x00,0x80,0x40,0x00,0xE0,0x40,0x40,0x40,
  0x40,0x40,0xE0,0x03,0x0A,0x0A,0x06,0x01,0x00,0x20,0x40,0x00,0xE0,0x40,0x40,0x40,
  0x40,0x40,0xE0,0x03,0x0A,0x0A,0x06,0x01,0x00,0x40,0xA0,0x00,0xE0,0x40,0x40,0x40,
  0x40,0x40,0xE0,0x03,0x09,0x09,0x06,0x01,0x00,0xA0,0x00,0xE0,0x40,0x40,0x40,0x40,
  0x40,0xE0,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x48,0x48,0xE8,0x48,0x48,0x70,0x05,
  0x0A,0x0A,0x06,0x00,0x00,0x68,0xB0,0x00,0x88,0x88,0xC8,0xA8,0x98,0x88,0x88,0x05,
  0x0A,0x0A,0x06,0x00,0x00,0x40,0x20,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x70,0x05,
  0x0A,0x0A,0x06,0x00,0x00,0x10,0x20,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x70,0x05,
  0x0A,0x0A,0x06,0x00,0x00,0x20,0x50,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x70,0x05,
  0x0A,0x0A,0x06,0x00,0x00,0x68,0xB0,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x70,0x05,
  0x09,0x09,0x06,0x00,0x00,0x50,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x70,0x05,0x05,
  0x05,0x06,0x00,0x01,0x88,0x50,0x20,0x50,0x88,0x05,0x09,0x09,0x06,0x00,0xFF,0x08,
  0x70,0x98,0xA8,0xA8,0xA8,0xC8,0x70,0x80,0x05,0x0A,0x0A,0x06,0x00,0x00,0x40,0x20,
  0x00,0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x05,0x0A,0x0A,0x06,0x00,0x00,0x10,0x20,
  0x00,0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x05,0x0A,0x0A,0x06,0x00,0x00,0x20,0x50,
  0x00,0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x05,0x09,0x09,0x06,0x00,0x00,0x50,0x00,
  0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x05,0x0A,0x0A,0x06,0x00,0x00,0x10,0x20,0x00,
  0x88,0x88,0x50,0x20,0x20,0x20,0x20,0x04,0x07,0x07,0x06,0x01,0x00,0x80,0xE0,0x90,
  0x90,0x90,0xE0,0x80,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x90,0xA0,0x90,0x88,
  0xB0,0x05,0x08,0x08,0x06,0x00,0x00,0x40,0x20,0x00,0x70,0x08,0x78,0x88,0x78,0x05,
  0x08,0x08,0x06,0x00,0x00,0x10,0x20,0x00,0x70,0x08,0x78,0x88,0x78,0x05,0x08,0x08,
  0x06,0x00,0x00,0x20,0x50,0x00,0x70,0x08,0x78,0x88,0x78,0x05,0x08,0x08,0x06,0x00,
  0x00,0x68,0xB0,0x00,0x70,0x08,0x78,0x88,0x78,0x05,0x07,0x07,0x06,0x00,0x00,0x50,
  0x00,0x70,0x08,0x78,0x88,0x78,0x05,0x08,0x08,0x06,0x00,0x00,0x20,0x50,0x20,0x70,
  0x08,0x78,0x88,0x78,0x05,0x05,0x05,0x06,0x00,0x00,0x70,0x28,0x70,0xA0,0x78,0x05,
  0x07,0x07,0x06,0x00,0xFE,0x70,0x88,0x80,0x88,0x70,0x10,0x60,0x05,0x08,0x08,0x06,
  0x00,0x00,0x40,0x20,0x00,0x70,0x88,0xF0,0x80,0x70,0x05,0x08,0x08,0x06,0x00,0x00,
  0x10,0x20,0x00,0x70,0x88,0xF0,0x80,0x70,0x05,0x08,0x08,0x06,0x00,0x00,0x20,0x50,
  0x00,0x70,0x88,0xF0,0x80,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x50,0x00,0x70,0x88,
  0xF0,0x80,0x70,0x03,0x08,0x08,0x06,0x01,0x00,0x80,0x40,0x00,0xC0,0x40,0x40,0x40,
  0xE0,0x03,0x08,0x08,0x06,0x01,0x00,0x20,0x40,0x00,0xC0,0x40,0x40,0x40,0xE0,0x03,
  0x08,0x08,0x06,0x01,0x00,0x40,0xA0,0x00,0xC0,0x40,0x40,0x40,0xE0,0x03,0x07,0x07,
  0x06,0x01,0x00,0xA0,0x00,0xC0,0x40,0x40,0x40,0xE0,0x05,0x09,0x09,0x06,0x00,0x00,
  0x50,0x20,0x50,0x08,0x78,0x88,0x88,0x88,0x70,0x05,0x08,0x08,0x06,0x00,0x00,0x68,
  0xB0,0x00,0xB0,0xC8,0x88,0x88,0x88,0x05,0x08,0x08,0x06,0x00,0x00,0x40,0x20,0x00,
  0x70,0x88,0x88,0x88,0x70,0x05,0x08,0x08,0x06,0x00,0x00,0x10,0x20,0x00,0x70,0x88,
  0x88,0x88,0x70,0x05,0x08,0x08,0x06,0x00,0x00,0x20,0x50,0x00,0x70,0x88,0x88,0x88,
  0x70,0x05,0x08,0x08,0x06,0x00,0x00,0x68,0xB0,0x00,0x70,0x88,0x88,0x88,0x70,0x05,
  0x07,0x07,0x06,0x00,0x00,0x50,0x00,0x70,0x88,0x88,0x88,0x70,0x05,0x05,0x05,0x06,
  0x00,0x01,0x20,0x00,0xF8,0x00,0x20,0x05,0x05,0x05,0x06,0x00,0x00,0x78,0x98,0xA8,
  0xC8,0xF0,0x05,0x08,0x08,0x06,0x00,0x00,0x40,0x20,0x00,0x88,0x88,0x88,0x88,0x70,
  0x05,0x08,0x08,0x06,0x00,0x00,0x10,0x20,0x00,0x88,0x88,0x88,0x88,0x70,0x05,0x08,
  0x08,0x06,0x00,0x00,0x20,0x50,0x00,0x88,0x88,0x88,0x88,0x70,0x05,0x07,0x07,0x06,
  0x00,0x00,0x50,0x00,0x88,0x88,0x88,0x88,0x70,0x05,0x0A,0x0A,0x06,0x00,0xFE,0x10,
  0x20,0x00,0x88,0x88,0x88,0x50,0x20,0x40,0x80,0x05,0x09,0x09,0x06,0x00,0xFE,0x80,
  0x80,0xF0,0x88,0x88,0x88,0xF0,0x80,0x80,0x05,0x09,0x09,0x06,0x00,0xFE,0x50,0x00,
  0x88,0x88,0x88,0x50,0x20,0x40,0x80};

#endif
