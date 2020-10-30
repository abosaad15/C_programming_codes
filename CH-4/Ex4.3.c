#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAXOP 100   /* max size of operator or operand */
#define NUMBER '0'   /* signal that a number is found */

int getop(char []);
void push(double);
double pop(void);

/* reverse polish calculator */
main()
{
  int type;
  double op2;
  int n;        /* the result of a / b in mod operation */
  double a, b;  /* for modulus operation */
  char s[MAXOP];

  while((type = getop(s)) != EOF) {
    switch(type) {
      case NUMBER:
        push(atof(s));
        break;
      case '+':
        push(pop() + pop());
        break;
      case '-':
        op2 = pop();
        push(pop() - op2);
        break;
      case '*':
        push(pop() * pop());
        break;
      case '/':
        op2 = pop();
        if(op2 != 0.0)
          push(pop() / op2);
        else
          printf("Error, zero divisor\n");
        break;
      case '%':
        b = pop();
        a = pop();
        n = (int) (a / b);
        push(a - (n * b));
        break;
      case '\n':
        printf("%.8g\n",pop());
        break;
      default:
        printf("Error uknown command %s\n", s);
        break;
    }
  }

  return 0;
}

/* ----------------------------------------------------------------- */

#define MAXVAL 100    /* depth of the stack */

int sp = 0;           /* next free stack pointer */
double val[MAXVAL];    /* value stack */

void push(double f)
{
  int i = sp;
  if(sp < MAXVAL) {
    val[sp++] = f;
  }
  else {
    printf("stack is full\n");
  }
}

double pop(void)
{
  if(sp > 0)
    return val[--sp];
  else
    printf("stack is empty\n");
    return 0.0;
}

/* ----------------------------------------------------------------- */

int getch(void);
void ungetch(int);

/* getop: get nest operator or operand */
int getop(char s[])
{
  int i, c, a;

  while((s[0] = c = getch()) == ' ' || c == '\t');
  s[1] = '\0';
  if(!isdigit(c) && c != '.' && c != '-')
    return c;                 /* not a number */

  i = 0;
  if(c == '-') {
    a = getch();
    if(!isdigit(a) && a != '.')
      return c;
    else
      s[++i] = a;
      while(isdigit(s[++i] = c = getch()));
  }
  if(isdigit(c)) {
    while(isdigit(s[++i] = c = getch()));
  }
  if(c == '.') {
    while(isdigit(s[++i] = c = getch()));
  }
  s[i] = '\0';
  if(c != EOF)
    ungetch(c);
  return NUMBER;
}

/* ----------------------------------------------------------------- */

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
  return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
  if(bufp >= BUFSIZE)
    printf("ungetch: too many characters\n");
  else
    buf[bufp++] = c;
}
