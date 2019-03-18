#include<iostream>
using namespace std;


struct ForwardList{
	int value;
	ForwardList *next;
	};

ForwardList *CreateNode(int value){

	ForwardList *wsk=new ForwardList;
	(*wsk).value=value;	//wsk->value=value
	wsk->next=NULL;
	return wsk;
}

void DestroyList(ForwardList *list){	
	while(list!=NULL){
		ForwardList *next2=list->next;
		delete list;
		list=next2;
	}
}



ForwardList *PushFront(ForwardList *list, int value){
	ForwardList *begin=new ForwardList;
	begin->value=value;
	begin->next=list;
	return begin;

}




void Append(ForwardList *list, ForwardList *tail){
	while(list->next!=NULL){
		list=list->next;
	}
	
	list->next=tail;
	



}	



int main(){


	
	ForwardList *list=NULL;
	
	list=CreateNode(0);
	for(int i=1; i<20; i++){
	
		Append(list, CreateNode(i));
	}
	
	
	for(ForwardList *p=list; p!=NULL; p=p->next){
		cout<<p->value<<endl;
	}	

		
	DestroyList(list);

	
}




