//
// Created by jvlk on 22.03.21.
//

#include "ppm.h"
#include "error.h"

struct ppm {
	unsigned xsize;
	unsigned ysize;
	char data[];    // RGB bajty, celkem 3*xsize*ysize
};

struct ppm *ppm_read(const char *filename) {
	FILE *fp;
	int buffer[3];

	fp = fopen(filename, "r");
	if (!fp) {
		error_exit("Nepodařilo se oteřít soubor");
	}

	// Nastaví buffer na prvních 16 znaků
	if (!(fgets(buffer, 3, fp))) {
		error_exit("Nepodařilo se oteřít soubor");
	}

	if (buffer[0] == 'P' && buffer[1] '6'){
		warning_msg("Soubr musí začínat P6");
	}

	ppm *out_img = (ppm *) malloc(sizeof(ppm));
	if (!out_img) {
		error_exit("Nelze alokovat pamět);
	}

	if (fscanf(fp, "%d %d", &out_img->xsize, &out_img->ysize) != 2) {
		error_exit("Nebyly nalezeny velokosti soubru);
	}

	int c;
	if ((struct ppm *obrazek = malloc(sizeof(ppm)) == NULL){
		error_exit("Nelze alokovat pamět);
	}
	while (fgetc(fp) == '\n') {
		obrazek->data = malloc(out_img->xsize * out_img->ysize * 3);
		if (fread(obrazek->data, out_img->xsize * 3, out_img->ysize, fp) = obrazek->ysize) {
			free(obrazek->data);
			free(obrazek);
			warning_msg("Neplatný formát");
		}
	}
	return obrazek;
}

void ppm_free(struct ppm *p){
	free(p->data);
	free(p);
}



