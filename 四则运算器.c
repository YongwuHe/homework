#include<stdio.h>
#include<time.h>


int main(){
    srand(time(NULL));
    int i,j,k,n,d[10],sl;
    float ans,a[200],b[200],c[200];
    char fuhao[10],fuhao2;
    n=rand()%40+30;
    printf("此次共有%d道题\n",n);
    printf("是否显示结果?是请输入1，否请输入0\n");
    scanf("%d",&sl);

    for(i=0;i<n;i++){
        a[i]=rand()%100;
        b[i]=rand()%100;
        c[i]=rand()%100;

    }
    for(i=0;i<n;i++){
        for(j=0;j<2;j++){
        k=rand()%5;
        if(k==0){
            fuhao[j]='+';
            //fuhao2=' ';
            }
        else if(k==1){
            fuhao[j]='-';
            //fuhao2=' ';
            }
        else if(k==2){
            fuhao[j]='x';
            //fuhao2=' ';
        }
        else if(k==3){
            fuhao[j]='/';
           // fuhao2=' ';
            }
        }
        if((fuhao[0]=='/' && b[i]==0)|| (fuhao[1]=='/' && c[i]==0)){
            i=i-1;
            continue;
        }
        else{
            if(fuhao[0]=='+'){
                if(fuhao[1]=='+')
                    ans=a[i]+b[i]+c[i];
                else if(fuhao[1]=='-')
                    ans=a[i]+b[i]-c[i];
                else if(fuhao[1]=='x')
                    ans=a[i]+b[i]*c[i];
                else ans=a[i]+b[i]/c[i];
            }
            else if(fuhao[0]=='-'){
                if(fuhao[1]=='+')
                    ans=a[i]-b[i]+c[i];
                else if(fuhao[1]=='-')
                    ans=a[i]-b[i]-c[i];
                else if(fuhao[1]=='x')
                    ans=a[i]-b[i]*c[i];
                else ans=a[i]-b[i]/c[i];
            }
            else if(fuhao[0]=='x'){
                if(fuhao[1]=='+')
                    ans=a[i]*b[i]+c[i];
                else if(fuhao[1]=='-')
                    ans=a[i]*b[i]-c[i];
                else if(fuhao[1]=='x')
                    ans=a[i]*b[i]*c[i];
                else ans=a[i]*b[i]/c[i];
            }
            else{
                if(fuhao[1]=='+')
                    ans=a[i]/b[i]+c[i];
                else if(fuhao[1]=='-')
                    ans=a[i]/b[i]-c[i];
                else if(fuhao[1]=='x')
                    ans=a[i]/b[i]*c[i];
                else ans=a[i]/b[i]/c[i];
            }

        }
        if(ans<0 || ans>100){
            i=i-1;
            continue;
        }
        else{

            if(sl==1)
            //if(a[i]<10) printf("%.0f%c%.0f%c%.0f  =%.2f\n",a[i],fuhao[0],b[i],fuhao[1],c[i],ans);
                printf("%.0f%c%.0f%c%.0f = %.2f\n",a[i],fuhao[0],b[i],fuhao[1],c[i],ans);
            else if(sl==0)
                printf("%.0f%c%.0f%c%.0f =\n",a[i],fuhao[0],b[i],fuhao[1],c[i]);

        }
    }

}
