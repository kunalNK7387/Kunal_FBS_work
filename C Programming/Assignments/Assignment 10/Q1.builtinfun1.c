void main() {
	char str1[]="Apple";
	char str2[]="Orangeapple";
	printf("%s\n",str1);
	printf("%s\n",str2);
//first fun (strlen)
	int a=strlen(str1);
	printf("1st str %d\n",a);

//2nd fun (strcpy)
	char str3[100];
	strcpy(str3,str2);
	printf("cpy: %s\n",str3);
//3rd fun (strncpy)
	char str4[100];
	strncpy(str4,str3,4);
	printf("string 4 : %s\n",str4);
//4th fun (strcat()
	strcat(str1,"only");
	printf("strcat:%s\n",str1);
//5th fun (strncat())
	strncat(str1,"only",3);
	printf("strncat:%s\n ",str1);
//6th fun (strcmp())
	int c=strcmp(str1,str2);
	printf("strcmp:%d\n ",c);
//7th fun (strncmp())
	int d=strncmp(str1,str2,3);
	printf("strncmp:%d\n ",c);
//8th fun (strchr())
	char *ptr;
	ptr=strchr(str2,'a');
	printf("strchr:%s\n",ptr);
//9th fun (strrchr())
	char *ptr1;
	ptr1=strrchr(str2,'p');
	printf("strrchr:%s\n",ptr1);
//10th fun (strstr())
	char str5[]="yellowcolourdark";
	char *ptr2;
	ptr2=strstr(str5,"colour");
	printf("strrchr:%s\n",ptr2);
//11th fun (strpbrk())
	char str6[]="sun";
	char str7[]="can";
	char *ptr3=strpbrk(str6,str7);
	printf("strpbrk:%s\n",ptr3);
//12th fun (strspn())
	char stra[] = "123abc";
	char strb[] = "1234567890";
	int count =strspn(stra,strb);
	printf("strspn %s :%d\n",stra,count);
//13th fun (strcspn())
	int count1 =strspn("abc123","123");
	printf("strcspn :%d\n",count1);
//14th fun (strtok())
	char str8[]="moon,sun,earth";
	char *token=strtok(str8,",");
	printf("strtok :%s \n",token);
//15th fun (memset())
	char str[100] = "sunhot";
	memset(str, '.', 5);
	printf("memset:  %s\n", str);
//16th fun (memcpy())
	char stre[50]="Appleisred";
	char strd[50];
	memcpy(strd,stre,5);
	printf("memcpy:  %s\n", strd);
//17th fun (memcmp())
	int result = memcmp("abc", "abd", 3);
	printf("memcmp: %d\n", result);
//18th fun (memmove())
	char str9[] = "abcdef";
	memmove(str9+2,str9, 4);
	printf("memmove :%s\n", str9);
//19th fun (strdup())
	char *org = "green";
	char *copy = strdup(org);
	printf("strdup: %s\n", copy);
//20th fun (strxfrm())
	char src[] = "abc";
	char dest[20];
	strxfrm(dest, src, 20);
	printf("strxfrm: %s\n", dest);

}