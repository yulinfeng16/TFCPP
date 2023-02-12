# TFCPP
Load animation for C++ Console.

为C++控制台应用制作的加载动画库。

## 简介
此库中有一个.h文件“**tfcpp.h**”,通过以下代码将其引入你的C++控制台程序就可以调用函数实现加载动画。

```#include"tfcpp.h"```

同时，你将不必再引入以下头文件：

**iostream**

**string**

**cstring**

**algorithm**

**ctime**

**stdio.h**

**vector**

**queue**

**windows.h**

## 有哪些函数？
```void timeload(int keytime,string a,int z)```

展示一段时间的加载动画。

**keytime**控制展示时间（单位是**秒**）

**a**控制展示完成后输出的内容

**z**控制加载动画的样式。
