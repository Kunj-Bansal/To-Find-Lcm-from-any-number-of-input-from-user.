//To find lcm of from a set of finite input numbers
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    printf("How many numbers needs to be entered\n");
    scanf("%d",&num);//We Ask the user to enter the number of inputs he want to give 
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);//We take input and store in array of that length
        if(arr[i]<=0){
            printf("Wrong input\n");//We check if there is any negative input by the user as negative input will cause calculation error and lcm can't be found
            exit(1);
        }
        else 
        continue;
    }
    int max_val=arr[0];
    for(int j=0;j<num;j++){
        if(max_val<arr[j])//To make a more precise code for lcm, we calculate max_val using a very simple loop and if else statement. Its significance is elaborated below.
        max_val=arr[j];
        else
        continue;
    }
    int x=1;//In order to form a final for loop its limits are to be found the lower limit is found above and its upper limit is found as mltiplication of all numbers.
    for(int k=0;k<num;k++){
        x=x*arr[k];
    }
    int lcm=0;//Initialize value of lcm as 0 to overcome further error
    for(int m=max_val;m<=x;m++){//Lcm is atleast the maximm of all the numbers or above in all cases and cannot be smaller than the largest number. Thus loop starts from max_val.
        for(int l=0;l<num;l++){
            if(m%arr[l]==0){
            lcm=m;
            continue;
            }
            else{
            lcm=0;
            break;
            }
        }
        //2 loops are used to find lcm as first loop in order to find lcm value and second loop to check if (value) % (all inputs) equals 0 that is if value is multiple of inputs.
        if(lcm!=0){
            printf("Lcm is %d",m);//The if condition is true implies we got our value which is lowest common multiple and as soon as we find it we print it and exit it. 
                                  //Condition being false means atleast 1 inpt value doesn't satisfy or requirement and so the loop continues.
            exit(2);
        }
        else
        continue;
    }
    return 0;
}