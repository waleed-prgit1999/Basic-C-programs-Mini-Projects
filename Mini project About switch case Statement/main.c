#include <stdio.h>
#include <conio.h>

int main()
{
	int room=1,x=0;
	char door;
	printf("\nyou are in room 1");

	while(door!='z')              ///for taking input as many times as user do not enter a certain character i.e z
	{
		printf("\n\tChoose the door");
		printf("\n\t 1.Door A");
		printf("\n\t 2.Door B");
		printf("\n\t 3.Door C");
		printf("\n\t 4.Door D\n");
        scanf("%c",&door);
   	switch(room)                  ///check the value of room. initially its 1
	{
		case 1:
        {
	     	switch(door)          ///check which door user had entered
			{
			case 'A':
			room=3;
			printf("\nyou are in room %d",room);

			break;

			case 'B':
			room=8;
			printf("\nyou are in room %d",room);
			break;

			case 'C':
			printf("\nthis door is locked");
			break;

			case 'D':
			printf("\nthis room has only three doors");
            break;

            default:                           ///if user enters other than A, B, C, D
                printf("\n wrong choice, choose from the given choices");
	        }
            break;
	       }
		 case 2:

	        switch(door)
	        {
	        case 'A':
	        room=6;
	       	printf("\nyou are in room %d",room);
	        break;

	        case 'B':
	       	room=3;
	       	printf("\nyou are in room %d",room);
	        break;

	        case 'C':
	        room=1;
	        printf("\nyou are in room %d",room);
	             if(x==1)                    ///check counter for enDING the game
            {
                printf("\n\t!!!!!!!!Congratulations you have ended the game successfully!!!!!!!!!");
                return 0;
            }
	        break;

	        case'D':
	        printf("\nthis door is locked");
	        break;

	        default:
                printf("\n wrong choice, choose from the given choices");
	  	  }
	  	  break;
	  	  case 3:

	  	  switch(door)
	  	  {
	  	  	case 'A':
	  	  	printf("\nthis door is locked");
	  	  	break;

	  	  	case 'B':
	  	  	room=6;
	  	  	printf("\nyou are in room %d",room);
	  	  	break;

	  	  	case 'C':
	  	  	printf("\nthis door is locked");
	  	  	break;

	  	  	case 'D':
	  	  	room=2;
	  	  	printf("\nyou are in room %d",room);
	  	  	break;

	  	  	default:
                printf("\n wrong choice, choose from the given choices");
	  	  }

	  	  break;
	  	  case 4:

	  	  switch(door)
	  	  {
	  	  	case 'A':
	  	  	room=5;
	  	  	printf("\nyou are in room %d",room);
	  	  	break;

	  	  	case 'B':
	  	  	printf("\nthere are only two doors in this room A and D");
	  	  	break;

	  	  	case 'C':
	  	  	printf("\nthere are only two doors in this room A and D");
	  	  	break;

	  	  	case 'D':
	  	  	room=9;
	  	  	printf("\nyou are in room %d",room);
	  	  	if(x==0)                           ///check counter for entering th kitchen only once
	  	  	{
	  	  		printf("\n\t!!!!!!!!Congratulations you have reached the kitchen successfully!!!!!!!!!");
                x=x+1;
	  	  	}
	  	  	break;

	  	  	default:
                printf("\n wrong choice, choose from the given choices");
	  	  }

	  	  break;
	  	  case 5:

	  	  switch(door)
	  	  {
	  	  	case 'A':
	  	  	room=6;
	  	  	printf("\nyou are in room %d",room);
	  	  	break;

	  	  	case 'B':
	  	  	room=4;
	  	  	printf("\nyou are in room %d",room);
	  	  	break;

	  	  	case 'C':
	  	  	printf("\nthis door is locked");
	  	  	break;

	  	  	case 'D':
	  	  	printf("\nthis room has only two doors B and C");
	  	  	break;

	  	  	default:
                printf("\n wrong choice, choose from the given choices");
	  	  }

	  	  break;
	  	  case 6:

	  	  switch(door)
	  	  {
	  	  	case 'A':
	  	  	printf("\nthis room has only two doors C and D");
	  	  	break;

	  	  	case'B':
	  	  	room=5;
	  	  	printf("\nyou are in room %d",room);
	  	  	break;

	  	  	case 'C':
	  	  	room=3;
	  	  	printf("\n you are in room %d",room);
	  	  	break;

	  	  	case 'D':
	  	  	room=2;
	  	  	printf("\nyou are in room %d",room);
	  	  	break;

	  	  	default:
                printf("\n wrong choice, choose from the given choices");
	  	  }

	  	  break;
	  	  case 7:

	  	  switch(door)
	  	  {
	  	  	case 'A':
	  	  	printf("\nthis room has only two doors B and D");
	  	  	break;

	  	  	case 'B':
	  	  	printf("\nthis door is blocked");
	  	  	break;

	  	  	case 'C':
	  	  	printf("this room has only rwo doors");
	  	  	break;

	  	  	case 'D':
	  	  	room=2;
	  	  	printf("\nyou are in room %d",room);
	  	  	break;

	  	  	default:
                printf("\n wrong choice, choose from the given choices");
	  	  }

	  	  break;
	      case 8:

	  	  switch(door)
	  	  {
	  	  	case 'A':
	  	  	room=1;
	  	  	printf("\nyou are in room %d",room);

            break;

	  	  	case 'B':
	  	  	room=7;
	  	  	printf("\nyou are in room %d",room);
	  	  	break;

	  	  	case 'C':
	  	  	room=5;
	  	  	printf("\nyou are in room %d",room);
	  	  	break;

	  	  	case 'D':
	  	  	printf("\nthis room has only three doors A,B and C");
	  	  	break;

	  	  	default:
                printf("\n wrong choice, choose from the given choices");

	  	  }

	  	  break;
	  	  case 9:

	  	  switch(door)
	  	  {
	  	  	case 'A':
	  	  	printf("\nthis room has only one door C");
	  	  	break;

	  	  	case 'B':
	  	  	printf("\nthis room has only one door C");
	  	  	break;

	  	  	case 'C':
	  	  	room=4;
	  	  	printf("\nyou are in room %d",room);
	  	  	break;

	  	  	case 'D':
	  	  	printf("\nthis room has only one door C");
	  	  	break;

	  	  	default:
                printf("\n wrong choice, choose from the given choices");
	  	  }
	  	   break;
	}

	getchar();
	}
	}
