
#include "serendipity.h"

string toLower(string target) {
    int targetSize = target.length();

    for (int i = 0; i < targetSize; i++) {
        target[i] = tolower(target[i]);
    }
    return target;
}
