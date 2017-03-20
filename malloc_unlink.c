#define unlink(AV, P, BK, FD) {                                            
    FD = P->fd;								      
    BK = P->bk; 
}

//this is malloc.c's unlink.
