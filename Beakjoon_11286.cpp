#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct cmp{
    bool operator()(int a, int b) { //a는 부모 노드, b는 새롭게 들어갈 값
        if(abs(a) == abs(b)) {  //절대값이 같으면 음수부터 들어가게 저장
            return a > b;
        }
        else {
            return abs(a) > abs(b);     //아니면 절대값만 비교해서 저장하기
        }
    }
};


int main() {
	int N, x;   //N:연산의 수, x:값을 저장하기 위한 임시 변수
	priority_queue <int, vector<int>, cmp> q;   //절대값 힙 구현을 위한 큐
	vector<int> resultV;    //값 저장을 위한 배열
	cin >> N;
	for (int i = 0; i < N; i++) {
	    cin >> x;
	    
	    if (x == 0 && q.empty()) {        //큐가 비어있으면 0 출력
	        resultV.push_back(0);
	    }
	    if(x != 0){     //값이 0이 아니면 큐에 값 저장
	        q.push(x);
	    }
	    if(x == 0 && !q.empty()) {      //값이 0이 아니고 큐가 안 비어있으면 최소값 출력
	        resultV.push_back(q.top());
	        q.pop();
	    }
	}
	
	for (int i = 0; i < resultV.size(); i++) {  //값 출력하는 반복문
	    cout << resultV[i] << '\n';
	}
	
}
