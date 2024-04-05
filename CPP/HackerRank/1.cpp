#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int start, end;
    string words[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    string num_words = " ";
    cin >> start >> end;
    
    for(int i=start; i<=end; i++) {
        if(i<=9) {
            num_words = words[i-1];
        }else{
            if(i>9 && i %2==0){
                num_words = "even";
            }else {
                num_words = "odd";
            }
        }
        cout << num_words << "\n";
    }
    return 0;
}