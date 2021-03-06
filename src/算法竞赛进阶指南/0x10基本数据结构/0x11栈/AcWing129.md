\129. 火车进栈

- [  题目](https://www.acwing.com/problem/content/description/131/)
- [  提交记录](https://www.acwing.com/problem/content/submission/131/)
- [  讨论](https://www.acwing.com/problem/content/discussion/index/131/1/)
- [  题解](https://www.acwing.com/problem/content/solution/131/1/)
- [  视频讲解](https://www.acwing.com/problem/content/video/131/)



这里有 nn 列火车将要进站再出站，但是，每列火车只有 11 节，那就是车头。

这 nn 列火车按 11 到 nn 的顺序从东方左转进站，这个车站是南北方向的，它虽然无限长，只可惜是一个死胡同，而且站台只有一条股道，火车只能倒着从西方出去，而且每列火车必须进站，先进后出。

也就是说这个火车站其实就相当于一个栈，每次可以让右侧头火车进栈，或者让栈顶火车出站。

车站示意如图：

```
            出站<——    <——进站
                     |车|
                     |站|
                     |__|
```

现在请你按《字典序》输出前 2020 种可能的出栈方案。

#### 输入格式

输入一个整数 nn，代表火车数量。

#### 输出格式

按照《字典序》输出前 2020 种答案，每行一种，不要空格。

#### 数据范围

1≤n≤201≤n≤20

#### 输入样例：

```
3
```

#### 输出样例：

```
123
132
213
231
321
```