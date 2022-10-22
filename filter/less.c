 #include "helpers.h"
#include <math.h>
// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    double avr;
    for(int i=0 ; i<height ; i++)
    {
        for(int j=0 ; j<width ; j++)
        {
            avr = ( image[i][j].rgbtBlue + image[i][j].rgbtRed + image[i][j].rgbtGreen ) / 3.0 ;
            image[i][j].rgbtBlue = image[i][j].rgbtGreen =image[i][j].rgbtRed = round(avr);
        }
    }
    return;
}
// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    double avrb , avrg , avrr;
    for(int i=0 ; i<height ; i++)
    {
        for(int j=0 ; j<width ; j++)
        {
            //FOR RED
            avrr = .393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue;
            //FOR GREEN
            avrg = .349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue;
            //FOR BLUE
            avrb = .272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue;
            //FOR BLUE
            if( avrb > 255)
            {
                avrb = 255;
                image[i][j].rgbtBlue = round(avrb);
            }
            else
            {
                image[i][j].rgbtBlue = round(avrb);
            }
            //FOR RED
            if( avrr > 255)
            {
                avrr = 255;
                image[i][j].rgbtRed = round(avrr);
            }
            else
            {
                image[i][j].rgbtRed = round(avrr);
            }
            //FOR GEEN
            if( avrg > 255)
            {
                avrg = 255;
                image[i][j].rgbtGreen = round(avrg);
            }
            else
            {
                image[i][j].rgbtGreen = round(avrg);
            }
        }
    }
    return;
}
// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp;
    for(int i=0 ; i<height ; i++)
    {
        for(int j=0 ; j<width/2 ; j++)
        {
            temp = image[i][j];
            image[i][j] = image[i][width - (j + 1)] ;
            image[i][width - (j + 1)]  = temp;
        }
    }
    return;
}
// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];
    for(int i=0 ; i<height ; i++)
    {
        for(int j=0 ; j<width ; j++)
        {
            temp[i][j] = image[i][j];
        }
    }
    for(int i=0 ; i<height ; i++)
    {
        for(int j=0 ; j<width ; j++)
        {
            float redsum = 0;
            float bluesum = 0;
            float greensum = 0;
            float counter = 0;
            
            for(int k = -1 ; k<2 ; k++)
            {
                for(int l = -1 ; l<2 ; l++)
                {
                    if(k+i < 0 || k+i > height)
                    if(k+i < 0 || k+i >= height)
                    {
                        continue;
                    }
                    if(l+j < 0 || l+j > width)
                    if(l+j < 0 || l+j >= width)
                    {
                        continue;
                    }
                    redsum += temp[i+k][j+l].rgbtRed;
                    bluesum += temp[i+k][j+l].rgbtBlue;
                    greensum += temp[i+k][j+l].rgbtGreen;
                    counter++;
                    
                }
            }
            image[i][j].rgbtGreen = round(greensum / counter);
            image[i][j].rgbtRed = round(redsum / counter);
            image[i][j].rgbtBlue = round(bluesum / counter);
            
        }
    }
    return;
}
