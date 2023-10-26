#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool is_prime(long long int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (long long int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<long long int> numbers(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    long long int q = *min_element(numbers.begin(), numbers.end());

    if (q % 2 == 0) {
        cout << "None" << endl;
        return 0;
    }

    long long int p = q + 1;

    while (true) {
        bool valid = true;
        if (is_prime(p)) {
            for (int i = 0; i < n; i++) {
                if (numbers[i] != q && p % numbers[i] != q) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                cout << p << endl;
                return 0;
            }
        }
        p++;
    }

    cout << "None" << endl;
    return 0;
}
