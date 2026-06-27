#nclude <stdio.h>

int main() {
  int c, frequency[52] = {0};

  while((c = getchar())!=EOF) {

    if(c >='A' && c <= 'Z'){
      frequency[c- 'A']++;
    }

    if(c >='a' && c <='z'){
      frequency[26+(c-'a')]++;
    }
  }

  for(int i=0; i<26; i++){ 
    printf("%c %d\n ",'A'+i, frequency[i]);
  }
1
  for(int i=0; i<26; i++){
    printf("%c %d\n  ",'a'+i, frequency[26+i]);
  }
  return 0;
}
