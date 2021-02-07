#include<stdio.h>
#include<stdlib.h>
int superset[20],supersetsize=0,
setA[20],setAsize=0,
setB[20],setBsize=0,
bitstringA[20],bitstringB[20],bitstringunion[20],bitstringintersection[20],bitstringdifference[20];
int isbitstringready=0;
void getset(int arr[],int setsize);
void processchoice(choice);
void printallset();
void printset(int arr[],int size);
void generateandprintbitstrings();
void generatbitstring(int arr[],int size,int bitstringarray[]);
int search(int arr[],int arrsize,int elem);
int checkbitstringstatus();
void setunion(int arr1[],int arr2[]);
void setintersection(int arr1[],int arr2[]);
void setdifference(int arr1[],int arr2[]);
void printsetoperationresult(int arr[]);
void printbitstringasset(int arr[]);
int checkbitstringstatus();

int main(){
    int choice=0;
    system("class");
    do{
        printf("/n======================/n");
        printf("1.Enter Universal set/n");
        printf("2.Enter set A/n");
        printf("3.Enter set B/n");
        printf("4.Generate bitstrings/n");
        printf("5.union/n");
        printf("6.intersection/n");
        printf("7.difference/n");
        printf("8.print sets/n");
        printf("===============/n");
        printf("Enter choice");
        scanf("%d",&choice);
        processchoice(choice):
    }while(choice!=9);
    return 0;
}

void processchoice(int choice){
    switch (choice){
        case 1:
        printf("Enter the supersetsize");
        scanf("%d",&supersetsize);
        getset(superset,supersetsize);
        break;
    
    case 2:
    printf("Enter the setAsize);
    scanf("%d",&setAsize);
    getset(setA,setAsize);
    break;
    case 3:
    printf("Enter the setBsize);
    scanf("%d",&setBsize);
    getset(setB,setBsize);
    break;
    case 4:
    printf("generatbitstring/n");
    generateandprintbitstrings();
    break;
    case 5:
    printf("set union/n");
    if(checkbitstringstatus()==1){
        setunion(bitstringA,bitstringB);
        printsetoperationresult(bitstringunion);
    }
    break;
    case 6:
    printf("set intersection/n");
    if(checkbitstringstatus()==1){
        setintersection(bitstringA,bitstringB);
        printsetoperationresult(bitstringintersection);
    }
    break;
    case 7:
    printf("set difference/n");
    if(checkbitstringstatus()==1){
        setdifference(bitstringA,bitstringB);
        printsetoperationresult(bitstringdifference);
    }
    break;
    case 8;
    printallsets();
    break;
    
}
void printsetoperationresult(int arr[]){
    printf("/nunion operation(bitstring):";
    printset(arr,supersetsize);
    printf(:/noperation result:");
    printbitstringasset(arr);
}
void printbitstringasset(int arr[]){
    int isFirstOutputDoneFlag=0;
    int i=0;
    print("{");
    for(i=0;i<supersetsize;i++){
        if(arr[i]==1){
              if(i!=0 && isFirstOutputDoneFlag==1){
                  printf(","");
              }
              printf("%d",superset[i]);
              isFirstOutputDoneFlage=1;
        }
           printf("}");
    }
    void setunion(int arr1[],int arr2[]){
        int i;
        for(i=0;i<supersetsize;i++){
            bitstringunion[i]=arr1[i]arr2[i];
        }
    }

 void setintersection(int arr1[],int arr2[]){
        int i;
        for(i=0;i<supersetsize;i++){
            bitstringintersection[i]=arr1[i]&arr2[i];
        }
    void setintersection(int arr1[],int arr2[]){
        int i;
        for(i=0;i<supersetsize;i++){
            printf("%d",!arr2[i]);
            bitstringintersection[i]=arr1[i]&(!arr2[i]);
        }
        int checkbitstringstatus(){
            if(isbitstringready==0){
                printf("/n Generate Bit String first!");
                return 0;
            }
            return 1;
        }
        void getset(int arr[],int setsize){
            int i;
            printf("/nEnter set/n");
            for(i=0;i<setsize;i++){
                scanf("%d"&arr[i]);
            }
        }
        void printAllsets(){
            printf("/nsuper set:")
            printset(superset,supersetsize);
            printf("set A:")
            printf(setA,setAsize);
            printf("set B");
            printset(setB,setBsize);
        }
        void printset(int arr[],int size){
              int i;
              printf("{")
              for(i=0,i<size;i++){
                  printf("%d",arr[i]);
                  if(i!=size-1){
                      print(",");
                  }
              }
              printf("}/n")
        }
        void generateandprintbitstrings(){
            int i;
            for(i=0;i<supersetsize;i++){
                bitstringA[i]=0;
                bitstringB[i]=0;
                bitstringunion[i]=0;
                bitstringintersection[i]=0;
                bitstringdifference[i]=0;
            }
            generatebitstring(setA,setAsize,bitstringA);
            generatebitstring(setB,setBsize,bitstringB);
            printf("/nset A bit string representation : ");
            printset(bitstringA,supersetsize)
             printf("/nset B bit string representation : ");
            printset(bitstringB,supersetsize)
            isbitstringready=1;
         }
         void generatebitstring(int arr[],int size,int bitstringarray[]){
             int i;
             for(i=0;i<size;i++){
                 int pos=search(superset,supersetsize,arr[i]);
                 if(pos>=0){
                     bitstringarray[pos]=1;
                 }
             }
         }
         int search(int arr[],int arrsize,int elem){
             int i;
             for(i=0;i<arrsize;i++){
                 if(arr[i]==elem)
                  return i;
             }
             return -1;
         }

   