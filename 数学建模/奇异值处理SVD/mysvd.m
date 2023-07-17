function [compress_A] = mysvd(A, ratio)
    % �������ã�ʹ������ֵ�ֽ⽫����Aѹ����ָ������������
    % �������
    %     A��Ҫѹ����m*nά�ľ���
    %     ratio��Ҫ����ԭ���������������100%��ʾ��ѹ����
    % ������� 
    %     compress_A: ѹ����ľ���
    [U,S,V] = svd(A);   % U:m*m         S��m*n      V �� n*n
    eigs = diag(S);  % �õ�S�����Խ���Ԫ�أ�������A������ֵ�������䱣�浽��������
    SUM = sum(eigs);  % ������������ֵ���ܺ�
    temp = 0;   % �½���ʱ���������������ѭ��
    for  i = 1: length(eigs)  % ѭ��
        temp =temp + eigs(i);  % ÿѭ��һ�Σ��͸���temp��ֵΪԭ����tempֵ+��������һ������ֵ
        if (temp/SUM) > ratio  % ������ڵı���������ratio,���˳�ѭ��
            break
        end
    end
    disp(['ѹ������ԭ����ı�������Ϊ��',num2str(roundn(100*temp/SUM,-2)),'%'])  %roundn(x,-2)�ɽ�x�������뵽С�������λ
    compress_A= U(:,1:i)*S(1:i,1:i)*V(:,1:i)';
end