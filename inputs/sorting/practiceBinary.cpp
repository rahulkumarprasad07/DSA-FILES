// #include<bits/stdc++.h>
// using namespace std;
// int lowerCase(string &s){
//     int count=0;
//     getline(cin,s);
//     for(int i=0;i<s.length();i++){
//         if(s[i]>='A' && s[i]<='Z'){
//             s[i]=s[i]-'A'+'a';
//         }
//     }
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
//       count++;
//         }
//     }
//     cout<<"count: "<<count<<"\n";
//     return count;
// }
// int main(){
// string p;
// lowerCase(p);






//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void countChar(string s) {

    getline(cin, s);

    int freq[256] = {0};

    for(int i = 0; i < s.length(); i++) {

        if(s[i] != ' ') {
            freq[s[i]]++;
        }
    }

    for(int i = 0; i < 256; i++) {

        if(freq[i] > 0) {
            cout << char(i) << " = " << freq[i] << endl;
        }
    }
}

int main() {

    string s;

    countChar(s);

    return 0;
}