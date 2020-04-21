0 3 4 2
Sample Output 0

YES

0 2 5 3
Sample Output 1

NO



string kangaroo(int x1, int v1, int x2, int v2) {

if((x2 > x1 && v2 >= v1) || ((x1-x2) % (v2-v1)) != 0)
    return "NO";
else
    return "YES";

}
