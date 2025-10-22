<h1 align="center">Ultra-auto_eval</h1>
<h3>作业自动批改上传成绩</h3>
<a href="./use.md">使用方法</a>


# 测试题

使用C语言输出Hello

示例1：

输出   
```sh
Hello
```


<details>
<summary><h1>怎么创建文件</h1></summary>

1.在仓库首页选择`新建文件`

<p align="center">
<img src="https://github.com/NGC2237plus/assets/blob/75ea28d7e1df77c3629c72627a98f7d5c76f23c8/Ultra-auto_eval/img/create1.png" width="800em" alt="图片说明">  
</p>

2.填写文件名（包括后缀，且文件在根目录）

<p align="center">
<img src="https://github.com/NGC2237plus/assets/blob/75ea28d7e1df77c3629c72627a98f7d5c76f23c8/Ultra-auto_eval/img/create2.png" width="800em" alt="图片说明">  
</p>

</details>

# 文件内容格式
- 第一行填写学号  
- 第二行填写github登录使用的邮箱
- 第三行填写你的姓名

C语言示例：
```c
//202210116122
//3093236313@qq.com
//何嘉
#include <stdio.h>
int main()
{
    printf("Hello World");
    return 0;
}
```

Python示例：
```python
#202210116122
#3093236313@qq.com
#何嘉
print('Hello World')
```

# 文件名格式
- 开头为数字，代表题目序号
- 文件名的分隔符为下划线`_`
- 文件名剩余部分随意
- 后缀为`.c`或者`.py`

**C语言示例：**   
第一题，开头为数字`1`，下划线分割，剩下随意，后缀`.c`   
`1_hello.c`,`1_hahaha.c`,`1_abcd.c`

第5题，开头为数字`5`，下划线分割，剩下随意，后缀`.c`  
`5_hello.c`,`5_hahaha.c`,`5_abcd.c`

---

**Python示例：**   
第一题，开头为数字`1`，下划线分割，剩下随意，后缀`.py`   
`1_hello.py`,`1_hahaha.py`,`1_abcd.py`

第5题，开头为数字`5`，下划线分割，剩下随意，后缀`.py`  
`5_hello.py`,`5_hahaha.py`,`5_abcd.py`

# 分数计算公式

## 1. 评分标准
- **总得分范围**：0 - 100 分  
- **时间评分**（满分 20 分）：  
  - 运行时间 `≤ 2ms` 得满分 `20 分`
  - 运行时间 `≥ 5000ms` 得 `0 分`
  - `2ms` 到 `5000ms` 之间，\( T \) 是程序执行时间（ms），使用**指数衰减公式**计算：
    
$$
S_{\text{time}} = 20 \times e^{-10 \times \frac{T - 2}{5000 - 2}}
$$ 

- **内存评分**（满分 20 分）：  
  - 内存 `≤ 500KB` 得满分 `20 分`
  - 内存 `≥ 60000KB` 得 `0 分`
  - `500KB` 到 `60000KB` 之间，\( M \) 是程序使用的内存（KB），使用**指数衰减公式**计算：

$$
S_{\text{memory}} = 20 \times e^{-1.5 \times \frac{M - 500}{60000 - 500}}
$$

- **测试评分**（满分 60 分）：  
  - 每个测试点平分分数，全部通过得满分 `60 分`
  - 通过测试点 `right` 个，总共 `AllNum` 个测试点，**计算公式**：
    
$$
S_{\text{test}} = right \times \frac{60}{AllNum}
$$

## 2. 总得分计算
$$
S_{\text{total}} = S_{\text{time}} + S_{\text{memory}} + S_{\text{test}}
$$

