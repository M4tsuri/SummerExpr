# SummerExpr

## 专门解决小学期debug的测试问题。

## 安装方法

```
apt-get install toilet
git clone https://github.com/CTSinon/SummerExpr.git
```

然后将test文件复制到你要debug的目录下（和c源文件放在一起）运行`chmod +x test`

## 使用方法

为每种输入样例创建一个以.in为后缀的文件，并将其对应的输出存放在文件名相同的.out文件中。如example文件夹中存放的是第3题对应的输入和输出样例（注意最后的换行和空格）。

程序有三种模式：

- `./test all`：对每一个文件进行所有存在的测试。
- `./test filename.c`：对filename指定的c文件运行所有存在的测试。
- `./test filename.in`：对每个c文件进行filename指定的测试。

效果如下：

![](https://tva1.sinaimg.cn/large/007S8ZIlly1gg4x7wn916j31c00u07eq.jpg)
![](https://tva1.sinaimg.cn/large/007S8ZIlly1gg4x7wy5vvj31c00u0dqv.jpg)
![](https://tva1.sinaimg.cn/large/007S8ZIlly1gg4xu435njj31c00u0akt.jpg)

注：输出congratulations即所有测试通过，否则输出失败的次数。

#### 如果出现Permission denied错误，请运行chmod +x test

输出的结果将会在test.out中保存一份副本，方便随时查看。
