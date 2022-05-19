struct threePar{
    int p1;
    int p2;
    int p3;
};
struct twoPar{
    int p1;
    int p2;
    
};

program Prog{
 version Prog_v{
 int surface(twoPar) = 1;
 int mult(threePar)=2;
 }=1;
}=1;
