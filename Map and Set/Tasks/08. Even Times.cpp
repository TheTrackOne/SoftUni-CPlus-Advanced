#include <iostream>
#include <map>

using namespace std;

int main(void) {
    map<int, unsigned> numbers;

    int n;
    cin >> n;

    while (n--) {
        int digit;
        cin >> digit;
        numbers[digit]++;
    }

    for (pair<int, unsigned> curr : numbers) {
        if (curr.second % 2 == 0) {
            cout << curr.first << endl;
            break;
        }
    }

    return 0;
}
