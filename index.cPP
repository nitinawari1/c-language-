#include <iostream>
#include <conio.h>
using namespace std;
// function declaration
void swap(int *x, int *y);
int main () {
// local variable declaration:
int x = 100;
int y = 200;
cout << "Before swap, value of a :" << x << endl;
cout << "Before swap, value of b :" << y << endl;
/* calling a function to swap the values.
* &a indicates pointer to a ie. address of variable a and
* &b indicates pointer to b ie. address of variable b.
*/
swap(&x, &y);
cout << "After swap, value of a :" << x << endl;
cout << "After swap, value of b :" << y << endl;
getch();
return 0;
}
// function definition to swap the values.
void swap(int *x, int *y)
{
int temp;
temp = *x; /* save the value at address x */
*x = *y; /* put y into x */
*y = temp; /* put x into y */
}