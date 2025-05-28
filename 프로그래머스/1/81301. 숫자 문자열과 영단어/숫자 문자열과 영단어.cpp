#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string numbers[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int k;
    for (int i = 0; i < 10; i++){
        k = s.find(numbers[i]);
        if (k == string::npos){
            continue;
        }else{
            s.replace(k, numbers[i].length(), to_string(i));
            i--;
        }
        
    }
    answer = stoi(s);
    return answer;
}