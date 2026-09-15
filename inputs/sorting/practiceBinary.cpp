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
// 
// #include<bits/stdc++.h>
// using namespace std;
// void charCount(string &s){
// getline(cin,s);
// int freq[256]={0};
// for(int i=0;i<s.length();i++){
// freq[s[i]]++;
// }
// for(int i=0;i<256;i++){
// if(freq[i]>0){
//         cout<<char(i)<<"="<<freq[i]<<"\n";
// }
// }


// }
// int main(){
//  string p;
//  charCount(p);


//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
//     char maxOccur(string &s){
//         getline(cin,s);
//         int n=s.length();
//         for(int i=0;i<n;i++){
//             if(s[i]>='A' && s[i]<='Z'){
//                 s[i]=s[i]-'A'+'a';
//             }
//         }
//         int freq[256]={0};
//         for(int i=0;i<n;i++){
//             freq[s[i]]++;

//         }
     
//         char most;
//      int maxFreq=0;
//      for(int i=0;i<n;i++){
//         if(freq[s[i]]>maxFreq){
//             maxFreq=freq[s[i]];
//             most=s[i];
//         }
//      }
//      return most;
//     }

// int main() {
//  string p;
// cout << maxOccur(p);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int noWords(string &s){
//     getline(cin,s);
//     int n=s.length();
//     int count=1;
//     for(int i=0;i<n;i++){
//      if(s[i]==' '){
//       count++;
//      }
//     }
//     return count;
// }

// int main() {
//     string p;
//     cout<<noWords(p);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int words(string &s){
//       getline(cin,s);
//         int n=s.length();
//         int count=0;
  
//     for(int i=0;i<n;i++){
//       if(i==0 && s[i]!=' '){
//       count++;
//       }else if(i>0 && s[i-1]==' ' && s[i]!=' '){
//         count++;
//       }
//     }
//     return count;
// }
// int main() {
//      string p;
//      cout<<words(p);
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
void interChange(string &s){
    getline(cin,s);
    int n=s.length();
    int st=0;
    int e=n-1;
while(st<=e){
    swap(s[st],s[e]);
    st++;
    e--;
}
cout<<s;
}
int main() {
    string p;
    interChange(p);
    
    return 0;
}