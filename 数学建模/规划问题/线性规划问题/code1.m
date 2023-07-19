%% Matlab求解线性规划
% [x fval] = linprog(c, A, b, Aeq, beq, lb,ub, x0)  
% c是目标函数的系数向量，A是不等式约束Ax<=b的系数矩阵，b是不等式约束Ax<=b的常数项
% Aeq是等式约束Aeq x=beq的系数矩阵，beq是等式约束Aeq x=beq的常数项
% lb是X的下限，ub是X的上限，X是向量[x1,x2,...xn]' , 即决策变量。
% 迭代的初始值为x0（一般不用给）
% 更多该函数的用法说明请看讲义

%% 例题1
c = [-5 -4 -6]';  % 加单引号表示转置
% c = [-5 -4 -6];  % 写成行向量也是可以的，不过不推荐，我们按照标准型来写看起来比较正规
A = [1 -1 1;
        3 2 4;
        3 2 0];
b = [20 42 30]';   
lb = [0 0 0]'; 
[x fval] = linprog(c, A, b, [], [], lb)  % ub我们直接不写，则意味着没有上界的约束
% x =
%          0
%    15.0000
%     3.0000
% 
% fval =
%    -78


%% 例题2
c = [0.04 0.15 0.1 0.125]';  
A = [-0.03 -0.3 0 -0.15;
        0.14 0 0 0.07];
b = [-32 42]';
Aeq = [0.05 0 0.2 0.1];
beq = 24;
lb = [0 0 0 0]';
[x fval] = linprog(c, A, b, Aeq, beq, lb)
% x =
%          0
%   106.6667
%   120.0000
%          0
% 
% fval =
%     28

% 这个题可能有多个解，即有多个x可以使得目标函数的最小值为28（不同的Matlab版本可能得到的x的值不同，但最后的最小值一定是28）
% 例如我们更改一个限定条件：令x1要大于0（注意Matlab中线性规划的标准型要求的不等式约束的符号是小于等于0）
% x1 >0  等价于  -x1 < 0，那么给定 -x1 <= -0.1 (根据实际问题可以给一个略小于0的数-0.1)，这样能将小于号转换为小于等于号，满足Matlab的标准型
c = [0.04 0.15 0.1 0.125]';  
A = [-0.03 -0.3 0 -0.15;
        0.14 0 0 0.07
        -1 0 0 0];
b = [-32 42 -0.1]';
Aeq = [0.05 0 0.2 0.1];
beq = 24;
lb = [0 0 0 0]';
[x fval] = linprog(c, A, b, Aeq, beq, lb)
% x =
%     0.1000
%   106.6567
%   119.9750
%          0
%
% fval =
%    28.0000


%% 例题3
c = [-2 -3 5]';
A = [-2 5 -1;
          1 3 1];
b = [-10 12];
Aeq = ones(1,3);
beq = 7;
lb = zeros(3,1);
[x fval] = linprog(c, A, b, Aeq, beq, lb)
fval = -fval % 注意这个fval要取负号（原来是求最大值，我们添加负号变成了最小值问题）
% x =
%     6.4286
%     0.5714
%          0
% fval =
%   -14.5714
% fval =
%    14.5714


%% 多个解的情况
% 例如 ： min z = x1 + x2   s.t.  x1 + x2 >= 10
c = [1 1]';   
A = [-1 -1];
b = -10;
[x fval] = linprog(c, A, b)   % Aeq, beq, lb和ub我们都没写，意味着没有等式约束和上下界约束
% x有多个解时，Matlab会给我们返回其中的一个解

%% 不存在解的情况
% 例如 ： min z = x1 + x2   s.t.  x1 + x2 = 10 、 x1 + 2*x2 <= 8、 x1 >=0 ，x2 >=0 
c = [1 1]'; 
A = [1 2];
b = 8;
Aeq = [1 1];
beq = 10;
lb = [0 0]';
[x fval] = linprog(c, A, b, Aeq, beq, lb)  % Linprog stopped because no point satisfies the constraints.（没有任何一个点满足约束条件）