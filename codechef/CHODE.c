#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_SIZE 150001

struct Alph_count_pair{
    int count;
    char c;
};

int get_len(char *str){
    int len = 0;
    while(str[len] != '\0')
        ++len;
    return len;
}

int is_alphabet(char c){
    return (('a' <= c && c <= 'z') ||
            ('A' <= c && c <= 'Z'));
}

int is_uppercase(char c){
    return ('A' <= c && c <= 'Z');
}

char get_uppercase(char c){
    if('a' <= c && c <= 'z')
        return c - 'a' + 'A';
    return c;
}

char get_lowercase(char c){
    if('A' <= c && c <= 'Z')
        return c - 'A' + 'a';
    return c;
}

int get_lowercase_idx(char c){
    if('A' <= c && c <= 'Z')
        return c - 'A';
    else
        return c - 'a';
}

int get_pos_from_freq_count(char c, struct Alph_count_pair *f){
    for(int i = 0; i < 26; ++i)
        if(f[i].c == c)
            return i;
    return 0;
}

void initialize(struct Alph_count_pair *f){
    for(int i = 0; i < 26; ++i){
        f[i].count = -1;
        f[i].c = 'a' + i;
    }
    return ;
}

int compFun(const void *elm1, const void *elm2){
    struct Alph_count_pair e1 = *(struct Alph_count_pair *)elm1;
    struct Alph_count_pair e2 = *(struct Alph_count_pair *)elm2;
    return e1.count - e2.count;
}

int main(void){
    int t;
    char s[MAX_STRING_SIZE];
    char freq_seq[27];
    struct Alph_count_pair freq_count[26];
    scanf("%d", &t);
    while(t--){
        initialize(freq_count);
        scanf("%s", freq_seq);
        freq_seq[26] = '\0';
        int i = 0;
        char input_c;
        scanf(" %[^\n]s", s);
        int str_len = get_len(s);
        for(int i = 0; i < str_len; ++i){
            if(is_alphabet(s[i])){
                int idx = get_lowercase_idx(s[i]);
                if(freq_count[idx].count == -1)
                    freq_count[idx].count = 1;
                else
                    ++freq_count[idx].count;
            }
        }
        qsort(freq_count, 26, sizeof(struct Alph_count_pair), compFun);
        for(int i = 0; i < str_len; ++i){
            if(is_alphabet(s[i])){
                if(is_uppercase(s[i])){
                    int pos = get_pos_from_freq_count(get_lowercase(s[i]), freq_count);
                    s[i] = get_uppercase(freq_seq[pos]);
                }
                else{
                    int pos = get_pos_from_freq_count(s[i], freq_count);
                    s[i] = freq_seq[pos];
                }
            }
        }
        printf("%s\n", s);
    }
    return 0;
}
