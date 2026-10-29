#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

int main(){
    int ch;
    bool idx_word = 0;
    long long letter_cnt = 0;
    long long word_cnt = 0;

    printf("请输入文本：\n");

    while((ch = getchar()) != EOF){
        
        //判断空格
        if(!isspace(ch)){
            
            //判断新单词
            if(!idx_word){
                idx_word = 1;
                word_cnt++;
            }

            //判断字母
            if(isalpha(ch)){
                letter_cnt++;
            }

        }else{
            idx_word = 0;
        }
    }


    if(word_cnt == 0){
        printf("没有输入。\n");
    }else{
        double average = (double) letter_cnt / word_cnt;

        printf("单词数：%lld\n",letter_cnt);
        printf("字母数：%lld\n",word_cnt);
        printf("平均每个单词的字母数为：%lf\n",average);

    }
    return 0;
}