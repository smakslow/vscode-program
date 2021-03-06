128.编辑器

- [  题目](https://www.acwing.com/problem/content/description/130/)
- [  提交记录](https://www.acwing.com/problem/content/submission/130/)
- [  讨论](https://www.acwing.com/problem/content/discussion/index/130/1/)
- [  题解](https://www.acwing.com/problem/content/solution/130/1/)
- [  视频讲解](https://www.acwing.com/problem/content/video/130/)



你将要实现一个功能强大的整数序列编辑器。

在开始时，序列是空的。

编辑器共有五种指令，如下：

1、`I x`，在光标处插入数值 xx。
2、`D`，将光标前面的第一个元素删除，如果前面没有元素，则忽略此操作。
3、`L`，将光标向左移动，跳过一个元素，如果左边没有元素，则忽略此操作。
4、`R`，将光标向右移动，跳过一个元素，如果右边没有元素，则忽略次操作。
5、`Q k`，假设此刻光标之前的序列为 a1,a2,…,an，输出 max1≤i≤kSi，其中 Si=a1+a2+…+ai。

#### 输入格式

第一行包含一个整数 Q，表示指令的总数。

接下来 Q 行，每行一个指令，具体指令格式如题目描述。

#### 输出格式

每一个 `Q k` 指令，输出一个整数作为结果，每个结果占一行。

#### 数据范围

1≤Q≤10^6,
|x|≤10^3,
1≤k≤n

#### 输入样例：

```
8
I 2
I -1
I 1
Q 3
L
D
R
Q 2
```

#### 输出样例：

```
2
3
```

#### 样例解释

下图包含了对样例的过程描述：

![C464-1004-2.jpg](https://www.acwing.com/media/article/image/2019/01/22/19_e0778ec41d-C464-1004-2.jpg)