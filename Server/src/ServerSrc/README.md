# 服务器代码 结构 drogon框架

基础 ：1.安装安装drogon框架里面安装步骤走

2. drogon 框架源码必须用生产模式去编译 

3.我们使用drogon脚手架创建的项目也必须 在生产模式下编译


> 项目目录

├── build   //项目编译目录
│ 
├── CMakeFiles          // 应该是没有用
├── CMakeLists.txt      //cmake 文件
├── config.json         // 配置文件 一般都是修改这里的文件
├── controllers         // 业务代码 也就是后台web controllers代码
├── filters             //
├── main.cc             //主要控制 controllers 和model的代码 启动代码
├── Makefile            //make 文件 一般没用
├── models              //orm 文件目录
│   └── model.json      // 配置目录
├── plugins
├── README.md
├── test
│   ├── CMakeLists.txt
│   ├── Makefile
│   └── test_main.cc
└── views
