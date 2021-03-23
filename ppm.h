//
// Created by jvlk on 22.03.21.
//

#ifndef IJC_DU1_PPM_H
#define IJC_DU1_PPM_H
struct ppm *ppm_read(const char *filename);
void ppm_free(struct ppm *p);
#endif //IJC_DU1_PPM_H
