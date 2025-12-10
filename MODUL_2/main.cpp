#include <iostream>
using namespace std;

int main() {
    int x, y, z, m, n;
    float m2;
    
    x = 9 + 4;  /* menghitung 9+4 */
    y = 9 - 4;  /* menghitung 9-4 */
    z = 9 * 4;  /* menghitung 9*4 */
    m = 9 / 4;  /* menghitung 9/4 */
    m2 = 9.0 / 4.0;  /* menghitung 9/4 */
    n = 9 % 4;  /* menghitung 9%4 */
    
    cout << "Nilai dari 9 + 4 = " << x << endl;
    cout << "Nilai dari 9 - 4 = " << y << endl;
    cout << "Nilai dari 9 * 4 = " << z << endl;
    cout << "Nilai dari 9 / 4 = " << m << endl;
    cout << "Nilai dari 9.0 / 4.0 = " << m2 << endl;
    cout << "Nilai dari 9 % 4 = " << n << endl;
    
    return 0;
}