#include <stdio.h>
int main() {
    int n,i,a[100],x,found=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(a[i]==x){
            found=1;
            break;
        }
    }
    if(found)
        printf("Found");
    else
        printf("Not Found");
    return 0;
}
