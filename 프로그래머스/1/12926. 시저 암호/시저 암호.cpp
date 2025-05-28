#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (int i = 0; i < s.length(); i++){
        char c = s[i];
        if(c >= 'A' && c <= 'Z'){
            if (c + n > 'Z'){
                s[i] = c + n - 26;
            }else{
                s[i] = c + n;
            }
        }else if(c >= 'a' && c <= 'z'){
            if (c + n > 'z'){
                s[i] = c + n - 26;
            }else{
                s[i] = c + n;
            }
        }           
    }
    return s;
}