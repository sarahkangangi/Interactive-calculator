#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result=0, inputnumber ,aa;
    char operatorl[5],strl[5]="add";
    printf("operations:add,mult,sub,div\n");
    do{

      printf("input operation\n");
      scanf("%s",operatorl);
      printf("input number\n");
      scanf("%d",&inputnumber);
      printf("oper=%s strl=%s\n",operatorl,strl);
      printf("input number=%d\n",inputnumber);
      aa=strcmp(operatorl, "add");
      printf("aa=%d\n",aa);
      if(strcmp(operatorl,"add")==0)
      result=result+inputnumber;

      if(strcmp(operatorl,"multi")==0)
        result=result*inputnumber;
      if(strcmp(operatorl,"sub")==0)
        result=result-inputnumber;
        if(strcmp(operatorl,"div")==0)
        result=result/inputnumber;
        printf("result=%d\n",result);

    }while (operatorl!="exit");

    return 0;
}
