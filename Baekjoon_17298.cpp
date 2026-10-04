#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	int N; //수열 크기
	cin >> N;
	vector<int> A(N,0); //수열을 담아둘 배열
    vector<int> resultV(N, 0); //오큰수 수열을 담아둘 배열
    stack<int> mystack; //문제 풀이용 인덱스를 담아둘 스택
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    for (int i = 0; i < N; i++) {
        while (!mystack.empty() && A[i] > A[mystack.top()]) {   //현재값이 스택의 탑보다 작거나 같아질 때까지
            resultV[mystack.top()] = A[i];    //결과 벡터에 값을 넣고
            mystack.pop();  //stack을 계속 pop
        }
        mystack.push(i);    //그리고 현재값의 인덱스 push
    }
    while (!mystack.empty()) {  //stack에 남아있는 값이 있으면
        resultV[mystack.top()] = -1;  //남아있는 인덱스에 해당하는 결과값은 -1을 넣고
        mystack.pop();   //스택에 남은 값은 pop
    }
    
    for (int i = 0; i < N; i++){    //오큰 수 출력
        cout << resultV[i] << " ";
    }
}
