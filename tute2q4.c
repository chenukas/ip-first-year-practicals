//IT18206906

#include<stdio.h>

struct box{
	int length , height , width;
}box1 , box2 , box3 , box4 , box5;

int main()
{

	printf("Enter the first box length:\n");
	scanf("%d" , &box1.length);
	printf("Enter the first box height:\n");
	scanf("%d" , &box1.height);
	printf("Enter the first box width:\n");
	scanf("%d" , &box1.width);
	printf("Enter the second box length:\n");
	scanf("%d" , &box2.length);
	printf("Enter the second box height:\n");
	scanf("%d" , &box2.height);
	printf("Enter the second box width:\n");
	scanf("%d" , &box2.width);
	printf("Enter the third box length:\n");
	scanf("%d" , &box3.length);
	printf("Enter the third box height:\n");
	scanf("%d" , &box3.height);
	printf("Enter the third box width:\n");
	scanf("%d" , &box3.width);
	printf("Enter the fourth box length:\n");
	scanf("%d" , &box4.length);
	printf("Enter the fourth box height:\n");
	scanf("%d" , &box4.height);
	printf("Enter the fourth box width:\n");
	scanf("%d" , &box4.width);
	printf("Enter the fifth box length:\n");
	scanf("%d" , &box5.length);
	printf("Enter the fifth box height:\n");
	scanf("%d" , &box5.height);
	printf("Enter the fifth box width:\n");
	scanf("%d" , &box5.width);

	int volume1 = box1.length * box1.height * box1.width;
	int volume2 = box2.length * box2.height * box2.width;
	int volume3 = box3.length * box3.height * box3.width;
	int volume4 = box4.length * box4.height * box4.width;
	int volume5 = box5.length * box5.height * box5.width;

	printf("Box No\tLength\tHeight\tWidth\tVolume\n");
	printf("Box 1\t%d\t%d\t%d\t%d\n" , box1.length , box1.height , box1.width , volume1);
	printf("Box 2\t%d\t%d\t%d\t%d\n" , box2.length , box2.height , box2.width , volume2);
	printf("Box 3\t%d\t%d\t%d\t%d\n" , box3.length , box3.height , box3.width , volume3);
	printf("Box 4\t%d\t%d\t%d\t%d\n" , box4.length , box4.height , box4.width , volume4);
	printf("Box 5\t%d\t%d\t%d\t%d\n" , box5.length , box5.height , box5.width , volume5);	

	return 0;
}
