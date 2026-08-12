(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            cout<<ulta[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>>test(3,vector<int>(4));
    transpose(test);

}