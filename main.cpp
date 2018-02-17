#include <iostream>

using namespace std;

// DONALD + GERALD = ROBERT

#define START(var, beg) \
    for (int var = beg; var <= 9; ++var) {  \
        if (isUsed[var]) continue;        \
        isUsed[var] = true;

#define END(var)  isUsed[var] = false;  }


int main()
{
    bool isUsed[10] = { false };
    START(D, 1)
    START(O, 0)
    START(N, 0)
    START(A, 0)
    START(L, 0)
    int donald = (D * 100000) + (O * 10000) + (N * 1000) + (A * 100) + (L * 10) + D;
    //std::cout << donald << " = " << D << O << N << A << L << D << std::endl;
    START(G, 1)
    START(E, 0)
    START(R, 0)
    int gerald = (G * 100000) + (E * 10000) + (R * 1000) + (A * 100) + (L * 10) + D;
    int robert = donald + gerald;
    int tmp = robert;
    int t  = tmp % 10;  tmp /= 10;
    int r1 = tmp % 10;  tmp /= 10;
    int e  = tmp % 10;  tmp /= 10;
    int b  = tmp % 10;  tmp /= 10;
    int o  = tmp % 10;
    int r2 = tmp / 10;
    if (!isUsed[b] && !isUsed[t] && b != t
            && r1 == R && e == E && o == O && r2 == R) {
        std::cout << donald << " + " << gerald << " = " << robert << std::endl;
    }
    END(R)
    END(E)
    END(G)
    END(L)
    END(A)
    END(N)
    END(O)
    END(D)
}
