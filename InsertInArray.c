void main()
{
    
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int b[n+1];

    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++)
    {
        printf("b[%d]: ",i);
        scanf("%d",&b[i]);
    }

    printf("\nArray: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

    int ele,inx;
    printf("Enter index: ");
    scanf("%d",&inx);
    printf("Enter element: ");
    scanf("%d",&ele);


    for(int i=n;i>inx;i--)
    {
        b[i]=b[i-1];
    }
    b[inx]=ele;
    
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",b[i]);
    }
    
}