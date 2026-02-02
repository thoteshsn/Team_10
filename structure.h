struct student
{
    char name[20];
    int age;
    float height;
};struct student p1[5];
void structuredemo()
{
    int n,age;
    printf("Enter the number of entity(name,age,height)\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d entity\n",(i+1));
        scanf("%s",&p1[i].name);
        scanf("%d",&p1[i].age);
        scanf("%f",&p1[i].height);
    }
    for(i=0;i<n;i++)
    {
        printf("Entered %d entity\n",(i+1));
        printf("Name:%s\n",p1[i].name);
        printf("age:%d\n",p1[i].age);
        printf("Height:%f\n",p1[i].height);
    }
    age=p1[0].age;
    for(i=0;i<n;i++)
    {
        if(age<p1[i].age)
        {
            age=p1[i].age;
        }
    }
    printf("Largest age =%d",age);
}

