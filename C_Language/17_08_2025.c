#include <stdio.h>
int main()
{
  printf("welcome SAI BALAJI\n AMEERPET-HYD\n\n");
  int n,qut,price,bill = 0;

  printf("1. Tea -10/-\n 2. Cofee/boost/milk/water bottal 20/- \n 3. idly/bonda/upma/poha/plain_dosa 30/-\n 4. sambar idly/onion/masal dosa/wada/poori 40/- \n 5. sambar_wada/veg biryani/paneer dosa 50/- \n 6. bill \n 7. cancel \n 8. close \n");
abc:
  printf("Enter ur option : ");
  scanf("%d", &n);
  if (n < 9)
  {
    switch (n)
    {
    case 1:
      printf("Tea -10/-\n");
      price = 10;
      goto calc;
    case 2:
      printf("Cofee/boost/milk/water bottal 20/-\n");
      price = 20;
      goto calc;
    case 3:
      printf("idly/bonda/upma/poha/plain_dosa 30/-\n");
      price = 30;
      goto calc;
    case 4:
      printf("sambar idly/onion/masal dosa/wada/poori 40/-\n");
      price = 40;
      goto calc;
    case 5:
      printf("sambar_wada/veg biryani/paneer dosa 50/-\n");
      price = 50;
      goto calc;
    calc:
      printf("Enter the quantity : ");
      scanf(" %d", &qut);
      bill += price * qut;
      goto abc;
    case 6:
      if (bill > 0)
      {
        printf("your bill is : %d", bill);
        break;
      }
      else
      {
        printf("something buy then we will give bill: ");
        goto abc;
      }

    case 7:
      bill = 0;
      goto abc;
      break;
    case 8:
      printf("that is close now :  hava a nice day");
      break;
    }
  }
  else
  {
    printf("enter invailid number : ");
    goto abc;
  }

  return 0;
}