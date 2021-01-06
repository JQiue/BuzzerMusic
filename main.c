#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define do 523
#define re 578
#define mi 659
#define fa 698
#define so 784
#define la 880
#define si 988

// 低音
#define ldo 262
#define lre 294
#define lmi 330 
#define lfa 349
#define lso 392
#define lla 440
#define lsi 494

// 高音
#define hdo 1046
#define hre 1175
#define hmi 1318
#define hfa 1480
#define hso 1568
#define hla 1760
#define hsi 1976

// 半音阶
#define cdo 554
#define cre 622
#define cfa 740
#define cso 831
#define cla 932

// 半音阶低音
#define cldo 277
#define clre 311
#define clfa 370
#define clso 415
#define clla 466

// 半音阶高音
#define sldo 1046
#define slre 1245
#define slfa 1480
#define slso 1661
#define slla 1865

int main(void)
{
    // 未完成的《彩虹》
    Beep(mi, 800);
    Beep(mi, 400);
    Beep(mi, 400);
    Beep(mi, 400);
    Beep(mi, 400);
    Beep(so, 400);
    Beep(so, 800);
    Beep(so, 800);

    Sleep(600);

    Beep(do, 400);
    Beep(re, 400);
    Beep(mi, 400);
    Beep(mi, 400);
    Beep(mi, 400);
    Beep(mi, 400);
    Beep(mi, 400);
    Beep(fa, 400);
    Beep(si, 400);
    Beep(hre, 800);
    Beep(hdo, 800);

    Sleep(700);

    Beep(la, 800);
    Beep(la, 400);
    Beep(la, 400);
    Beep(la, 400);
    Beep(si, 400);
    Beep(hdo, 400);
    Beep(hre, 800);
    Beep(so, 1200);

    Sleep(700);

    Beep(hdo, 400);
    Beep(hre, 400);
    Beep(hmi, 400);
    Beep(hmi, 400);
    Beep(hmi, 400);
    Beep(hre, 400);
    Beep(hre, 400);
    Beep(hdo, 400);
    Beep(hmi, 800);
    Beep(hre, 800);

    return 0;
}