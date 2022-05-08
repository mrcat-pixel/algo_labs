#include <stdio.h>
#include <stdint.h>

int main( int argc, char** argv ) {
    uint32_t len = 0;
    scanf("%u", &len);
    
    uint32_t tmp = 0, past1 = 0, past2 = 0, length = 0, length_res = 0;
    uint32_t section_i = 0, section_i_res = 0;

    for (uint32_t i = 0; i < len; i++) {
        past2 = past1;
        past1 = tmp;
        scanf("%u", &tmp);
        length++;

        if (past2 == past1 && past1 == tmp && i > 1) {
            section_i = i - 1;
            length = 2;
        }
        
        if (length > length_res) {
            length_res = length;
            section_i_res = section_i;
        }
    }
    
    section_i_res++;
    printf("%u %u", section_i_res, section_i_res + --length_res);
}


/*
Городской школьник Лёша поехал на лето в деревню и занялся выращиванием цветов. Он посадил n цветков вдоль одной длинной прямой грядки, и они успешно выросли. Лёша посадил множество различных видов цветков, i-й от начала грядки цветок имеет вид ai, где ai "— целое число, номер соответствующего вида в «Каталоге юного агронома».

Теперь Лёша хочет сделать фотографию выращенных им цветов и выложить ее в раздел «мои грядки» в социальной сети для агрономов «ВКомпосте». На фотографии будет виден отрезок из одного или нескольких высаженных подряд цветков.

Однако он заметил, что фотография смотрится не очень интересно, если на ней много одинаковых цветков подряд. Лёша решил, что если на фотографии будут видны три цветка одного вида, высаженные подряд, то его друзья — специалисты по эстетике цветочных фотографий — поставят мало лайков.

Помогите ему выбрать для фотографирования как можно более длинный участок своей грядки, на котором нет трех цветков одного вида подряд.
Формат ввода

В первой строке содержится целое число n (1 ≤ n ≤ 200 000) — количество цветов на грядке.

Во второй строке содержится n целых чисел ai (1 ≤ ai ≤ 109), обозначающих вид очередного цветка. Одинаковые цветки обозначаются одинаковыми числами, разные — разными.
Формат вывода

Выведите номер первого и последнего цветка на самом длинном искомом участке. Цветки нумерются от 1 до n.

Если самых длинных участков несколько, выведите участок, который начинается раньше.
*/