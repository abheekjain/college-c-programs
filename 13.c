#include<stdio.h>
void main()
{
float byte  = 1342.23;
float kb = byte/1024;
float mb = kb/1024;
float gb = mb/1024;
printf("Byte = %.2f\nKb = %f\nMb = %f\nGb = %f",byte,kb,mb,gb);
}

