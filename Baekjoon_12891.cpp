#include <iostream>
#include <string>
using namespace std;

int N, M;
string A;
int checkArr[4] = {0};
int currentArr[4] = {0};
int count = 0;

void Add(char a) {
    if (a == 'A') {
        currentArr[0]++;
    }
    if (a == 'C') {
        currentArr[1]++;
    }
    if (a == 'G') {
        currentArr[2]++;
    }
    if (a == 'T') {
        currentArr[3]++;
    }

}
void remove(char b) {
    if (b == 'A') {
        currentArr[0]--;
    }
    if (b == 'C') {
        currentArr[1]--;
    }
    if (b == 'G') {
        currentArr[2]--;
    }
    if (b == 'T') {
        currentArr[3]--;
    }
}
void check() {
    int temp = 0;
    for (int i = 0; i < 4; i++) {
        if (currentArr[i] >= checkArr[i]){
            temp++;
        }
    }
    if(temp == 4){
        count++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;
    cin >> A;
    for (int i = 0; i < 4; i++) {
        cin >> checkArr[i];
    }
    for (int i = 0; i < N; i++) {
        Add(A[i]);
        if (i > M-1) {
            remove(A[i-M]);
        }
        check();
    }
    cout << count << '\n';
}
