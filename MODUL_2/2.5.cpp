/* Perbedaan operator peningkatan ++ yang diletakkan di depan dan dibelakang operand */

#include <iostream>
using std::cout;

int main()
{
    int x, nilai;
    x = 5;
    nilai = --x;              /* berarti x = x + 1; nilai = x; */
    cout << "nilai = "<< nilai <<", x = " << x;
    nilai = x++;              /* berarti nilai = x; nilai = x + 1; */
    cout << "\nnilai = "<< nilai <<", x = " << x;
    return 0;
}