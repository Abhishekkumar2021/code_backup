#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct members
{

  int sr_no;
  int r_no;
  char *c;
  char name[100];
  char course_id[6];
  char course_name[100];
};

int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n;
  char delim;
  scanf(" %d", &n);

  scanf(" %c", &delim);

  char *x = (char *)malloc(sizeof(char) * 10);
  scanf(" %[^\n]s", x);

  int *fields = (int *)malloc(sizeof(int) * 10);
  int field_length = 0;

  int i, j;
  for (i = 0; i < 10; i++)
  {
    if (x[i] == '\0')
      break;
    if (x[i] == ' ')
      continue;
    fields[field_length++] = x[i] - 48;
  }
  free(x);

  struct members member[n];
  for (i = 0; i < n; i++)
  {

    member[i].c = (char *)malloc(sizeof(char) * 200);
    scanf(" %[^\n]s", member[i].c);

    char details[200];
    for (j = 0; j < 200; j++)
    {
      if (member[i].c[j] == '\0')
      {
        details[j] = '\0';
        break;
      }
      details[j] = member[i].c[j];
    }

    char delim_str[10];
    delim_str[0] = delim;
    delim_str[1] = '\0';

    char *ptr = strtok(details, delim_str);
    member[i].sr_no = atoi(ptr);

    ptr = strtok(NULL, delim_str);
    member[i].r_no = atoi(ptr);

    ptr = strtok(NULL, delim_str);
    for (j = 0; j < 100; ++j)
    {
      if (ptr[j] == '\0')
      {
        member[i].name[j] = '\0';
        break;
      }
      member[i].name[j] = ptr[j];
    }

    ptr = strtok(NULL, delim_str);
    for (j = 0; j < 6; ++j)
    {
      if (ptr[j] == '\0')
      {
        member[i].course_id[j] = '\0';
        break;
      }
      member[i].course_id[j] = ptr[j];
    }

    ptr = strtok(NULL, delim_str);
    for (j = 0; j < 100; ++j)
    {
      if (ptr[j] == '\0')
      {
        member[i].course_name[j] = '\0';
        break;
      }
      member[i].course_name[j] = ptr[j];
    }
  }

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < field_length; ++j)
    {
      if (fields[j] == 1 && fields[j] == 2)
      {
        printf("%s ,", member[i].course_name);
        printf("%s ,", member[i].course_id);
        printf("%s ", member[i].name);
      }

      if (fields[j] == 1 && fields[j + 1] == 3)
      {
        printf("%s ,", member[i].course_name);
        printf("%s ,", member[i].course_id);
        printf("%d ", member[i].r_no);
      }

      if (fields[j] == 1 && fields[j + 1] == 4)
      {
        printf("%s ,", member[i].course_name);
        printf("%s ,", member[i].name);
        printf("%d", member[i].r_no);
      }

      if (fields[j] == 1 && fields[j + 1] == 5)
      {
        printf("%s ,", member[i].course_id);
        printf("%s ,", member[i].name);
        printf("%d", member[i].r_no);
      }
      if (fields[j] == 2 && fields[j + 1] == 3)
      {
        printf("%s ,", member[i].course_name);
        printf("%s ,", member[i].course_id);
        printf("%d", member[i].sr_no);
      }
      if (fields[j] == 2 && fields[j + 1] == 4)
      {
        printf("%s ,", member[i].course_name);
        printf("%s ,", member[i].name);
        printf("%d", member[i].sr_no);
      }
      if (fields[j] == 2 && fields[j + 1] == 5)
      {
        printf("%s ,", member[i].course_id);
        printf("%s ,", member[i].name);
        printf("%d", member[i].sr_no);
      }
      if (fields[j] == 3 && fields[j + 1] == 4)
      {
        printf("%s ,", member[i].course_name);
        printf("%d", member[i].r_no);
        printf("%d", member[i].sr_no);
      }
      if (fields[j] == 3 && fields[j + 1] == 5)
      {
        printf("%s ,", member[i].course_id);
        printf("%d", member[i].r_no);
        printf("%d", member[i].sr_no);
      }
      if (fields[j] == 4 && fields[j + 1] == 5)
      {
        printf("%s ,", member[i].name);
        printf("%d", member[i].r_no);
        printf("%d", member[i].sr_no);
      }
    }
    printf("\n");
  }

  free(fields);
  for (i = 0; i < n; i++)
  {
    free(member[i].c);
  }

  return 0;
}
