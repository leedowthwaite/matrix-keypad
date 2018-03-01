/*
 * keypad_io.h
 * The definitions for the keypad I/O pins

  Copyright (c) 2018 Lee Dowthwaite
  
  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:
  
  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.
  
  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
*/

#ifndef __Keypad_io_h
#define __Keypad_io_h

// Configure the columns
// Columns are connected to PORTB, 3 lines from PB0..PB2 (labelled D8..D10 on Nano)

// the port to use for columns
#define COL_PORT PORTB
#define COL_DDR DDRB
// the column bitmask
#define COL_MASK (0x7)
// The bit in PORTD corresponding to column 0.
// Must be the lowest bit in the mask
#define COL0_BIT (0)

// Configure the rows
// Rows are connected to PORTC, 4 lines from PC0..PC3 (labelled A0..A3 on Nano)

// the row port definitions
#define ROW_PORT  PORTC
#define ROW_DDR   DDRC
#define ROW_PIN   PINC

// the row mask
#define ROW_MASK  (0x0f)
#define ROW0_BIT  (0)

#endif // __Keypad_io_h

