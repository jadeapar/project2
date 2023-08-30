//Jadea Parchment this program will state whether an input will be in order or not based on the provided conditions. 
#include <stdio.h>
#include <ctype.h> //To user character function tolower

int main() {
   char word,word2;
   int not_inorder=0;
   printf("Enter input:\n");
   word=getchar();
   //convert variable to lower case
   word=tolower(word);
   if((word2=getchar())!='\n')// if statement to input second variable and check if it is not equal to enter
   {
  //checking the in order conditions
       word2=tolower(word2);
       if((word>=97 && word<=122)&&(word2>=97&&word2<=122)){ //check if the variables are indeed lower case letters based on their position in the ASCII Table
           if(word>word2){ 
               not_inorder=1;
           }
           word=word2;
       }
      else{
           not_inorder=1;
       }
   }
   // if stament to allow the correct result to be outputed based on the previous conditions 
   if (not_inorder==0){
     printf("In order"); 
   }else if (not_inorder!=0){
       printf("Not in order");
   }
    return 0;
}
