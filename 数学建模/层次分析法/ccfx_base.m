%% Matlab基本的小常识
% (1)在每一行的语句后面加上分号(一定要是英文的哦;中文的长这个样子；)表示不显示运行结果
a = 3;
a = 5

% (2)多行注释:选中要注释的若干语句,快捷键Ctrl+R
% a = 3;
% a = 5

% (3)取消注释:选中要取消注释的语句,快捷键Ctrl+T
% 我想要取消注释下面这行
% 还有这一行

% clear可以清楚工作区的所有变量
clear

% clc可以清除命令行窗口中的所有文本,让屏幕变得干净
clc

% 所以大家在很多代码开头，都会见到:
clear;clc   % 分号也用于区分行。
% 这两条一起使用，起到“初始化”的作用，防止之前的结果对新脚本文件（后缀名是 .m）产生干扰。

%% 输出和输入函数(disp 和 input)
% disp函数
% matlab中disp()就是屏幕输出函数，类似于c语言中的printf（）函数
disp('我是清风，大家好鸭~~~记得投币关注我哦')
a = [1,2,3]    %同一行中间用逗号分隔，也可以不用逗号，直接用空格
a = [1 2 3]
disp(a)
% 注意，disp函数比较特殊，这里可要分号，可不要分号哦
disp(a);
% matlab中两个字符串的合并有两种方法
% （1）strcat(str1,str2……,strn) 
 strcat('字符串1','字符串2') 
% （2）[str 1,str 2，……, str n]或[str1  str2  ……  strn]
['字符串1'  '字符串2']
['字符串1','字符串2']
% 一个有用的字符串函数：num2str  将数字转换为字符串
c = 100
num2str(c)
disp(['c的取值为' num2str(c)])
disp(strcat('c的取值为', num2str(c)))

% input函数
% 一般我们会将输入的数、向量、矩阵、字符串等赋给一个变量，这里我们赋给A
A = input('请输入A：');
B = input('请输入B：')
% 注意观察工作区，并体会input后面加分号和不加分号的区别

%% sum函数
% （1）如果是向量（无论是行向量还是列向量），都是直接求和
E = [1,2,3]%行向量
sum(E)%6
E = [1;2;3]%列向量
sum(E)%6
% （2）如果是矩阵，则需要根据行和列的方向作区分
clc
E = [1,2;3,4;5,6]
a=sum(E); %按列求和(得到一个行向量）
disp(a);
a = sum(E,1)%按列求和 9 12
% a=sum(x,2); %按行求和(得到一个列向量）
a = sum(E,2)%3 7 11(列向量)
% a=sum(x(:));%对整个矩阵求和
a = sum(sum(E))%21
a = sum(E(:))%21

%% 基础：matlab中如何提取矩阵中指定位置的元素？
% （1）取指定行和列的一个元素（输出的是一个值）
clc;
A=[1 1 4 1/3 3;1 1 4 1/3 3;1/4 1/4 1 1/3 1/2;3 3 3 1 3;1/3 1/3 2 1/3 1];
A
A(2,1)%选择第二行第一个
A(3,2)
% （2）取指定的某一行的全部元素（输出的是一个行向量）
clc;A
A(2,:)
A(5,:)
% （3）取指定的某一列的全部元素（输出的是一个列向量）
clc;A
A(:,1)
A(:,3)
% （4）取指定的某些行的全部元素（输出的是一个矩阵）
clc;A
A([2,5],:)      % 只取第二行和第五行（一共2行）
A(2:5,:)        % 取第二行到第五行（一共4行）
A(2:2:5,:)     % 取第二行和第四行 （从2开始，每次递增2个单位，到5结束）
% 1:3:10
% 10:-1:1
A(2:end,:)      % 取第二行到最后一行
A(2:end-1,:)    % 取第二行到倒数第二行
% （5）取全部元素(按列拼接的，最终输出的是一个列向量)
clc;A
A(:)

%% size函数
clc;
A = [1,2,3;4,5,6]
B = [1,2,3,4,5,6]
size(A)%2 3
size(B)%1 6
% size(A)函数是用来求矩阵A的大小的,它返回一个行向量，第一个元素是矩阵的行数，第二个元素是矩阵的列数
[r,c] = size(A)
% 将矩阵A的行数返回到第一个变量r，将矩阵的列数返回到第二个变量c
r = size(A,1)  %返回行数
c = size(A,2) %返回列数

%% repmat函数
% B = repmat(A,m,n):将矩阵A复制m×n块，即把A作为B的元素，B由m×n个A平铺而成。
A = [1,2,3;4,5,6]
B = repmat(A,2,1)
B = repmat(A,3,2)

%% Matlab中矩阵的运算
% MATLAB在矩阵的运算中，“*”号和“/”号代表矩阵之间的乘法与除法(A/B = A*inv(B))
A = [1,2;3,4]
B = [1,0;1,1]
A * B%矩阵乘法
inv(B)  % 求B的逆矩阵
B * inv(B)
A * inv(B)
A / B

% 两个形状相同的矩阵对应元素之间的乘除法需要使用“.*”和“./”
A = [1,2;3,4]
B = [1,0;1,1]
A .* B
A ./ B

% 每个元素同时和常数相乘或相除操作都可以使用
A = [1,2;3,4]
A * 2
A .* 2%与上一个相同
A / 2 
A ./ 2

% 每个元素同时乘方时只能用 .^
A = [1,2;3,4]
A .^ 2%每个元素同时求乘方
A ^ 2%与下面的表达式相同
A * A

%% Matlab中求特征值和特征向量
% 在Matlab中，计算矩阵A的特征值和特征向量的函数是eig(A),其中最常用的两个用法：
A = [1 2 3 ;2 2 1;2 0 3]
% （1）E=eig(A)：求矩阵A的全部特征值，构成向量E。
E=eig(A)
% （2）[V,D]=eig(A)：求矩阵A的全部特征值，构成对角阵D，并求A的特征向量构成V的列向量。（V的每一列都是D中与之相同列的特征值的特征向量）
[V,D]=eig(A)

%% find函数的基本用法
% 下面例子来自博客：https://www.cnblogs.com/anzhiwu815/p/5907033.html 博客内有更加深入的探究
% find函数，它可以用来返回向量或者矩阵中不为0的元素的位置索引。
clc;X = [1 0 4 -3 0 0 0 8 6]
ind = find(X)
% 其有多种用法，比如返回前2个不为0的元素的位置：
ind = find(X,2)%1 3 注意matlab中元素的下标从1开始

%上面针对的是向量（一维），若X是一个矩阵（二维，有行和列），索引该如何返回呢？
clc;X = [1 -3 0;0 0 8;4 0 6]
ind = find(X)%以列向量的形式返回所有不是0元素的下标
% 这是因为在Matlab在存储矩阵时，是一列一列存储的，我们可以做一下验证：
X(4)%-3 一列一列的数数到第四个元素为止
% 假如你需要按照行列的信息输出该怎么办呢？
[r,c] = find(X)
[r,c] = find(X,1) %只找第一个非0元素


%% 矩阵与常数的大小判断运算
% 共有三种运算符：大于> ;小于< ;等于 ==  （一个等号表示赋值；两个等号表示判断）
clc
X = [1 -3 0;0 0 8;4 0 6]
X > 0%返回的是一个判断矩阵,矩阵对应位置上的元素大于0则为1，其他为0
X == 4%同理

%% 判断语句
% Matlab的判断语句，if所在的行不需要冒号，语句的最后一定要以end结尾 ；中间的语句要注意缩进。
a = input('请输入考试分数:')
if a >= 85  
    disp('成绩优秀')
elseif a >= 60 
    disp('成绩合格')
else
    disp('成绩挂科')
end


% % 注意：代码文件仅供参考，一定不要直接用于自己的数模论文中
% % 国赛对于论文的查重要求非常严格，代码雷同也算作抄袭
% % 视频中提到的附件可在售后群（购买后收到的那个无忧自动发货的短信中有加入方式）的群文件中下载。包括讲义、代码、我视频中推荐的资料等。
% % 关注我的微信公众号《数学建模学习交流》，后台发送“软件”两个字，可获得常见的建模软件下载方法；发送“数据”两个字，可获得建模数据的获取方法；发送“画图”两个字，可获得数学建模中常见的画图方法。另外，也可以看看公众号的历史文章，里面发布的都是对大家有帮助的技巧。
% % 购买更多优质精选的数学建模资料，可关注我的微信公众号《数学建模学习交流》，在后台发送“买”这个字即可进入店铺(我的微店地址：https://weidian.com/?userid=1372657210)进行购买。
% % 视频价格不贵，但价值很高。单人购买观看只需要58元，三人购买人均仅需46元，视频本身也是下载到本地观看的，所以请大家不要侵犯知识产权，对视频或者资料进行二次销售。
% % 如何修改代码避免查重的方法：https://www.bilibili.com/video/av59423231（必看）