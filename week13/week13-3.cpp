// week13-3.cpp 使用 LeetCode 的 Playground 遊樂場 寫程式
// LeetCode 把 #include <iostream> 和 using namespace std; 都打好了
// 右下角,有stdin 可輸入資料 輸入
//3 4 
//4 3
//2 5
//1 3
//3 9
//3 3
int main() {
    int a,b;
    vector<int> A, B;
    while( cin >> a >> b){
        A.push_back(a); // 把數字a 放入 陣列A
        B.push_back(b); // 把數字b 放入 陣列B
    }// 目標:把 A從小到大排好 把 B從小到大排好 
    sort( A.begin(), A.end() );
    sort( B.begin(), B.end() );
    int ans =0;
    for(int i=0; i<A.size(); i++){
        cout << A[i]<< " "; // 印出來，真的「從小到大」
        ans += abs(A[i]-B[i]); //相減，只取正的
    }
    cout << "加起來的答案是" <<ans;
}