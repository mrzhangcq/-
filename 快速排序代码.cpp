#include <iostream>
#include <stdio.h>
using namespace std;
const int N = 100010;
void quick_sort(int q[],int l,int r)
{
	// 当数组为空时，q uick_sort( q, 0, len(q) - 1 )中l = 0, r = -1, 会出现 l > r的情况
    // 除了 一开始 需要判断 l > r, 以后 只需要 判断 l == r 即可
    if(l>=r)
	return;
    /*为什么i=l-1,j=r+1
因为后面的写法是先移动后判断，如果是i=l，j=r，则会漏判断左右边界；
为*/
int i=l-1,j=r+1;
int x=q[l];
while(i<j)
{
	do i++;while(q[i]<x);
	do j--;while(q[j]>x);
	if(i<j)
	swap(q[i],q[j]);//二者相遇之后 
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

