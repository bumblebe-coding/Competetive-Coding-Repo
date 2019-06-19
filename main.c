#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
       int t,i,j,len_s,len_w,p;
       scanf("%d",&t);
       char s[50],w[50],c;
       for(i=0;i<t;i++)
       {
              scanf("%s",s);
              len_s = strlen(s);
              strcpy(w,s);
              j = len_s-1;
              while(s[j]<=s[j-1] && j>0)
              {
                     j--;
              }
              //if the string is sorted in reverse order then it can't be changed
              if(j<=0)
              {
                     printf("no answer\n");
                     continue;
              }
              len_w = len_s-1;
              while(s[j-1]>=s[len_w])
              {
                     len_w--;
              }
              c = w[len_w];
              w[len_w] = w[j-1];
              w[j-1] = c;

              len_w = len_s-1;
              while(j<len_w)
              {
                     c = w[len_w];
                     w[len_w] = w[j];
                     w[j] = c;
                     j++;
                     len_w--;
              }
              printf("%s\n",w);
       }
    return 0;
}

