#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N;  //카드의 수
    queue<int> card;    //카드를 담아둘 큐
    cin >> N;
    
    for (int i = 1; i <= N; i++) {  //1~N까지 받아두기
        card.push(i);
    }
    while (card.size() > 1) {   //카드의 수가 1이 될 때까지
        card.pop(); //카드 윗장 버리고
        int temp = card.front();    //그 다음장을 맨 아래로 넣기
        card.pop();
        card.push(temp);
    }
    
    cout << card.front() << '\n';
}