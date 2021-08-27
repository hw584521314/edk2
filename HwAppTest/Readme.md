__学习目标__

/*
主要用作练习使用，主要目的：
1.学习如何使用Std进行输入输出
2.如何使用文件系统的protocol打开和读写一个文件
3.列出某个目录下的文件目录
4.配置IP地址，连接某个socket
5.配置串口，向串口通信
从配置上学习：
1.熟悉各个类库常用的API
2.熟悉如何配置inf和dsc  dec文件
3.熟悉如何编写makefile
*/

__编译命令__

build -a X64 -p HwAppTest\HwAppTest.dsc -m HwAppTest\EfiMain.inf -t VS2019
注意事项：dsc文件中，即使只有注释中有中文，也是不行的，basetool会解析失败

如果.c文件中有中文，注意dsc文件中buildoptions需要添加/utf-8选项