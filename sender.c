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
	printf("Enter the message :");
	gets(buf);
        msgsnd(msgid,&buf,sizeof(buf),0);
	//key++;
        }while(strcmp(buf,"bye"));
	printf("Data written successfully\n");
	return 0;
}
	





















