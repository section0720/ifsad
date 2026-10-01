#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int N;  //수열 크기
    cin >> N;
    vector<int> A(N, 0);   //수열을 받아둘 배열
    stack<int> mystack;     //스택 선언
    vector<char> resultv; //결과 값 받아둘 벡터 선언
    bool result = true;    //결과 여부
    int p = 1; //오름차순 자연수 
    for (int i = 0; i < N; i++) {   //수열의 크기만큼 배열에 수열 입력
        int temp;
        cin >> temp;
        A[i] = temp;
    }
    
    for (int i = 0; i < N; i++) {
        if (A[i] >= p) {    //오름차순 자연수가 현재 수열값보다 작다면
            while (p <= A[i]){   //서로 값이 같아질때까지
                mystack.push(p);    //push
                p++;
                resultv.push_back('+');  //결과값 벡터에 +저장
            }
            mystack.pop();  //마지막 값은 pop
            resultv.push_back('-');   //결과값 벡터에 -저장
        }
        else {      //=if(A[i] < p)
            int k = mystack.top();   //위의 값 임시저장
            mystack.pop();  //위의 값 pop
            if(k > A[i]){
                cout << "NO"<< '\n';
                result = false;
                break;
            }
            else {
                resultv.push_back('-');
            }
        }
    }
    if(result) {    //NO를 출력한 적이 없다면 (result=true면)
        for (int i = 0; i < resultv.size(); i++) {  //결과 출력
            cout << resultv[i] << '\n';
        }
    }
}
