#include <bits/stdc++.h>
using namespace std;
int Rand() { return (rand() % 32768) * 32768 + (rand() % 32768); }
void case_ganerator(string test_case_num){
  ofstream ofs(test_case_num);
  cout.rdbuf(ofs.rdbuf());
  // この下テストケースの出力プログラムを書く
  cout << Rand() % 10 << " " << Rand() % 10 << endl;
  return;
}
int solver(string test_case_num,string output_num){
  ifstream ifs(test_case_num);
  cin.rdbuf(ifs.rdbuf());
  ofstream ofs(output_num);
  cout.rdbuf(ofs.rdbuf());
  // この下に想定解のプログラムのmain関数の中身を張り付ける
  int a,b;
  cin >> a >> b;
  cout << a + b << endl;
  return 0;
}
int main(){
  srand((unsigned)time(NULL));
  int test_case;
  cin >> test_case;
  for(int i = 0; i < test_case; i++){
    string tmp0 = "testcase/input/input",tmp1 = "testcase/output/output";
    if(i > 9)tmp0 += to_string(i),tmp1 += to_string(i);
    else tmp0 += ('0') + to_string(i),tmp1 += ('0') + to_string(i);
    tmp0 += ".txt",tmp1 += ".txt";
    case_ganerator(tmp0);
    solver(tmp0,tmp1);
  }
  return 0;
}