%% ��ȡ��Ƶ
% video_file='��������.flv';
video_file='D:\Desktop\�½��ļ���\�½��ļ���\��13��.����ֵ�ֽ�SVD��ͼ�δ���\�������������\Ѹ����Ƶת����ת�������������.mp4';
video=VideoReader(video_file);  
frame_number = video.NumberOfFrames; %��Ƶ����֡��
%512֡
%% ����ͼƬ
for i=1:30:frame_number   % ������ʾ����ÿ30֡������һ�Σ����ÿһ֡��ȫ������Ļ���Ҫ���ѵ�ʱ��ܳ���
    image_name=strcat('D:\Desktop\�½��ļ���\�½��ļ���\��13��.����ֵ�ֽ�SVD��ͼ�δ���\�������������\image_',num2str(i),'.jpg');
% % �Լ�����ʱ·��һ��Ҫ�ĳ��Լ��������ļ��е�·������ֱ�����ҵ�·���������ˣ����ܻᱨ��ġ�
    Photo=read(video,i);            %��������֡��ͼƬ����
    imwrite(Photo,image_name);      %��ͼƬ���浽ָ����λ��
end

% ע�⣺Matlab����Ƶ��Ҫ��ϸߣ������������Ĵ�������Ҫ�Ƚ���Ƶ���н���
% ��ʹ�õ���Ѹ����Ƶת����
% ����ʹ�� VideoReader/init (line 619)
% �޷�ȷ������ı��������
% video�еĶ��󽲽⣺https://blog.csdn.net/marleylee/article/details/77770860