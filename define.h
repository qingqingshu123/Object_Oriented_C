#define offset_of(type,member)\
((unsigned long)(&(((type*)0)->member)))
//������������ڽṹ���е�ƫ����,"ȡλ�ڵ�ַ0�Ľṹ��type�ĳ�Աmember�ĵ�ַ".
//����ֻ��ȡmember�ĵ�ַ�������Ƿ���member�����ݣ���˲����ᴥ�������쳣��
//�ѽṹ�����ʼλ����Ϊ0���õ��ĵ�ַ����member�ڽṹ���ڵ�ƫ����
//���ѵ�ֵַת����unsigned long����member�����ƫ����(c�й涨ָ���ֵ����
//һ��unsigned long���͵�������sizeof(void*) == sizeof(unsigned long))��

#define container_of(ptr, type, member) \
((type*)((unsigned long)(ptr) - offset_of(type, member)))
//ȡ�õ�ǰָ��member��ָ��ptr����ȥmember�����ƫ�������õ��ľ��ǽṹ��type����ʼλ��




struct shape_data
{
	const char*name;
};

struct triangle_data 
{
	int a,b,c;
};
struct Circle_data
{
	int r;
};