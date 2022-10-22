#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef uint8_t BYTE;
int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("two command line argument needed");
        return 1;
        
    }
    char* fileadd = argv[1];
    FILE *file = fopen(fileadd, "r");
    
    if(file == NULL)
    {
        return 2;
    }
    BYTE buffer[512];
    int counter = 0;
    FILE *JPEG = NULL ;
    char name[8];


    while(fread( &buffer , 512 , 1 , file)==1)
    while(fread(&buffer, 512, 1, file)==1)
    {
        if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) ==0xe0 )
        {
            if (!(counter == 0))
            {
                fclose(JPEG);
            }
            sprintf( name, "%03i.jpg", counter);
            sprintf(name, "%03i.jpg", counter);
            JPEG = fopen(name, "w");
            counter++;

        }

        if (!(counter == 0))
        {
            fwrite( &buffer , 512 , 1 , JPEG);
            fwrite(&buffer, 512, 1 ,JPEG);
        }


    }
    fclose(file);   
    fclose(JPEG);
}
