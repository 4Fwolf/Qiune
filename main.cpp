#include <stdio.h>
int main(){
    const char *s="#include <stdio.h>int main(){const char *s=;printf(%.18s%c%.11s%c%c%.14s%c%s%c%c%c%c%.7s%c%.63s%c%.80s%c%c%.9s%c%s,s,10,s+18,10,9,s+29,34,s,34,59,10,9,s+44,34,s+51,34,s+114,10,9,s+194,10,s+203);return 0;}";
    printf("%.18s%c%.11s%c%c%.14s%c%s%c%c%c%c%.7s%c%.63s%c%.80s%c%c%.9s%c%s",s,10,s+18,10,9,s+29,34,s,34,59,10,9,s+44,34,s+51,34,s+114,10,9,s+194,10,s+203);

    return 0;
}
// quine квайн
