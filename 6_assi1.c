//Accept three dimensions length (l), breadth(b) and height(h) of a cuboid and print surface area and volume.
 //(Hint: surface area=2(lb + lh +bh), volume = lbh)*/

 #include<stdio.h>
 int main()
 {
     int b,h,area,volume;

    printf("Enter a breadth");
    scanf("%d",&b);

     printf("Enter a height");
    scanf("%d",&h);

    area=2*(1*b+1*h+b*h);
    printf("\narea is %d",area);
    volume=1*b*h;
    printf("\nvolumn is %d",volume);
    return 0;

 }