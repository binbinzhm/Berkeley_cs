# Berkeley_cs
这是我学习berkeley计算机课程的记录，感觉自己的基础还不是很牢固，因此想利用空闲时间学习下

cs-9
下面的描述不是我的，是网上找的，先学习cs9c，再学习这些。

[CS61A](http://www-inst.eecs.berkeley.edu/~cs61a/archives.html): PL theory 的入门课, 地位等同于国内的C/C++编程基础. 主要内容有Python, Python在interpreter一层的简单原理, Higher-Order function (函数式编程入门), OOP入门, 数据结构入门 (Python里的dict, list...), delcarative programming入门, parallell programming 入门. 说了这么多, 概括地说, 61A就是什么都讲, 但是什么都只讲一点, 讲到够用的程度, 但是不深究原理. 
值得一提地是, 61A的stuff团队非常厉害. 由于61A / B一般是 1.4k+ 以上人的大课, 不可能使用传统的课堂形式解决问题. 所以61A的stuff为这门课做了一些研究, 效果就是, 不用到课堂上课, 让学生快速掌握全部内容. (其实就是MOOC的idea). 他们开发了一套autograding的程序, 还发了paper.

[CS61B](http://www-inst.eecs.berkeley.edu/~cs61b/archives.html): 经常逛一亩三分地的同学可能早就了解了, 61B是UCB本科阶段最有用的一门课, 找工作必备. 61B的课程目标是: 上完了我们61B, 你就可以去硅谷当一个幸福的码农了.
主要内容: OOP / Java / data structure / algorithem introduction. 这门课会把OOP / Java各种细节, 各种高级特性讲到, project也通常代码量比较大, 但是比较有趣. 数据结构/算法的部分实践性很强, 基本上会让学生把红黑树/A*等等东西全都写一遍.

[CS61C](http://www-inst.eecs.berkeley.edu/~cs61c/archives.html): 对于做system的人必备的一门课, 地位相当于国内CS专业的数电 + 计算机体系结构(或嵌入式) . 课程结构是从微观到宏观: 二极管->门电路->数字电路->汇编语言->C语言->操作系统(cache, virtual memory, IO)->并行计算(OpenMP)->Datacenter结构->Hadoop/Spark. 5个project相当虐人 (详情可在homepage里看). 总体感觉就是, 一门61C顶我成电2-3门课...

[CS162](https://inst.eecs.berkeley.edu/~cs162/archives.html): 操作系统, 个人认为UCB最有挑战性的2门课之一. 这门课的TA基本上都是每届大四最牛的2 3个人. 课程内容涵盖了OS / Networking / distributed system的方方面面. project是stanford的PintOS, 内容是实现一个完整的kernel, 包括threads, processes, scheduler, file system , KVStore (distributed database). 总之, 学好162, system的各个方向就可以进去无障碍读paper / 写code了.

[CS164](http://www-inst.eecs.berkeley.edu/~cs164/archives.html): Compilers, 个人觉得, CS多数领域内, 学到最后, 都有compiler的思想(Abstraction和Modularity). 而且parser, lexical analysis在多数大的system design是一定会用到的. 

CS170:

CS186:

CS188:

CS189:

[CS168](https://inst.eecs.berkeley.edu/~cs168/fa15/): Introduction to Internet. 老板开的课, 我之前也做了project grader. 对于想做networking方向的同学来说, 尽管这是UCB本科唯一一门networking的课, 但是这门课感觉也不是特别有用.
首先, 课程内容偏research, 讲的都是architecture的东西, 基本不涉及实际的network (比如wireless). 对于想做linux kernel networking的人来说, 这个课的project都是python. 总的来说, 这门课就是讲了一大摞design principle, 让你对networking有个整体的认识. (可能network system实在太大, 在intro里面只能见森林不见树木). 但是一些前言的概念, 比如network virtualization, verification, 都有介绍.
