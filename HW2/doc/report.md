# HW 1 Powerset

## 1. 解題說明

使用遞迴函式計算出一個集合裡的各種可能子集合，再將所有子集合合併成一個大集合。

實作參見檔案 `powerset.cpp`，其遞迴函式：

```cpp
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
```

## 2. 演算法設計與實作

```cpp
int main() {
    string S[] = {"a", "b", "c"};
    int n = sizeof(S) / sizeof(S[0]);
    string subset[n];

    cout << "Powerset: {" << endl;
    generatePowerset(S, subset, n, 0, 0);
    cout << "}" << endl;

    return 0;
}
```

## 3. 效能分析

### Worst Case

時間複雜度T(n)=O(n*2^n)

空間複雜度S(n)=O(n)

### Best Case

時間複雜度T(n)=O(n*2^n)

空間複雜度S(n)=O(n)

### Average Case

時間複雜度T(n)=O(n*2^n)

空間複雜度S(n)=O(n)

## 4. 測試與過程

### Output

```plain
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
```


