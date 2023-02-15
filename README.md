# TFCPP
Load animation for C++ Console.

为C++控制台应用制作的加载动画库。

**Actions:**
[![Greetings](https://github.com/yulinfeng16/TFCPP/actions/workflows/greetings.yml/badge.svg)](https://github.com/yulinfeng16/TFCPP/actions/workflows/greetings.yml)[![Mark stale issues and pull requests](https://github.com/yulinfeng16/TFCPP/actions/workflows/stale.yml/badge.svg)](https://github.com/yulinfeng16/TFCPP/actions/workflows/stale.yml)

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
### ```void timeload(int keytime,string a,int z)```

展示一段时间的加载动画。

**keytime**控制展示时间（单位是**秒**,仅支持整数）。
<br>**a**控制展示完成后输出的内容。
<br>**z**控制加载动画的样式。
如果z为0，那么动画会呈现为一个条在旋转，就像Python Pip安装模块时的加载动画。如果z为1，那么动画会变成小点从1个增加到4个。如果z为2那么动画会呈现为一个“+”在旋转。
<br>该函数运行完成后**不会**换行。

### ```void timeprogress(double keytime,string a)```

展示一段时间的加载进度条。

**keytime**控制展示时间（单位是**秒**,可以输入小数）。<br>**a**控制展示完成后输出的内容。<br>该函数运行完成后**将会**换行以防出现残留的进度条。

进度条只有一种样式，如下：<br>![image](https://user-images.githubusercontent.com/86186021/219015171-9bd37f34-44b8-4d73-9061-ff92925f166b.png)
