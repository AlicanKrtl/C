struct nodeClass *startClass=NULL;
struct nodeStudent*temp=NULL,*temp1=NULL;
static double counter1=0, counter2=0,counter3=0,counter4=0;

struct nodeClass
{
	int classID;
	double classMidtermAverage;
	struct nodeClass *next;
	struct nodeStudent *studentPtr;
};

struct nodeStudent
{
	int studentID;
	int midterm;
	struct nodeStudent *next;
};

void insert(struct nodeClass **head,int id,int midterm){
    int classid = (((id/1000)-55)/11);

    if(startClass==NULL){
        startClass = (struct nodeClass*)malloc(sizeof(struct nodeClass));
        (*head)=(struct nodeClass*)malloc(sizeof(struct nodeClass));

        startClass->next=(*head);
        for(int i=0;i<4;i++){
            (*head)->classMidtermAverage=0;
            (*head)->studentPtr=(struct nodeStudent*)malloc(sizeof(struct nodeStudent));
            (*head)->studentPtr->next=(struct nodeStudent*)malloc(sizeof(struct nodeStudent));
            (*head)->studentPtr->next->next=NULL;
            (*head)->classID= i+1;
            if(i!=3){
                (*head)->next=(struct nodeClass*)malloc(sizeof(struct nodeClass));
                (*head)=(*head)->next;
                (*head)->next= NULL;
                }
            }
    }

    (*head)=startClass->next;
    for(int i=1;i<classid;i++){
        (*head)=(*head)->next;
    }
    temp = (*head)->studentPtr;
    while(temp->next->midterm>midterm){
        temp=temp->next;
    }
        if(temp->next->midterm != midterm){
            temp1 = temp->next;

            temp->next =(struct nodeStudent*)malloc(sizeof(struct nodeStudent));
            temp->next->studentID=id;
            temp->next->midterm=midterm;
            temp->next->next=temp1;
        }
        else{
                if(temp->next->studentID>id){
                    temp1 = temp->next;

                    temp->next =(struct nodeStudent*)malloc(sizeof(struct nodeStudent));
                    temp->next->studentID=id;
                    temp->next->midterm=midterm;
                    temp->next->next=temp1;
                }
            else{
                temp1 = temp->next->next;

                temp->next->next =(struct nodeStudent*)malloc(sizeof(struct nodeStudent));
                temp->next->next ->studentID=id;
                temp->next->next ->midterm=midterm;
                temp->next->next ->next=temp1;
            }
        }

    (*head) = startClass->next;
    while((*head)->classID!=classid){
        (*head)=(*head)->next;
    }
    switch (classid){
    case 1:
        (*head)->classMidtermAverage+= midterm;
        counter1 += 1;
        break;
    case 2:
        (*head)->classMidtermAverage+= midterm;
        counter2 += 1;
        break;
    case 3:
        (*head)->classMidtermAverage+= midterm;
        counter3 += 1;
        break;
    case 4:
        (*head)->classMidtermAverage+= midterm;
        counter4 += 1;
        break;
    }
}

void computeClassAverage(struct nodeClass *head){
    head = startClass ->next;
    if(counter1 != 0)
        head ->classMidtermAverage=head ->classMidtermAverage/counter1;
    else
        head ->classMidtermAverage=0;
    if(counter2 != 0)
        head->next->classMidtermAverage=head->next->classMidtermAverage/counter2;
    else
        head->next->classMidtermAverage=0;
    if(counter3 != 0)
        head ->next->next->classMidtermAverage=head ->next->next->classMidtermAverage/counter3;
    else
        head->next->next->classMidtermAverage=0;
    if(counter4 != 0)
        head ->next->next->next->classMidtermAverage=head ->next->next->next->classMidtermAverage/counter4;
    else
        head ->next->next->next->classMidtermAverage=0;
    }


void printAll(struct nodeClass *head){
    head =startClass ->next;
    for(int i=0;i<4;i++){
        printf("%d %.2f\n",i+1,head ->classMidtermAverage);
        struct nodeStudent (*students) =head ->studentPtr->next;
        while(students->next!=NULL){
            printf("%d ",students->studentID);
            printf("%d",students->midterm);
            printf ("\n");
            students=students->next;
        }
        head=head->next;
}
}

