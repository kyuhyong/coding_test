#include <iostream>
using namespace std;

void p_t(int n){ 
	for(int i =0;i<n;i++) {
		std::cout<<"____";
	}
}
void p_q(int n){ 
	if(n==0) {std::cout<<"\"재귀함수가 뭔가요?\"" <<std::endl;}
	else if(n==1) {std::cout<<"\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어."<<std::endl;}
    else if(n==2) {std::cout<<"마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지."<<std::endl;}
    else if(n==3) {std::cout<<"그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\""<<std::endl;}
	else if(n==4) {std::cout<<"\"재귀함수는 자기 자신을 호출하는 함수라네\""<<std::endl;}
	else if(n==5) {std::cout<<"라고 답변하였지."<<std::endl;}
}

void recur(int n)
{
	std::cout<<"어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다."<<std::endl;
	for(int i=0; i<n+1; i++) {
		p_t(i); p_q(0);
		if(i==n) {p_t(i); p_q(4);}
		else {
			p_t(i); p_q(1);
            p_t(i); p_q(2);
            p_t(i); p_q(3);
		}
	}
	for(int i=0; i<n+1; i++) {
		p_t(n-i); p_q(5);
	}
}

int main() {
	// your code goes here
	int n = 0;
	std::cin >> n;
	recur(n);
	return 0;
}