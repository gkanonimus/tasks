/* Let int x = 10 ; int y = 20 ;
For the given expression, indicate its value and side effects (if any) or “error” if the expression is erroneous */

а) x += y , y += x, y, x
б) y += (x = 1) + (x = 2)
в) x +=((y=1)&&(y=2))
г) y %= x / 6
д) x || ++y
е) x ? !x : y

а)  
x = 30, y = 50;

б)  24
x = 2, y = 24;

в)  11
x = 11, y = 2;

г)  0
x = 10, y = 0;

д)  1
x = 10, y = 21;

е)  0
x = 10, y = 20;