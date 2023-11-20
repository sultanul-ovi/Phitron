#include <stdio.h>
struct Fraction
{
    int num;
    int denom;
};
int gcd(int a, int b)
{
    while (a)
    {
        int rem_g = b % a;
        b = a;
        a = rem_g;
    }
    return b;
}
struct Fraction add(struct Fraction a, struct Fraction b)
{
    struct Fraction ans;
    ans.num = (a.denom * b.num + a.num * b.denom);
    ans.denom = a.denom * b.denom;
    return ans;
}
struct Fraction reduce(struct Fraction f)
{
    int g = gcd(f.num, f.denom);
    f.num /= g;
    f.denom /= g;
    return f;
}
struct Fraction inputF()
{
    struct Fraction f;
    scanf("%d %d", &f.num, &f.denom);
    return f;
}
void print(struct Fraction f)
{
    printf("%d/%d", f.num, f.denom);
}
int main()
{
    struct Fraction half = {1, 2};
    // print(half);

    struct Fraction a, b;
    a = reduce(inputF());
    b = reduce(inputF());
    print(a);
    printf(" + ");
    print(b);
    printf(" = ");
    print(reduce(add(a, b)));
    return 0;
}