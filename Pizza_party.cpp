#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int totalBoys = A + 1;
    int totalSlices = totalBoys * 4 + B * 3;

    int pizzasNeeded = ceil((totalSlices) / 8.0);

    cout << pizzasNeeded << endl;

    return 0;
}
