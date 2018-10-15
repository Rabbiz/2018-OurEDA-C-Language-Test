#include<stdio.h>
#include<stdlib.h>
// �˴�����������Լ���Ҫ��ͷ�ļ�

struct goodPeopleCard
{
	char name[20];    // �����˵����֣�Ӧ�ò������˵����ֳ���������Ȱɣ�
	char date[9];     // ���������ڣ����� 20180102��Ӧ�ò��ᵽ��Ԫ10000�껹�����˷����ɣ�
};

struct node
{
	struct goodPeopleCard* card;	// ָ��һ�����˿��ṹ��
	struct node * prev;				// ָ����һ�����
	struct node * next;				// ָ����һ�����
};

// �����������ֿ�ʼ
struct node* initCardList();
int insertCard(struct node* head, struct node* tail, int index, struct goodPeopleCard* newCard);
int deleteCardByNode(struct node* node);
int deleteCardByName(struct node* head, char* name);
int deleteCardByDate(struct node* head, char* date);
struct node* searchCardByName(struct node* head, char* name);
struct node* searchCardByDate(struct node* head, char* date);
void clear(struct node* head);
struct goodPeopleCard* pop_back();
void push_back(struct goodPeopleCard* newCard);
struct goodPeopleCard* pop_front();
void push_front(struct goodPeopleCard* newCard);
void printCard(struct goodPeopleCard* card);
// �����������ֽ���

// ������ɺ���ʵ�ֺ���� main ����
int main()
{

}


// �밴Ҫ��ʵ�����º���


/*
��������

����ֵ��˫�������ͷ���ָ��

����ִ�в���������ͷ����β���

����˵����
ͷ���� prev ָ�� NULL��next ָ��β���
β���� prev ָ��ͷ��㣬next ָ�� NULL
ͷβ���� card ��ָ�� NULL
*/
struct node* initCardList()
{
	
}

/*
����������ͷָ�� head������βָ�� tail������λ�� index���º��˿�ָ�� newCard

����ֵ��0����1��1�������ɹ���0�������ʧ�ܣ�index������С��

����ִ�в������� newCard ָ���װ�ɽ�㣬���뵽 index ָ����λ��

����˵����
index �����ɸ���Ϊ��ʱ��ͷ��ʼ���㣬Ϊ��ʱ��β��ʼ���㡣���������������
head <--> node1 <--> node2 <--> node3 <--> node4 <--> tail
index = 0 ���� node1 ��λ�ã� index = 1 ���� node2 ��λ�ã� index = -1 ���� node4 ��λ�ã�index = -2 ���� node3 ��λ��
�����Ҵ��� index = 1����������ͻ��Ϊ
head <--> node1 <--> newCardNode <--> node2 <--> node3 <--> node4 <--> tail
*/
int insertCard(struct node* head, struct node* tail, int index, struct goodPeopleCard* newCard)
{
	return 0;
}

/*
��������ɾ�����ָ��

����ֵ��0����1��1����ɾ���ɹ���0����ɾ��ʧ��

����ִ�в�������node��������������ɾ�������ͷŸý��ռ�õ������ڴ�

����˵����������ɾ��Ԥ����ͷβ��㡣����������ͷβ��㣬�򷵻�0��
*/
int deleteCardByNode(struct node* node)
{
	return 0;
}

/*
����������ͷָ�� head��Ҫɾ�������� name

����ֵ��0����1��1����ɾ���ɹ���0����û�ҵ�

����ִ�в��������׸����з���������Ϊname��node��������������ɾ�������ͷŸý��ռ�õ������ڴ�
*/
int deleteCardByName(struct node* head, char* name)
{
	return 0;
}

/*
����������ͷָ�� head��Ҫɾ�������� name

����ֵ��0����1��1����ɾ���ɹ���0����û�ҵ�

����ִ�в��������׸����з�������Ϊdate��node��������������ɾ�������ͷŸý��ռ�õ������ڴ�
*/
int deleteCardByDate(struct node* head, char* date)
{
	return 0;
}

/*
����������ͷָ�� head�������˵�����name

����ֵ���ú��˿����ڽ���ָ��

����ִ�в������������в����׸�����������Ϊname�ĺ��˿���㲢������ָ�롣���û�з��� NULL
*/
struct node* searchCardByName(struct node* head, char* name)
{
	return NULL;
}

/*
����������ͷָ�� head������������ date

����ֵ���ú��˿����ڽ���ָ��

����ִ�в������������в����׸�����ʱ��Ϊdate�Ľ�㲢������ָ�롣���û�з��� NULL
*/
struct node* searchCardByDate(struct node* head, char* date)
{
	return NULL;
}

/*
����������ͷָ�� head

����ֵ����

����ִ�в������������ֻ����ͷ��β
*/
void clear(struct node* head)
{

}

/*
����������ͷָ�� head

����ֵ����

����ִ�в�����ɾ��������������Ԥ����ͷ��β
*/
void destoryCardList(struct node* head)
{

}

/*
��������

����ֵ��ָ��һ�� goodPeopleCard ��ָ��

����ִ�в�������ȡ�������һ������еĺ��˿�ָ�룬����������ɾ��������

����˵�����������Ϊ�գ����� NULL
*/
struct goodPeopleCard* pop_back()
{
	return NULL;
}

/*
������ָ��һ�� goodPeopleCard ��ָ�� newCard

����ֵ����

����ִ�в�������һ���µĺ��˿�ָ���װ�ɽ�������������һ��λ��
*/
void push_back(struct goodPeopleCard* newCard)
{

}

/*
��������

����ֵ��ָ��һ�� goodPeopleCard ��ָ��

����ִ�в�������ȡ������ǰһ������еĺ��˿�ָ�룬����������ɾ��������

����˵�����������Ϊ�գ����� NULL
*/
struct goodPeopleCard* pop_front()
{
	return NULL;
}

/*
������ָ��һ�� goodPeopleCard ��ָ�� newCard

����ֵ����

����ִ�в�������һ���µĺ��˿�ָ���װ�ɽ���������ĵ�һ��λ��
*/
void push_front(struct goodPeopleCard * newCard)
{

}

/*
������ָ��һ�� goodPeopleCard ��ָ�� card

����ֵ����

����ִ�в���������ú��˿��е���Ϣ
*/
void printCard(struct goodPeopleCard* card)
{
	printf("�����ˣ�%s\t�������ڣ�%s\n", card->name, card->date);
}