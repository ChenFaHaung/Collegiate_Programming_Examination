#include <iostream>
#include <cstdio>

using namespace std;

int main(){

int N=0;

cin >> N;

for(int i = 0; i < N; i++){
    string cal;
    cin >> cal;
    int add = 0;
    for(int j = 0; j < cal.length();j++){
        add += cal[j] - '0';  //ACK11
    }
cout << add << endl;
}
// m(n+1) = m(n) + m(n)(そネそ) + f(n)(ダネダ) - m(n)(そ�艮�)
// f(m+1) = f(n) + tmp_m(n)(そネダ) - f(n)(ダ�艮�) + 1(可�@�N)
return 0;
}
