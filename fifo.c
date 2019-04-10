#include<stdio.h>

int main()

{

int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11;
//for declearing diffierent cylinder number

int dis1,dis2,dis3,dis4,dis5,dis6,dis7,dis8,dis9,dis10,dis11;
//distance between two cylinders

//valuesof cylinder

x1=125;


x2=143;

x3=86;

x4=1470;

x5=913;

x6=1774;

x7=948;

x8=1509;

x9=1022;

x10=1750;

x11=130;

printf("previos request at cylinder number is %d \n",x1);

printf("currently serving a request at cylinder number is %d \n",x2);

dis1=x1-x2;

if(dis1>0)

{
dis1=dis1;
}


else
{
dis1=-dis1;
}

printf("distance between cylinder number 125 & 143 is %d \n",dis1);


dis2=x2-x3;

if(dis2>0)

{
dis2=dis2;
}

else

{
dis2=-dis2;
}

printf("distance between cylinder number 143 & 86 is %d \n",dis2);



dis3=x3-x4;

if(dis3>0)

{
dis3=dis3;
}

else

{
dis3=-dis3;
}

printf(" distance between cylinder number 86 & 1470 is %d \n",dis3);


dis4=x4-x5;

if(dis4>0)

{
dis4=dis4;
}

else

{
dis4=-dis4;
}

printf(" distance between cylinder number 1470 & 913 is %d \n",dis4);



dis5=x5-x6;


if(dis5>0)

{
dis5=dis5;
}

else

{
dis5=-dis5;
}

printf("distance between cylinder number 913 & 1774 is %d \n",dis5);




dis6=x6-x7;

if(dis6>0)

{
dis6=dis6;
}

else

{
dis6=-dis6;
}

printf("distance between cylinder number 1774 & 948 is %d \n",dis6);




dis7=x7-x8;

if(dis7>0)

{
dis7=dis7;
}

else

{
dis7=-dis7;
}

printf("distance between cylinder number 948 & 1509 is %d \n",dis7);



dis8=x8-x9;

if(dis8>0)

{
dis8=dis8;
}

else

{
dis8=-dis8;
}

printf("distance between cylinder number 1509 & 1022 is %d \n",dis8);



dis9=x9-x10;

if(dis9>0)

{
dis9=dis9;
}

else

{
dis9=-dis9;
}

printf("distance between cylinder number 1022 & 1750 is %d \n",dis9);



dis10=x10-x11;

if(dis10>0)

{
dis10=dis10;
}

else

{
dis10=-dis10;
}

printf("distance between cylinder number 1750 & 130 is %d \n",dis10);


//printf("%d%d%d%d%d%d%d%d%d%d",dis1,dis2,dis3,dis4,dis5,dis6,dis7,dis8,dis9,dis10);


dis11=dis1+dis2+dis3+dis4+dis5+dis6+dis7+dis8+dis9+dis10;

printf("total distance using FIFO algorithm is %d",dis11);

return 0;

}








