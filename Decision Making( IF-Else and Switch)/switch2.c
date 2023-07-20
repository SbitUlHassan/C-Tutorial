#include <stdio.h> 
void main () {
	char v;
	printf("Enter any character from Keyboard to know, Is it vowel or not? ");
    v = getche();
    switch(v){
	    case 'a' :
			printf("\nThis is vowel");
			break;
    	case 'e' :
	    	printf("\nThis is vowel");
	    	break;
    	case 'i' :
		    printf("\nThis is vowel");
	    	break;
    	case 'o':
	    	printf("\nThis is vowel");
		    break;
        case 'u' :
		    printf("\nThis is vowel");
	      	break;
     	default:
		    printf("\nThis is constant");
	}

}
