% 思考题的参考答案
%% 首先将图转换为权重邻接矩阵D
n = 9;  %一共九个节点
D = zeros(n);  % 全部元素初始化为0, 等会你们就知道为什么这样设置啦
% 因为是无向图，所以权重邻接矩阵是一个对称矩阵
D(1,2) = 4; D(1,8) = 8; 
D(2,8) = 3; D(2,3) = 8;
D(8,9) = 1; D(8,7) = 6; 
D(9,7) = 6; D(9,3) = 2;
D(7,6) = 2; D(3,4) = 7; 
D(3,6) = 4; D(6,4) = 14;
D(4,5) = 9; D(6,5) = 10;
D = D+D';   % 这个操作可以得到对称矩阵的另一半
for i = 1:n
    for j = 1:n
        if (i ~= j) && (D(i,j) == 0)  
            D(i,j) = Inf;   % 将非主对角线上的0元素全部变为Inf
        end
    end
end

%% 调用Floyd_algorithm函数求解
[dist,path] = Floyd_algorithm(D)