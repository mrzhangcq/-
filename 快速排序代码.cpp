#include <iostream>
#include <stdio.h>
using namespace std;
const int N = 100010;
void quick_sort(int q[],int l,int r)
{
	// ������Ϊ��ʱ��q uick_sort( q, 0, len(q) - 1 )��l = 0, r = -1, ����� l > r�����
    // ���� һ��ʼ ��Ҫ�ж� l > r, �Ժ� ֻ��Ҫ �ж� l == r ����
    if(l>=r)
	return;
    /*Ϊʲôi=l-1,j=r+1
��Ϊ�����д�������ƶ����жϣ������i=l��j=r�����©�ж����ұ߽磻
Ϊ*/
int i=l-1,j=r+1;
int x=q[l];
while(i<j)
{
	do i++;while(q[i]<x);
	do j--;while(q[j]>x);
	if(i<j)
	swap(q[i],q[j]);//��������֮�� 
}
quick_sort(q,l,j);
quick_sort(q,j+1,r);
} 
int main(){
    int n;
    int a[N];
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
	{ 
        scanf("%d",&a[i]);
    }

    quick_sort(a,0,n-1);

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

