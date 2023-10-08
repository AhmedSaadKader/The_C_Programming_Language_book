#include <stdio.h>

void squeeze(char s1[], const char s2[])
{
  int i, j, k;
  int shouldDelete;

  for (i = j = 0; s1[i] != '\0'; i++)
    {
      shouldDelete = 0; // Initialize to false
      
      for (k = 0; s2[k] != '\0'; k++)
	{
	  if (s1[i] == s2[k])
	    {
	      shouldDelete = 1;
	      break;
	    }
	}

      if (!shouldDelete) {
	s1[j++] = s1[i];
      }
    }

  s1[j] = '\0';
}

int main(void)
{
  char s1[] = "hello";

  const char s2[] = "aeiou";
  
  squeeze(s1, s2);

  printf("%s\n", s1);


  return (0);
}
  
