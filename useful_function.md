# 比较实用的一些函数

***使用时根据需求做修改才可使用***

## 1. 输出小数

- 前提:变量类型必须为小数类型(double,float)
- 引用头文件iomanip
- 此例:输出数字k,保留小数点后n位
```c++
cout<<fixed<<setprecision(n)<<k;
```


## 2. 求a,b的最大公约数
- 输入a、b,返回公约数
- Tip:最小公倍数*最小公约数=a*b
```c++
int gcd(int a, int b)
{
    int temp;
    while (b)
    {
        /*利用辗除法，直到b为0为止*/
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
```

## 3. witch函数
- 此处根据grade来决定执行哪个分支语句
- 每个语句中末尾必须加上break来退出switch语句，否则会从选择的那项语句一直往下执行，直至结束
```c++
switch(grade)
   {
   case 'A' :
      cout << "很棒！" << endl; 
      break;
   case 'B' :
   case 'C' :
      cout << "做得好" << endl;
      break;
   case 'D' :
      cout << "您通过了" << endl;
      break;
   case 'F' :
      cout << "最好再试一下" << endl;
      break;
   default :
      cout << "无效的成绩" << endl;
   }
```

## 4. sort函数
- 引用头文件algorithm
- 此例:对容器或普通数组中 [first, last) 范围内的元素进行排序，默认进行升序排序
```c++
sort (first, last);
```