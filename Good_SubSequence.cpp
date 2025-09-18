#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        int c = 0;
        int last_check = -1; 
        for (int i = 0; i < N; ++i) {
            int current_check = A[i] % 2;
            if (current_check != last_check) {
                c++;
                last_check = current_check;
            }
        }
        cout<<c<< endl;
    }
    return 0;
}
