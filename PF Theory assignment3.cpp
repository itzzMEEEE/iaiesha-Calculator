#include <stdio.h>
#include <math.h>

int sorting(float ary[] , int n );

int basic_operations();
int addition();
int difference();
int multiplication();
int division();

int trigonometric_operations();								// add answers in degrees
int sine();
int cosine();
int tangent();
int arccosine();
int arcsine();
int arctangent();

int algebraic_operations();
int exponential();
int squareroot();
int cuberoot();
int nthroot();
int factorial();
int absolutevalue();

int logarithmic_operations();
int logarithm();
int naturallog();
int customlog();

int statistical_operations();
int mean();
int median();
int mode();
int standard_deviation();
int variance();

int other_operations(); 
int modulus();
int percentage();
int gcd();
int lcm();
int flooring();
int ceiling();

int other_operations(){
	char option;
	printf("Enter the choice: ");
	scanf(" %c", &option);
	switch(option){
		case 'A':
		case 'a':
			modulus();
		break;
		case 'B':
		case 'b':
			percentage();
		break;
		case 'C':
		case 'c':
			gcd();
		break;
		case 'D':
		case 'd':
			lcm();
		break;
		case 'E':
		case 'e':
			flooring();
		break;
		case 'F':
		case 'f':
			ceiling();
		break;
		default:
		printf("Invalid option!");	
	}
}
int statistical_operations(){
	char option;
	printf("Enter the choice: ");
	scanf(" %c", &option);
	switch(option){
		case 'A':
		case 'a':
			mean();
		break;
		case 'B':
		case 'b':
			median();
		break;
		case 'C':
		case 'c':
			mode();
		break;
		case 'D':
		case 'd':
			standard_deviation();
		break;
		case 'E':
		case 'e':
			variance();
		break;
		case 'F':
		case 'f':
			factorial();
		break;
		default:
		printf("Invalid option!");	
	}
}
int logarithmic_operations(){
	char option;
	printf("Enter the choice: ");
	scanf(" %c", &option);
	switch(option){
		case 'A':
		case 'a':
			logarithm();
		break;
		case 'B':
		case 'b':
			naturallog();
		break;
		case 'C':
		case 'c':
			customlog();
		break;
		default:
		printf("Invalid option!");	
	}
}
int algebraic_operations(){
	char option;
	printf("Enter the choice: ");
	scanf(" %c", &option);
	switch(option){
		case 'A':
		case 'a':
			exponential();
		break;
		case 'B':
		case 'b':
			squareroot();
		break;
		case 'C':
		case 'c':
			cuberoot();
		break;
		case 'D':
		case 'd':
			nthroot();
		break;
		case 'E':
		case 'e':
			factorial();
		break;
		case 'F':
		case 'f':
			absolutevalue();
		break;
		default:
		printf("Invalid option!");	
	}
}
int trigonometric_operations(){								// add answers in degrees
	char option;
	printf("Enter the choice: ");
	scanf(" %c", &option);
	switch(option){
		case 'A':
		case 'a':
			sine();
		break;
		case 'B':
		case 'b':
			cosine();
		break;
		case 'C':
		case 'c':
			tangent();
		break;
		case 'D':
		case 'd':
			arccosine();
		break;
		case 'E':
		case 'e':
			arcsine();
		break;
		case 'F':
		case 'f':
			arctangent();
		break;
		default:
		printf("Invalid option!");	
	}
}
int basic_operations(){
	char option;
	printf("Enter the choice: ");
	scanf(" %c", &option);
	switch(option){
		case 'A':
		case 'a':
			addition();
		break;
		case 'B':
		case 'b':
			difference();
		break;
		case 'C':
		case 'c':
			multiplication();
		break;
		case 'D':
		case 'd':
			division();
		break;
		default:
		printf("Invalid option!");	
	}
}
int sorting(float ary[],int n){
	for (int i=0; i<n-1; i++){
		for(int j=0 ; j<n-i-1; j++){
			if (ary[j]> ary[j+1]){
				int t = ary[j];
				ary[j]= ary[j+1];
				ary[j+1]= t;
			}
		}
	}
}
int mean(){
	float x, sum ,n ;
	printf("Enter the number of elements: ");
	scanf("%f", &n);
	printf("Enter the values: ");
	for(int i=0; i<n ; i++){
	scanf("%f", &x);
	sum+=x;
	}
	float mean= sum/n;
	printf("\tMean = %.2f", mean);		
}
int median(){
	float med;
	int size;
	printf("Enter the number of elements: ");
	scanf("%d", &size);
	float array[size];
	printf("Enter %d numbers: ", size);
	for (int i=0; i<size ; i++){
		scanf("%f", &array[i]);
	}
	 sorting(array, size);
	 for(int j=0; j<size ;j++){
	 	printf("%.2f  ", array[j]);
	 }
	if (size%2==0){
	med = (array[size/2]+array[(size-1)/2])/2;
}
	else
	med = array[(size+1)/2];
	printf("The median is: %.2f", med);
}
int mode(){
	int n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	float arr[n];
	printf("Enter %d numbers: ", n);
	for (int a=0; a<n ; a++){
		scanf("%f", &arr[a]);
		}
    int i, j, mode1, mode2, count1 = 0, count2 = 0;
    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > count1) {
            count1 = count;
            mode1 = arr[i];
        }
    }
    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == arr[i] && arr[i] != mode1) {
                count++;
            }
        }
        if (count > count2) {
            count2 = count;
            mode2 = arr[i];
        }
    }
    
    if (count1 > 1 || count2 > 1) {
		if (count1 == count2)
        printf("The array has two modes: %d and %d\n", mode1, mode2);
    	else if(count1> count2)
    	printf("The mode of array: %d\n", mode1);
    	else 
    	printf("The mode of array: %d\n", mode2);
	}
	else if (count1 == 1 && count2 == 1){
        printf("There is no mode for the given set of numbers.\n");
    }
}
int standard_deviation(){
	 int size;
	 float sum;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
	float mean= sum/size;
    float sumSquaredDifference = 0;
    for (int j = 0; j < size ; j++) {
        sumSquaredDifference += pow(arr[j] - mean, 2);
    }
    float standardDeviation = sqrt(sumSquaredDifference/(size-1));
    printf("Standard Deviation: %.2f\n", standardDeviation);
}
int variance(){
	 int size;
	 float sum;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float mean= sum/size;
      float sv = 0;
    for (int j = 0; j < size; j++) {
        sv += pow(arr[j] - mean, 2);
    }
    float variance = sv/ size;
    printf("Variance of the array: %.2f\n", variance);
}
int modulus(){
	 int num1, num2, modulus;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    modulus = num1 % num2;
    printf("Modulus of %d and %d is: %d\n", num1, num2, modulus);
}
int percentage(){
	float obtainedmarks, totalMarks;
	printf("Enter the marks obtained: ");
    scanf("%f", &obtainedmarks);
    printf("Enter the total marks: ");
    scanf("%f", &totalMarks);
    float percentage = (obtainedmarks / totalMarks) * 100;
    printf("Percentage: %.2f%%\n", percentage);
}
int gcd(){
int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input. Number of elements must be greater than 0.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int gcd = arr[0];
    for (int i = 1; i < n; i++) {
        while (arr[i] != 0) {
            int temp = arr[i];
            arr[i] = gcd % arr[i];
            gcd = temp;
        }
    }
    printf("GCD of the %d numbers is: %d\n", n, gcd);
}
int lcm(){
	int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input. Number of elements must be greater than 0.\n");
        return 1;  // Exit the program with an error code
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] <= 0) {
            printf("Invalid input. Array elements must be greater than 0.\n");
            return 1;  
        }
    }
    int lcm = 1;
    int maxElement = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    int multiple = 1;
    while (1) {
        int isLCM = 1;
        for (int i = 0; i < n; i++) {
            if ((multiple * maxElement) % arr[i] != 0) {
                isLCM = 0;
                break;
            }
        }
        if (isLCM) {
            lcm = multiple * maxElement;
            break;
        }
        multiple++;
    }
    printf("The LCM is: %d\n", n, lcm);
}
int flooring(){
	double x, ans;
	printf("Enter the number: ");
	scanf("%lf", &x);
	ans= floor(x);
	printf("Floor integer of %.2lf = %.f", x,ans);
}
int ceiling(){
	double x;
	int ans;
	printf("Enter the number: ");
	scanf("%lf", &x);
	ans= ceil(x);
	printf("Ceil integer of %.2lf = %d", x,ans);
}

int logarithm(){
	float x;
	printf("Enter the value of x: ");
	scanf("%f", &x);
	printf("The log of %.2f is %.2f", x, log10(x));
} 
int naturallog(){
		float x;
	printf("Enter the value of x: ");
	scanf("%f", &x);
	printf("The log of %.2f is %.2f", x, log(x)); 	
}
int customlog(){
	float x, base;
	printf("Enter the value of base: ");
	scanf("%f", &base);
	printf("Enter the value of x: ");
	scanf("%f", &x);
	printf("The log of %.2f with base %.2lf is %.2f", x, base, log10(x)/log10(base)); 	
}
int exponential(){
	float x, ans;
	printf("Enter the value of x for exponential: ");
	scanf("%f", &x);
	ans = exp(x);
	printf("Exponential of %.2f is %.2f" , x ,ans );
	}
int squareroot(){
	float x , ans;
	printf("Enter the value x: ");
	scanf("%f" ,&x);
	ans = sqrt(x);
	printf("The square root of %.2f is %.2f" ,x ,ans);
	}
int cuberoot(){
	float x ,ans;
	printf("Enter the value of x: ");
	scanf("%f" ,&x);
	ans = cbrt(x);
	printf("The cube root of %.2f is %.2f" ,x ,ans);
}
int nthroot(){
    double nth, x , ans, pw;
    printf("Enter the nth value of root: ");
    scanf("%lf", &nth);
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    ans = pow(x,1.0/nth);
    printf("The %.2lfth root of %.2lf is %.2lf", nth, x, ans);
}
int factorial(){
	int x, fact=1;
	printf("Enter the number:");
	scanf("%d", &x);
	for (int i=1; i<=x; i++){
		fact *= i;	}
	printf("The factorial of %d is %d", x ,fact);}
int absolutevalue(){
	double x, ans;
	printf("Enter the number: ");
	scanf("%lf", &x);
	ans= fabs(x);
	printf("The absolute value of %.2lf is:\n\t |%.2lf|=|%.2lf|", x, x ,ans);
}
int sine(){
	float x, ans;
	printf("Enter the value of theta: ");
	scanf("%f", &x);
	ans = sin(x);										
	printf("sin(%.2f)= %.2f", x, ans);
	}
int cosine(){
	float x, ans;
	printf("Enter the value of theta: ");
	scanf("%f", &x);
	ans = cos(x);
	printf("cos(%.2f)= %.2f", x, ans);
	}
int tangent(){
	float x, ans;
	printf("Enter the value of theta: ");								// add answers in degrees
	scanf("%f", &x);
	ans = tan(x);
	printf("tan(%.2f)= %.2f", x, ans);
	}
int arcsine(){
	float x, ans;
	printf("Enter the value of theta: ");
	scanf("%f", &x);
	ans = asin(x);
	printf("Inverse of sin(%.2f)= %.2f", x, ans);
	}
int arccosine(){
	float x, ans;
	printf("Enter the value of theta: ");
	scanf("%f", &x);
	ans = acos(x);
	printf("Inverse of cos(%.2f)= %.2f", x, ans);
	}
int arctangent(){
	float x, ans;
	printf("Enter the value of theta: ");
	scanf("%f", &x);
	ans = atan(x);
	printf("Inverse of tan(%.2f)= %.2f", x, ans);
	}
int addition(){
	int n , sum = 0, value;
    printf("Enter the number of elements: ");
	scanf("%d", &n);
	 if (n <= 0) {
        printf("Please enter a valid number of elements.\n");
        return 1; 
    }
    printf("Enter %d numbers for addition:\n", n);
	for (int i=1 ; i<=n;i++){
	scanf("%d", &value);
	sum+=value;
	}	
	printf("The sum of numbers you entered is %d", sum);
}
int difference(){
int n, i ,sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a valid number of elements.\n");
        return 1; 
    }
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (i == 0) {
            sum = num;
        } else {
            sum -= num;
        }
    }
    printf("The difference of the entered numbers is: %d\n", sum);
}
int multiplication(){
	int n, product=1, value;
    printf("Enter the number of elements: ");
	scanf("%d", &n);
	if (n <= 0) {
        printf("Please enter a valid number of elements.\n");
        return 1; 
    }
    printf("Enter  %d numbers for multiplication:\n", n);
    for (int i=1; i<=n ; i++){
    	scanf("%d", &value);
	product*=value;    
	}
	printf("The product of the entered numbers is: %d\n", product);
}
int division(){
 int n, i;
    float num , quotient = 1.0; 
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (i = 1; i <=n; i++) {
        scanf("%f", &num);
        if (i==1)
        quotient*=num;
        else{
         if (num != 0) {
            quotient /= num; 
        } else {
            printf("Error: Cannot divide by zero.\n");
            return 1;  
        }
    }
}
  	printf("Quotient of the %d numbers is: %.2f\n", n, quotient);
}
int main(){
	char c;
	printf("\t|-------------------------------------------------------SCIENTIFIC CALCULATOR---------------------------------------------------------|\n");
	printf("\n\tEnter A for Basic Arthimetic Operations\t\tEnter B for Trignometric Operations\t\tEnter C for Algebric Operations");
	printf("\n\t\tAddition\t\t\t\t\t\tSine\t\t\t\t\tExponential\n\t\tSubraction\t\t\t\t\t\tCosine\t\t\t\t\tSquare Root\n\t\tMultiplication\t\t\t\t\t\tTangent\t\t\t\t\tCube Root");
	printf("\n\t\tDivision\t\t\t\t\t\tArc-Sine\t\t\t\tnth-Root\n\t\t          \t\t\t\t\t\tArc-Cosine\t\t\t\tFactorial\n\t\t              \t\t\t\t\t\tArc-Tangent\t\t\t\tAbsolute Value");
	printf("\n\n\tEnter D for Logarithmic Operations\t\tEnter E for Statistical Operations\t\tEnter F for Additional Operations");
	printf("\n\t\tLogarithm(base 10)\t\t\t\t\tMean\t\t\t\t\tModulus\n\t\tNatural Logarithm(base e)\t\t\t\tMedian\t\t\t\t\tPercentage\n\t\tCustom Base\t\t\t\t\t\tMode\t\t\t\t\tGreatest Common Divisor");
	printf("\n\t\t                  \t\t\t\t\tStandard deviation\t\t\tLeast Common Multiple\n\t\t        \t\t\t\t\t\tVariance\t\t\t\tFloor (round down)\n\t\t            \t\t\t\t\t\t    \t\t\t\t\tCeiling (round up)");
	printf("\n\t\t\t\t\t\tEnter the respective alphabet to make a selection: ");
	scanf("%c", &c);
	switch(c){
		case'A':
		case'a':
			basic_operations();
		break;
		case'B':
		case'b':
			trigonometric_operations();
		break;
		case'C':
		case'c':
			algebraic_operations();
		break;
		case'D':
		case'd':
			logarithmic_operations();
		break;
		case'E':
		case'e':
			statistical_operations();
		break;
		case'F':
		case'f':
			other_operations();
		break;
		default:
			printf("Invalid Option!");
	} 
	return 0;
	}
