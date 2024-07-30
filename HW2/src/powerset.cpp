#include <iostream>
#include <string>

using namespace std;

void generatePowerset(string set[], string subset[], int n, int index, int subsetIndex) {
    if (index == n) {
        cout << "{ ";
        for (int i = 0; i < subsetIndex; i++) {
            cout << subset[i] << " ";
        }
        cout << "}" << endl;
        return;
    }

    // 不選擇當前元素，直接遞迴下一個元素
    generatePowerset(set, subset, n, index + 1, subsetIndex);

    // 選擇當前元素，加入子集，並遞迴下一個元素
    subset[subsetIndex] = set[index];
    generatePowerset(set, subset, n, index + 1, subsetIndex + 1);
}

int main() {
    string S[] = {"a", "b", "c"};
    int n = sizeof(S) / sizeof(S[0]);
    string subset[n];

    cout << "Powerset: {" << endl;
    generatePowerset(S, subset, n, 0, 0);
    cout << "}" << endl;

    return 0;
}

/* 
執行結果：

Powerset: {                                                                                                                                                                                              
{ }        
{ c }      
{ b }
{ b c }
{ a }
{ a c }
{ a b }
{ a b c }
}
*/