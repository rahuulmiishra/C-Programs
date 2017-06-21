#include<stdio.h>
int getLength(char str[6]);
int main()
{
	char str[10] = "mayank";

	int len = getLength(str);
    int last = len-1;

    for(int i=0;i<len/2;i++)
    {
        char temp[1];
        temp[0] =  str[i];
        str[i] = str[last];
        str[last] = temp[0];
        last--;
    }

    printf("%s\n",str);


}

int getLength(char str[6])
{
   int length=0;
      while(str[length] != '\0')
      {
           length++;
      }
   return length;
}