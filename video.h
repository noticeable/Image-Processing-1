/*
 *
 *  This module processes video frames to identify blobs of a given colour, red
 *  locate them and find the blobs forming a cross. The cross identified is used
 *  to determine how high and how far off the quadrotor is from the landing guidance
 *  system.
 *
 */

#ifndef VIDEO_H_
#define VIDEO_H_

/*
 * this function filters all the other colors except variations of red
 *
 * processedPixels : stores the processed pixels.
 *
 */
void filter(unsigned char *pixels, unsigned char *processedPixels, int numPixels);


#endif /* VIDEO_H_ */

