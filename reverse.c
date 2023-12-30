#include<stdio.h>
#include<string.h>

void print_reverse(char *s){
	//calculate the length of input string
	size_t len = strlen(s);

	//set pointer *t to the last character of the string
    char *t = s + len-1;
    // loop through the characters in reverse
	while(t>=s){
		//print the current character pointed to by t
		printf("%c", *t);

    // move t to the previous character in the sting..
	// t is decremented to move to a previous character
	t = t-1;

	}

puts("");


}

int main(void){
    char *juices[] = {
     "dragonfruit", "waterberry", "sharonfruit", "uglifruit",
     "rumberry", "kiwifruit", "mulberry", "strawberry",
     "blueberry", "blackberry", "starfruit"
};
    puts(juices[6]);
    print_reverse(juices[7]);
                            
    // Swap the pointers of the 2nd and 8th elements in the array
    char *a = juices[2];
    juices[2] = juices[8];
    juices[8] = a;

    puts(juices[8]);

    // Print the reverse of the element at index (18 + 7) / 5 = 5 in the array ("kiwifruit")
    print_reverse(juices[(18 + 7) / 5]);

      // Print the 2nd element of the array ("kiwifruit") after the swap
    puts(juices[2]);

    // Print the reverse of the 9th element of the array ("blackberry")
    print_reverse(juices[9]);

    // Copy the pointer from the 3rd element to the 1st element in the array
    juices[1] = juices[3];

    // Print the 10th element of the array ("starfruit") after the pointer copy
    puts(juices[10]);

    // Print the reverse of the 2nd element of the array ("waterberry") after the pointer copy
    print_reverse(juices[1]);

   return 0;
}
