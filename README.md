# SummerExpr

## 专门解决小学期 debug 的测试问题。

## Linux 下安装方法

```
apt-get install toilet
git clone https://github.com/CTSinon/SummerExpr.git
```

然后将 test 文件复制到你要 debug 的目录下（和 c 源文件放在一起）运行`chmod +x test`

## 使用方法

为每种输入样例创建一个以.in 为后缀的文件，并将其对应的输出存放在文件名相同的.out 文件中。如 example 文件夹中存放的是第 3 题对应的输入和输出样例（注意最后的换行和空格）。

程序有三种模式：

- `./test all`：对每一个文件进行所有存在的测试。
- `./test filename.c`：对 filename 指定的 c 文件运行所有存在的测试。
- `./test filename.in`：对每个 c 文件进行 filename 指定的测试。

效果如下：

![](https://tva1.sinaimg.cn/large/007S8ZIlly1gg4x7wn916j31c00u07eq.jpg)
![](https://tva1.sinaimg.cn/large/007S8ZIlly1gg4x7wy5vvj31c00u0dqv.jpg)
![](https://tva1.sinaimg.cn/large/007S8ZIlly1gg4xu435njj31c00u0akt.jpg)

注：输出 congratulations 即所有测试通过，否则输出失败的次数。

#### 如果出现 Permission denied 错误，请运行 chmod +x test

输出的结果将会在 test.out 中保存一份副本，方便随时查看。

项目中提供了一个 gen.py 文件，你可以尝试使用它来生成你自己的测试文件。

---

## windows 下安装方法

```
git clone https://github.com/CTSinon/SummerExpr.git
```

然后把所有代码 copy 到 `for-win/code_for_test/`，如图：</br>
<img src="https://note.youdao.com/yws/api/personal/file/WEB317a631062db5256611419f07b0b9591?method=download&shareKey=96a4e441153ff0a5acde7831623cb9ab" height = "300"></br>

### 使用方法

**确保 gcc.exe 已经添加到环境变量中**
双击 oppose.bat，输入你要 check 的题号，即可自动随机生成输入并检查你的相邻两个代码的输出是否有差别

> 此种方法无法 100%确保能通过所有样例

发现输出不同时将自动暂停，输出将保存在 **代码标号.out** 文件中，输入将保存在 **data.txt** 文件中
如图：
<img src="https://note.youdao.com/yws/api/personal/file/WEB1aaa0b0dc0bc1879e9543612cd86610e?method=download&shareKey=48ceecddbda7aae2016b469ca0c05f8a" height = "200"></br>
<img src="https://note.youdao.com/yws/api/personal/file/WEBa0d0d19564e889d6869c27226d37a5b2?method=download&shareKey=88a7d234fdde831e8636f1829e8d2ff8" height = "200"></br>
<img src="https://note.youdao.com/yws/api/personal/file/WEB60694d5f31cc369271acac3251c70cde?method=download&shareKey=6b655ae60e5c300d3ddc3efbfe94919c" height = "200"></br>

修改循环次数的地方在 oppose.bat 中的第 20 行的 200 处

```bat
if %count% GTR 200 (goto normal)
```

single-oppose.bat 进行单独两份代码的比较，题号自行输入
代码的自行指定则是在 single-oppose.bat 的第 3、4 行的 10、9 处

```bat
set /a std = 10
set /a my  = 9
```

#### 可能的问题

- 第六题和第八题因为时间问题没有写生成随机样例的程序
- 也许会因为某些未发现的 bug 陷入死循环吧。。这时请找 19 级学号尾号 109 的人询问
