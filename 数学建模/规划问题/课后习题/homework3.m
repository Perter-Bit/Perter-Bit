%% 作业三：非线性规划的求解
clear;clc
A=[-1 -2 0];   b=-1;  % 线性不等式约束
x0 = [1 0 1];  % 初始值
lb = [0 -inf -inf];  % 下界
[x,fval] = fmincon(@myfun,x0,A,b,[],[],lb,[],@nonfun11)
fval = -fval

% 先使用蒙特卡罗算法确定初始值，然后再进行计算
N = 1000000;
x1 = unifrnd(0,3,N,1);   % x1在0~3之间均匀分布
x2 = unifrnd(-8,7,N,1);  % x2在-8~7之间均匀分布
x3 = 2-x1.^2;   % x1^2 + x3 = 2, 注意这里要用“.^”，表示每个元素分别平方
fmax=-inf; % 初始化函数f的最大值为负无穷（后续只要找到一个比它大的我们就对其更新）
for i=1:N
    x = [x1(i), x2(i), x3(i)];  %构造x向量, 这里千万别写成了：x =[x1, x2, x3]
    if (x(1)+2*x(1)^2+x(2)+2*x(2)^2+x(3)-10<=0) & (x(1)+x(1)^2+x(2)+x(2)^2-x(3)-50<=0) & (2*x(1)+x(1)^2+2*x(2)+x(3)-40<=0) & (x(1)+2*x(2)>=1)   % 判断是否满足条件
        result =2*x(1)+3*x(1)^2+3*x(2)+x(2)^2+x(3) ;  % 如果满足条件就计算函数值
        if  result  > fmax  % 如果这个函数值大于我们之前计算出来的最大值
            fmax = result;  % 那么就更新这个函数值为新的最大值
            x0 = x;  % 并且将此时的x1 x2 x3更新为初始值
        end
    end
end
disp('蒙特卡罗算法选取的初始值为：'); disp(x0)
[x,fval] = fmincon(@myfun,x0,A,b,[],[],lb,[],@nonfun11)
fval = -fval