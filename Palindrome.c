// 2019-ICTS-67  OS(p)-ICAE-2
#include<stdio.h> 
#include<unistd.h> 
#include<string.h> 
 int main(){
    int pi[2];
    int id=pipe(pi);
    if(id  == -1){
        printf("Pipe failed.\n");
        return 1;
    }
   
    int pid = fork();

    if( pid == 0){
        //child process
        
        char word[20];
        printf("Enter a Word : ");
        scanf("%s", &word);

        close(pi[0]); 
        write(pi[1], word, strlen(word)+1);
        close(pi[1]);


    }else{
        //parent process
        wait(NULL);
        char str[20];

        close(pi[1]);
        read(pi[0], str, strlen(str)+1);
        close(pi[0]);


int l = 0;
int h = strlen(str) - 1;
while (h > l){
if (str[l++] != str[h--]){
printf("Word is not a palindrome \n");
return;
}
}
printf("Word is palindrome \n");



       



    }

    return 0;


}