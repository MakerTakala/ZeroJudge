#include <iostream>
#include <stack>
#include <queue>
#include <sstream>
using namespace std;

int weight(char c)
{
    char oper[7] = {'+', '-', '*', '/', '%', '(', ')'};
    int weight[7] = {1, 1, 2, 2, 2, 0, 0};

    for (int i = 0; i < 7; i++){
        if (c == oper[i]){
            return weight[i];
        }
    }
    return -1;
}
int main()
{
    string line;
    string token;
    stack<int> num;
    stack<char> oper;
    queue<string> postfix_queue;

    while(getline(cin,line)){
        istringstream ss(line);
        while(ss >> token){
            if(weight(token[0]) == -1){
                postfix_queue.push(token);
            }
            else{
                 if (token[0] == '('){
                    oper.push(token[0]);
                }
                else if (token[0] == ')'){
                    while (oper.top() != '('){
                        string tmp(1, oper.top());
                        postfix_queue.push(tmp);
                        oper.pop();
                    }
                    oper.pop();
                }
                else if (oper.empty() || weight(token[0]) > weight(oper.top())){
                    oper.push(token[0]);
                }
                else if (weight(token[0]) <= weight(oper.top())){
                    while (!oper.empty() && (weight(oper.top()) >= weight(token[0]))){
                        string tmp(1, oper.top());
                        postfix_queue.push(tmp);
                        oper.pop();
                    }
                    oper.push(token[0]);
                }
            }
        }
        while (!oper.empty()){
            string tmp(1, oper.top());
            postfix_queue.push(tmp);
            oper.pop();
        }
        while (!postfix_queue.empty()){
            if (weight(postfix_queue.front()[0]) == -1){
                istringstream ss(postfix_queue.front());
                long long int n;
                ss >> n;
                num.push(n);
            }
            else{
                int first, second;
                second = num.top();
                num.pop();
                first = num.top();
                num.pop();
                int ans = 0;
                switch (postfix_queue.front()[0]){
                    case '+':
                        ans = first + second;
                        break;
                    case '-':
                        ans = first - second;
                        break;
                    case '*':
                        ans = first * second;
                        break;
                    case '/':
                        ans = first / second;
                        break;
                    case '%':
                        ans = first % second;
                        break;
                    default:
                        ans = 0;
                        break;
                }
                num.push(ans);
            }
            postfix_queue.pop();
        }
        cout << num.top() << endl;
    }
return 0;
}
