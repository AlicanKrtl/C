struct newNodeFB *temp_fb;
struct nodeGS*startnode_gs=NULL;
struct nodeFB *startnode_fb=NULL;
int counter=0;

struct nodeFB
{
	int id;
	int age;
	struct nodeFB *next;
};

struct nodeGS
{
	int id;
	struct nodeGS *next;
};

struct newNodeFB
{
	int id;
	int age;
	struct newNodeGS *next;
};

struct newNodeGS
{
	int id;
	struct newNodeFB *next;
};


void insertFB(struct nodeFB **ptr,int id,int age){
    if(startnode_fb==NULL){
        startnode_fb=(struct nodeFB*)malloc(sizeof(struct nodeFB));
        (*ptr)=(struct nodeFB*)malloc(sizeof(struct nodeFB));

        startnode_fb->next=(*ptr);

        (*ptr)->next=NULL;
        (*ptr)->id=id;
        (*ptr)->age=age;
        counter++;
    }
    else{
        (*ptr)=startnode_fb->next;
        counter++;
    while((*ptr)->next!=NULL){
        (*ptr)=(*ptr)->next;
    }
    (*ptr)->next=(struct nodeFB*)malloc(sizeof(struct nodeFB));
    (*ptr)->next->id=id;
    (*ptr)->next->age=age;
    (*ptr)->next->next=NULL;
}
}

void insertGS(struct nodeGS **ptr,int id){

    if(startnode_gs==NULL)
        {
        startnode_gs=(struct nodeGS *)malloc(sizeof(struct nodeGS));
        (*ptr)=(struct nodeGS *)malloc(sizeof(struct nodeGS));
        startnode_gs->next=(*ptr);
        (*ptr)->next=NULL;
        (*ptr)->id=id;

        }

    else{
        (*ptr)=startnode_gs->next;

        while((*ptr)->next!=NULL){
            (*ptr)=(*ptr)->next;
        }

        (*ptr)->next=(struct nodeGS*)malloc(sizeof(struct nodeGS));
        (*ptr)->next->id=id;
        (*ptr)->next->next=NULL;

}
(*ptr)=startnode_gs;

}


void printAll(struct newNodeFB *ptr){
    ptr=temp_fb;
    for(int i=0;i<counter;i++){
        printf("%d",ptr->id);
        printf(" %d",ptr->age);
        printf ("\n");
        printf("%d",ptr->next->id);
        printf ("\n");

        ptr=ptr->next->next;
    }
}

void createFinalList(struct newNodeFB **new_fb,struct nodeFB *fb_first,struct nodeGS *gs_first){

    gs_first=startnode_gs->next;
    fb_first=startnode_fb->next;
    (*new_fb) = (struct newNodeFB*)malloc(sizeof(struct newNodeFB));
    temp_fb = (*new_fb);
    for(int i = 0;i < counter;i++){
        (*new_fb)->id=fb_first->id;
        (*new_fb)->age=fb_first->age;
        (*new_fb)->next =(struct newNodeGS*)malloc(sizeof(struct newNodeGS));
        (*new_fb)->next->id=gs_first->id;

        if(i==counter-1){
            (*new_fb)->next->next=(struct newNodeFB*)malloc(sizeof(struct newNodeFB));
            (*new_fb)->next->next=NULL;
        }
        else{
            (*new_fb) ->next->next=(struct newNodeFB*)malloc(sizeof(struct newNodeFB));
            (*new_fb)=(*new_fb)->next->next;
            gs_first=gs_first->next;
            fb_first=fb_first->next;
        }
    }
}

void printGS(struct nodeGS*ptr){
    ptr=startnode_gs->next;
    struct nodeGS* gecici_gs;
    int assign1;
    for (int i=0;i<counter+1;i++){
        gecici_gs=ptr;

        while(gecici_gs->next!=NULL){
            if(gecici_gs->id < gecici_gs->next->id){
                assign1=gecici_gs->next->id;

                gecici_gs->next->id=gecici_gs->id;
                gecici_gs->id=assign1;
            }
            gecici_gs=gecici_gs->next;
        }
    }

    while(ptr!=NULL){
        printf("%d\n",ptr->id);
        ptr= ptr->next;
    }
    printf("\n");
}

void printFB(struct nodeFB *ptr){

    ptr=startnode_fb->next;
    struct nodeFB * gecici_fb;
    int assign1,assign2;
    for (int i=0;i<counter+1;i++){
        gecici_fb=ptr;

        while(gecici_fb->next!=NULL){
            if(gecici_fb->id > gecici_fb->next->id){
                assign1=gecici_fb->next->id;
                assign2=gecici_fb->next->age;

                gecici_fb->next->id=gecici_fb->id;
                gecici_fb->next->age=gecici_fb->age;

                gecici_fb->id=assign1;
                gecici_fb->age=assign2;
            }
            gecici_fb=gecici_fb->next;
        }
    }

    while(ptr!=NULL){
        printf("%d ",ptr->id);
        printf("%d\n",ptr->age );
        ptr= ptr->next;
    }
    printf("\n");

}


