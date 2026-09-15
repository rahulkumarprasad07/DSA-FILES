void value(string s){
    cout<<"enter string:"<<"\n";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" value is: "<<int(s[i])<<"\n";
    }
}
int main(){
string p;
value(p);