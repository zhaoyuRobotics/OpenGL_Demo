/*
 * ---------------- www.spacesimulator.net --------------
 *   ---- Space simulators and 3d engine tutorials ----
 *
 * Author: Damiano Vitulli
 *
 * This program is released under the BSD licence
 * By using this program you agree to licence terms on spacesimulator.net copyright page
 *
 *
 * Tutorial 3: 3d engine - Texture mapping with OpenGL!
 *
 * File header: texture.h
 *
 */

/*
Linux port by Panteleakis Ioannis
mail: pioann@csd.auth.gr

just run: make and you are done.
of course you may need to change the makefile
*/


/**********************************************************
 *
 * VARIABLES DECLARATION
 *
 *********************************************************/

/*** Counter to keep track of the last loaded texture ***/
extern int num_texture;


/**********************************************************
 *
 * FUNCTION LoadBitmap(char *)
 *
 * This function loads a bitmap file and return the OpenGL reference ID to use that texture
 *
 *********************************************************/

extern int LoadBitmap(char *filename);

typedef struct                       /**** BMP file info structure ****/
    {
    unsigned int   biSize;           /* Size of info header */
    int            biWidth;          /* Width of image */
    int            biHeight;         /* Height of image */
    unsigned short biPlanes;         /* Number of color planes 彩色平面数 */
    unsigned short biBitCount;       /* Number of bits per pixel 每个像素位数 */
    unsigned int   biCompression;    /* Type of compression to use 使用的压缩类型 */
    unsigned int   biSizeImage;      /* Size of image data */
    int            biXPelsPerMeter;  /* X pixels per meter 每米X轴像素 */
    int            biYPelsPerMeter;  /* Y pixels per meter 每米Y轴像素 */
    unsigned int   biClrUsed;        /* Number of colors used 使用的颜色数 */
    unsigned int   biClrImportant;   /* Number of important colors 重要颜色数*/
    char *data;
    } BITMAPINFOHEADER;
