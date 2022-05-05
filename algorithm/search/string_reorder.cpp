#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void) {
    string str;
    vector<char> result;
    int value = 0;
    cin>>str;
    // 문자열을 하나씩 확인
    for(int i =0; i< str.size(); i++) {
        // 알파벳인 경우 리스트에 삽입
        if(isalpha(str[i])) {
            result.push_back(str[i]);
        }
        // 숫자는 더하기
        else {
            value += str[i] - '0';
        }
    }
    // 알파벳을 오름차순으로 정렬
    sort(result.begin(), result.end());
    // 알파벳을 차례대로 출력
    for(int i=0; i< result.size(); i++) {
        cout<<result[i];
    }
    // 숫자가 하나라도 있으면
    if (value !=0) cout<<value;
    cout << '\n';
}