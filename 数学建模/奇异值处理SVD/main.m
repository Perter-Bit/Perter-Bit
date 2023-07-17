clear,clc; 
folder_name = 'D:\Desktop\�½��ļ���\�½��ļ���\��13��.����ֵ�ֽ�SVD��ͼ�δ���\�������������\��«�����ֵ�'; 
dirOutput=dir(fullfile(folder_name, '*.jpg'));  
%fullfile�����ɸ���ָ�����ļ��к��ļ��������������ļ�·����
%dir����������: ����ָ��·���Ľṹ�����͵����顣������ÿһ��Ԫ���Խṹ�����ʹ洢��ÿ�����ļ�����Ϣ���ļ���������ʱ��ȣ���
files={dirOutput.name};  % �������е��ļ������浽һ��Ԫ��������
n = length(files);  % ͼƬ������
ratio = 0.9;  % Ҫ��������������Ϊ90%
for i = 1:n 
    disp('---------------------------------------------------------------------------------------------')
    photoname = files(i);   % ע���ʱ��photoname��һ��cell�ַ���������Ҫת��Ϊ�ַ���
    % �������ֱ�Ӱ����cell���͵ı��������ݵ�������������Ϊstring����ʹ�ã��ͻ��������
    name = photoname{1};  %ֱ������ȡ��һ��Ԫ�ؾͿ�����~cell������ȡԪ��ʹ�ô�����
    photo_address = fullfile(folder_name, name);  %ͼƬ�ľ��Ե�ַ
    disp(photo_address)
    save_address = fullfile(folder_name, strcat('compress_',name));  % ѹ�����ļ��ı����ַ
    photo_compress(photo_address, save_address, ratio)
    disp('---------------------------------------------------------------------------------------------')
end