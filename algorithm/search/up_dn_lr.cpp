#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin>>n;     // 전체 공간의 크기
    char moveTypes[4]   = {'L','R','U','D'};
    int     dx[4]       = {  0, 0, -1,  1};
    int     dy[4]       = { -1, 1,  0,  0};
    int x = 1, y = 1;       //시작 위치
    string plans;
    cin.ignore();           //버퍼 지우기
    getline(cin, plans);    //이동 계획 입력
    // 이동 계획을 하나씩 확인
    for(int i = 0; i< plans.size(); i++) {
        char plan = plans[i];
        // 이동 후 좌표 구하기
        int nx = -1, ny = -1;
        for (int j=0; j<4; j++) {
            if(plan == moveTypes[j]) {
                nx = x + dx[j];
                ny = y + dy[j];
            }
        }
        // 공간을 벗어나면 무시
        if(nx < 1 || ny < 1 || nx > n || ny > n) continue;
        // 이동 수행
        x = nx;
        y = ny;
    }
    cout<<x<<' '<<y<<'\n';
    return 0;
}