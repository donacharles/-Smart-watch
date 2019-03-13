



Conversation opened. 1 read message.







Skip to content
Using Gmail with screen readers


Search







Enable desktop notifications for Gmail.
   OK  No thanks


Compose
Labels

Inbox
16


Starred


Snoozed


Sent


Drafts
18

More
 

Hangouts


 
 








More
2 of 180







 
 
smart watch
Inbox
x




Abhiram Pai 

10:21 PM (1 hour ago)



to Aashna, me 








-- 
Yours Faithfully,

ABHIRAM PAI 
abhirampai1999@gmail.com

 



15 Attachments

 


 




Reply
Reply all
Forward

























// Font structures for newer Adafruit_GFX (1.1 and later).
// Example fonts are included in 'Fonts' directory.
// To use a font in your Arduino sketch, #include the corresponding .h
// file and pass address of GFXfont struct to setFont().  Pass NULL to
// revert to 'classic' fixed-space bitmap font.

#ifndef _GFXFONT_H_
#define _GFXFONT_H_

typedef struct { // Data stored PER GLYPH
	uint16_t bitmapOffset;     // Pointer into GFXfont->bitmap
	uint8_t  width, height;    // Bitmap dimensions in pixels
	uint8_t  xAdvance;         // Distance to advance cursor (x axis)
	int8_t   xOffset, yOffset; // Dist from cursor pos to UL corner
} GFXglyph;

typedef struct { // Data stored for FONT AS A WHOLE:
	uint8_t  *bitmap;      // Glyph bitmaps, concatenated
	GFXglyph *glyph;       // Glyph array
	uint8_t   first, last; // ASCII extents
	uint8_t   yAdvance;    // Newline distance (y axis)
} GFXfont;

#endif // _GFXFONT_H_


gfxfont.h

Open with Drive Notepad






Displaying README.md.