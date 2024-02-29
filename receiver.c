#include<stdio.h>
#include<sys/msg.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<string.h>

int main()
{
	key_t key;
	char buf[50];
	char s1[100];
	int msgid;

        do{
	key=1010;
	msgid = msgget(key,0666|IPC_CREAT);
	msgrcv(msgid,&buf,sizeof(buf),0,0);
	printf("Received message is :%s\n",buf);
	//key++;
        }while(strcmp(buf,"bye"));
	printf("Data read successfully\n");
	return 0;
}
	





















