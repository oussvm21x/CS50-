
@@ -1,7 +1,8 @@
#include <stdio.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name: ");
    printf("hello,%s\n",name);
   string name = get_string("enter your name: ");
   printf("hello ,%s\n",name);
}
