/*
연속된 수의 합

연속된 세 개의 정수를 더해 12가 되는 경우는 3, 4, 5입니다.
두 정수 num과 total이 주어집니다. 
연속된 수 num개를 더한 값이 total이 될 때, 
정수 배열을 오름차순으로 담아 return하도록 solution함수를 완성해보세요.

# 1 ≤ num ≤ 100
# 0 ≤ total ≤ 1000
# num개의 연속된 수를 더하여 total이 될 수 없는 테스트 케이스는 없습니다.

입출력 예
num	total	result
 3	12	[3, 4, 5]
 5	15	[1, 2, 3, 4, 5]
 4	14	[2, 3, 4, 5]
 5	 5	[-1, 0, 1, 2, 3]
*/


#include <iostream>
#include <string>
#include <vector>


using namespace std;


vector<int> solution(int num, int total) {
  vector<int> answer;
  int index = 0; // 연속하는 수의 시작값

  if(num % 2 != 0) {
    // 개수가 홀수일 때
    index = (total/num) - (num/2);
    
    for(int i = index; i<index + num; i++) {
      answer.push_back(i);
    }
    
  } else {
    // 개수가 짝수일 때
    index = (total/num) - (num/2) + 1;

    for(int i = index; i<index + num; i++) {
      answer.push_back(i);
    }
  }

  return answer;
}


int main() {
  int num, total = 0; // 연속된 정수 개수, 정수의 합
  int index = 0;
  vector<int> answer;


  cin >> num;
  cin >> total;

  answer = solution(num, total);

  for(vector<int>::const_iterator it = answer.cbegin(); it != answer.cend(); it++) {
    cout << *it << " ";
  }
  
  cout << "\n";
}