# HW 1 阿克曼函數

## 1. 解題說明

以遞迴實作阿克曼函數，已知阿克曼函數定義如下：

$$A(m,n) = { n+1 , if m=0 ; A(m-1,1) , if n=0 ; A(m-1,A(m,n-1) , otherwise ; }$$


實作參見檔案 `main.cpp`，其遞迴函式：

```cpp
int A(int m, int n) {
    if (m == 0) { return n + 1; }
    else if (m > 0 && n == 0) { return A(m - 1, 1); }
    else { return A(m - 1, A(m, n - 1)); }
}
```

## 2. 演算法設計與實作

```cpp
int main() {
    int m, n;
    while (cin >> m >> n) { //數入變數
        cout << A(m, n) << endl; //呼叫函式A，將回傳值輸出
    }
    return 0;
}
```

## 2. 效能分析

- $f(n) = O(n)$
- $S(P) = 1 \times n$, 1 個變數、n 次遞迴。
- $T(P) = C \times n$, 每層迴圈所需 C 時間、n 次遞迴。
## 3. 測試與過程

### Worst Case

時間複雜度T(m,n)=O(A(m,n))

空間複雜度S(m,n)=O(A(m,n))

### Best Case

時間複雜度T(m,n)=O(1)

空間複雜度S(m,n)=O(1)

### Average Case

近似於Worst Case

### Input

```plain
4 0
1 3
2 2
```

### Output

```plain
13
5
7
```


