#include <stdio.h>

int* functionFindMin(int* array, int row, int cols, char source, char destination){
	int A[10][10];
	int counter = 0;
	for(int o=0; o<10; o++){
		for(int u=0; u<10; u++){
			A[o][u] = array[counter];
			counter += 1;
		}
	}

	int min=0;
	int intsource,intdestination;

	if(source=='A'){
		intsource = 0;
	}
	else if(source=='B'){
		intsource = 1;
	}
	else if(source=='C'){
		intsource = 2;
	}
	else if(source=='D'){
		intsource = 3;
	}
	else if(source=='E'){
		intsource = 4;
	}
	else if(source=='F'){
		intsource = 5;
	}
	else if(source=='G'){
		intsource = 6;
	}
	else if(source=='H'){
		intsource = 7;
	}
	else if(source=='I'){
		intsource = 8;
	}
	else if(source=='J'){
		intsource = 9;
	}

    if(destination=='A'){
        intdestination = 0;
    }
    else if(destination=='B'){
        intdestination = 1;
    }
    else if(destination=='C'){
        intdestination = 2;
    }
    else if(destination=='D'){
        intdestination = 3;
    }
    else if(destination=='E'){
        intdestination = 4;
    }
    else if(destination=='F'){
        intdestination = 5;
    }
    else if(destination=='G'){
        intdestination = 6;
    }
    else if(destination=='H'){
        intdestination = 7;
    }
    else if(destination=='I'){
        intdestination = 8;
    }
    else if(destination=='J'){
        intdestination = 9;
    }

	int sum=0;

	static int B[10]={-2,-2,-2,-2,-2,-2,-2,-2,-2,-2};

	for(int i1=0; i1<10; i1++){
		for(int i2=0; i2<10; i2++){
			if(i1!=i2){
				for(int i3=0; i3<10; i3++){
					if(i2!=i3 && i1!=i3){
						for(int i4=0; i4<10; i4++){
							if(i4!=i3 && i4!=i2 && i4!=i1){
								for(int i5=0; i5<10; i5++){
									if(i5!=i4 && i5!=i3 && i5!=i2 && i5!=i1){
										for(int i6=0; i6<10; i6++){
											if(i6!=i5 && i6!=i4 && i6!=i3 && i6!=i2 && i6!=i1){
												for(int i7=0; i7<10; i7++){
													if(i7!=i6 && i7!=i5 && i7!=i4 && i7!=i3 && i7!=i2 && i7!=i1){
														for(int i8=0; i8<10; i8++){
															if(i8!=i7 && i8!=i6 && i8!=i5 && i8!=i4 && i8!=i3 && i8!=i2 && i8!=i1){
																for(int i9=0; i9<10; i9++){
																	if(i9!=i8 && i9!=i7 && i9!=i6 && i9!=i5 && i9!=i4 && i9!=i3 && i9!=i2 && i9!=i1){
																		for(int i10=0; i10<10; i10++){
																			if(i10!=i9 && i10!=i8 && i10!=i7 && i10!=i6 && i10!=i5 && i10!=i4 && i10!=i3 && i10!=i2 && i10!=i1){
																				if(A[i1][i2]!=-1 && A[i2][i3]!=-1 && A[i3][i4]!=-1 && A[i4][i5]!=-1 && A[i5][i6]!=-1 && A[i6][i7]!=-1 && A[i7][i8]!=-1 && A[i8][i9]!=-1 && A[i9][i10]!=-1 && i1==intsource && i10==intdestination){

																					sum = 0;
																					sum = A[i1][i2]+A[i2][i3]+A[i3][i4]+A[i4][i5]+A[i5][i6]+A[i6][i7]+A[i7][i8]+A[i8][i9]+A[i9][i10];

																					if(min==0){
																						min = sum;
                                                                                        B[0] = i1;
                                                                                        B[1] = i2;
                                                                                        B[2] = i3;
                                                                                        B[3] = i4;
                                                                                        B[4] = i5;
                                                                                        B[5] = i6;
                                                                                        B[6] = i7;
                                                                                        B[7] = i8;
                                                                                        B[8] = i9;
                                                                                        B[9] = i10;
																					}
																					else if(sum<min){
																						min = sum;
																						B[0] = i1;
																						B[1] = i2;
																						B[2] = i3;
																						B[3] = i4;
                                                                                        B[4] = i5;
                                                                                        B[5] = i6;
                                                                                        B[6] = i7;
                                                                                        B[7] = i8;
                                                                                        B[8] = i9;
                                                                                        B[9] = i10;
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	for(int j1=0; j1<10; j1++){
		for(int j2=0; j2<10; j2++){
			if(j1!=j2){
				for(int j3=0; j3<10; j3++){
					if(j2!=j3 && j1!=j3){
						for(int j4=0; j4<10; j4++){
							if(j4!=j3 && j4!=j2 && j4!=j1){
								for(int j5=0; j5<10; j5++){
									if(j5!=j4 && j5!=j3 && j5!=j2 && j5!=j1){
										for(int j6=0; j6<10; j6++){
											if(j6!=j5 && j6!=j4 && j6!=j3 && j6!=j2 && j6!=j1){
												for(int j7=0; j7<10; j7++){
													if(j7!=j6 && j7!=j5 && j7!=j4 && j7!=j3 && j7!=j2 && j7!=j1){
														for(int j8=0; j8<10; j8++){
															if(j8!=j7 && j8!=j6 && j8!=j5 && j8!=j4 && j8!=j3 && j8!=j2 && j8!=j1){
																for(int j9=0; j9<10; j9++){
																	if(j9!=j8 && j9!=j7 && j9!=j6 && j9!=j5 && j9!=j4 && j9!=j3 && j9!=j2 && j9!=j1){
																		if(A[j1][j2]!=-1 && A[j2][j3]!=-1 && A[j3][j4]!=-1 && A[j4][j5]!=-1 && A[j5][j6]!=-1 && A[j6][j7]!=-1 && A[j7][j8]!=-1 && A[j8][j9]!=-1 && j1==intsource && j9==intdestination){
																			sum = 0;
																			sum = A[j1][j2]+A[j2][j3]+A[j3][j4]+A[j4][j5]+A[j5][j6]+A[j6][j7]+A[j7][j8]+A[j8][j9];
																			if(min==0){
																				min = sum;
                                                                            	B[0] = j1;
                                                                                B[1] = j2;
                                                                                B[2] = j3;
                                                                                B[3] = j4;
                                                                                B[4] = j5;
                                                                                B[5] = j6;
                                                                                B[6] = j7;
                                                                                B[7] = j8;
                                                                                B[8] = j9;
																				B[9] = -1;
																			}
																			else if(sum < min){
																				min = sum;
                                                                                B[0] = j1;
                                                                                B[1] = j2;
                                                                                B[2] = j3;
                                                                                B[3] = j4;
                                                                                B[4] = j5;
                                                                                B[5] = j6;
                                                                                B[6] = j7;
                                                                                B[7] = j8;
                                                                                B[8] = j9;
																				B[9] = -1;
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

    for(int k1=0; k1<10; k1++){
        for(int k2=0; k2<10; k2++){
            if(k1!=k2){
                for(int k3=0; k3<10; k3++){
                    if(k2!=k3 && k1!=k3){
                        for(int k4=0; k4<10; k4++){
                            if(k4!=k3 && k4!=k2 && k4!=k1){
                                for(int k5=0; k5<10; k5++){
                                    if(k5!=k4 && k5!=k3 && k5!=k2 && k5!=k1){
                                        for(int k6=0; k6<10; k6++){
                                            if(k6!=k5 && k6!=k4 && k6!=k3 && k6!=k2 && k6!=k1){
                                                for(int k7=0; k7<10; k7++){
                                                    if(k7!=k6 && k7!=k5 && k7!=k4 && k7!=k3 && k7!=k2 && k7!=k1){
                                                        for(int k8=0; k8<10; k8++){
                                                            if(k8!=k7 && k8!=k6 && k8!=k5 && k8!=k4 && k8!=k3 && k8!=k2 && k8!=k1){
																if(A[k1][k2]!=-1 && A[k2][k3]!=-1 && A[k3][k4]!=-1 && A[k4][k5]!=-1 && A[k5][k6]!=-1 && A[k6][k7]!=-1 && A[k7][k8]!=-1 && k1==intsource && k8==intdestination){
																	sum = 0;
																	sum = A[k1][k2]+A[k2][k3]+A[k3][k4]+A[k4][k5]+A[k5][k6]+A[k6][k7]+A[k7][k8];
																	if(min==0){
																		min = sum;
                                                                        B[0] = k1;
                                                                        B[1] = k2;
                                                                        B[2] = k3;
                                                                        B[3] = k4;
                                                                		B[4] = k5;
                                                                        B[5] = k6;
                                                                        B[6] = k7;
                                                                        B[7] = k8;
																		B[8] = -1;
																	}
																	else if(sum < min){
																		min = sum;
                                                                        B[0] = k1;
                                                                        B[1] = k2;
                                                                        B[2] = k3;
                                                                        B[3] = k4;
                                                                        B[4] = k5;
                                                                        B[5] = k6;
                                                                        B[6] = k7;
                                                                        B[7] = k8;
                                                                        B[8] = -1;
																	}
																}
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for(int l1=0; l1<10; l1++){
        for(int l2=0; l2<10; l2++){
            if(l1!=l2){
                for(int l3=0; l3<10; l3++){
                    if(l2!=l3 && l1!=l3){
                        for(int l4=0; l4<10; l4++){
                            if(l4!=l3 && l4!=l2 && l4!=l1){
                                for(int l5=0; l5<10; l5++){
                                    if(l5!=l4 && l5!=l3 && l5!=l2 && l5!=l1){
                                        for(int l6=0; l6<10; l6++){
                                            if(l6!=l5 && l6!=l4 && l6!=l3 && l6!=l2 && l6!=l1){
                                                for(int l7=0; l7<10; l7++){
                                                    if(l7!=l6 && l7!=l5 && l7!=l4 && l7!=l3 && l7!=l2 && l7!=l1){
														if(A[l1][l2]!=-1 && A[l2][l3]!=-1 && A[l3][l4]!=-1 && A[l4][l5]!=-1 && A[l5][l6]!=-1 && A[l6][l7]!=-1 && l1==intsource && l7==intdestination){

															sum = 0;
															sum = A[l1][l2]+A[l2][l3]+A[l3][l4]+A[l4][l5]+A[l5][l6]+A[l6][l7];

															if(min==0){
																min = sum;
                                                                B[0] = l1;
                                                                B[1] = l2;
                                                                B[2] = l3;
                                                                B[3] = l4;
                                                                B[4] = l5;
                                                                B[5] = l6;
                                                                B[6] = l7;
                                                                B[7] = -1;
															}
															else if(sum<min){
																min = sum;
                                                                B[0] = l1;
                                                                B[1] = l2;
                                                                B[2] = l3;
                                                                B[3] = l4;
                                                                B[4] = l5;
                                                                B[5] = l6;
                                                                B[6] = l7;
                                                                B[7] = -1;
															}
														}
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for(int m1=0; m1<10; m1++){
        for(int m2=0; m2<10; m2++){
            if(m1!=m2){
                for(int m3=0; m3<10; m3++){
                    if(m2!=m3 && m1!=m3){
                        for(int m4=0; m4<10; m4++){
                            if(m4!=m3 && m4!=m2 && m4!=m1){
                                for(int m5=0; m5<10; m5++){
                                    if(m5!=m4 && m5!=m3 && m5!=m2 && m5!=m1){
                                        for(int m6=0; m6<10; m6++){
                                            if(m6!=m5 && m6!=m4 && m6!=m3 && m6!=m2 && m6!=m1){
												if(A[m1][m2]!=-1 && A[m2][m3]!=-1 && A[m3][m4]!=-1 && A[m4][m5]!=-1 && A[m5][m6]!=-1 && m1==intsource && m6==intdestination){

													sum = 0;
													sum = A[m1][m2]+A[m2][m3]+A[m3][m4]+A[m4][m5]+A[m5][m6];

													if(min==0){
														min = sum;
                                                        B[0] = m1;
                                                        B[1] = m2;
                                                        B[2] = m3;
                                                        B[3] = m4;
                                                        B[4] = m5;
                                                        B[5] = m6;
                                                        B[6] = -1;
													}
													else if(sum < min){
														min = sum;
                                                        B[0] = m1;
                                                        B[1] = m2;
                                                        B[2] = m3;
                                                        B[3] = m4;
                                                        B[4] = m5;
                                                        B[5] = m6;
                                                        B[6] = -1;
													}
												}
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for(int n1=0; n1<10; n1++){
        for(int n2=0; n2<10; n2++){
            if(n1!=n2){
                for(int n3=0; n3<10; n3++){
                    if(n2!=n3 && n1!=n3){
                        for(int n4=0; n4<10; n4++){
                            if(n4!=n3 && n4!=n2 && n4!=n1){
                                for(int n5=0; n5<10; n5++){
                                    if(n5!=n4 && n5!=n3 && n5!=n2 && n5!=n1){
										if(A[n1][n2]!=-1 && A[n2][n3]!=-1 && A[n3][n4]!=-1 && A[n4][n5]!=-1 && n1==intsource && n5==intdestination){

											sum = 0;
											sum = A[n1][n2]+A[n2][n3]+A[n3][n4]+A[n4][n5];

											if(min==0){
												min = sum;
                                                B[0] = n1;
                                                B[1] = n2;
                                                B[2] = n3;
                                                B[3] = n4;
                                                B[4] = n5;
                                                B[5] = -1;
											}
											else if(sum < min){
												min = sum;
                                                B[0] = n1;
                                                B[1] = n2;
                                                B[2] = n3;
                                                B[3] = n4;
                                                B[4] = n5;
                                                B[5] = -1;
											}
										}
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for(int x1=0; x1<10; x1++){
        for(int x2=0; x2<10; x2++){
            if(x1!=x2){
                for(int x3=0; x3<10; x3++){
                    if(x2!=x3 && x1!=x3){
                        for(int x4=0; x4<10; x4++){
                            if(x4!=x3 && x4!=x2 && x4!=x1){
								if(A[x1][x2]!=-1 && A[x2][x3]!=-1 && A[x3][x4]!=-1 && x1==intsource && x4==intdestination){
									sum = 0;
									sum = A[x1][x2]+A[x2][x3]+A[x3][x4];
									if(min==0){
										min = sum;
                                        B[0] = x1;
                                        B[1] = x2;
                                        B[2] = x3;
                                        B[3] = x4;
                                        B[4] = -1;
									}
									else if(sum < min){
										min = sum;
                                        B[0] = x1;
                                        B[1] = x2;
                                        B[2] = x3;
                                        B[3] = x4;
                                        B[4] = -1;
									}
								}
                            }
                        }
                    }
                }
            }
        }
    }
    for(int y1=0; y1<10; y1++){
        for(int y2=0; y2<10; y2++){
            if(y1!=y2){
                for(int y3=0; y3<10; y3++){
                    if(y2!=y3 && y1!=y3){
						if(A[y1][y2]!=-1 && A[y2][y3]!=-1 && y1==intsource && y3==intdestination){
							sum = 0;
							sum = A[y1][y2]+A[y2][y3];
							if(min==0){
								min = sum;
                                B[0] = y1;
                                B[1] = y2;
                                B[2] = y3;
                                B[3] = -1;
							}
							else if(sum < min){
								min = sum;
                                B[0] = y1;
                                B[1] = y2;
                                B[2] = y3;
                                B[3] = -1;
							}
						}
                    }
                }
            }
        }
    }
    for(int z1=0; z1<10; z1++){
        for(int z2=0; z2<10; z2++){
            if(z1!=z2){
				if(A[z1][z2]!=-1 && z1==intsource && z2==intdestination){
					sum = 0;
					sum = A[z1][z2];
					if(min==0){
						min = sum;
                        B[0] = z1;
                        B[1] = z2;
                        B[2] = -1;
					}
					else if(sum < min){
						min = sum;
                        B[0] = z1;
                        B[1] = z2;
                        B[2] = -1;
					}
				}
            }
        }
    }
	B[10] = min;
	return B;
}

int main(){
	int A[10][10];
	int* C;
	char c,d;
	scanf("%d %d %d %d %d %d %d %d %d %d",&A[0][0],&A[0][1],&A[0][2],&A[0][3],&A[0][4],&A[0][5],&A[0][6],&A[0][7],&A[0][8],&A[0][9]);
	scanf("%d %d %d %d %d %d %d %d %d %d",&A[1][0],&A[1][1],&A[1][2],&A[1][3],&A[1][4],&A[1][5],&A[1][6],&A[1][7],&A[1][8],&A[1][9]);
	scanf("%d %d %d %d %d %d %d %d %d %d",&A[2][0],&A[2][1],&A[2][2],&A[2][3],&A[2][4],&A[2][5],&A[2][6],&A[2][7],&A[2][8],&A[2][9]);
	scanf("%d %d %d %d %d %d %d %d %d %d",&A[3][0],&A[3][1],&A[3][2],&A[3][3],&A[3][4],&A[3][5],&A[3][6],&A[3][7],&A[3][8],&A[3][9]);
	scanf("%d %d %d %d %d %d %d %d %d %d",&A[4][0],&A[4][1],&A[4][2],&A[4][3],&A[4][4],&A[4][5],&A[4][6],&A[4][7],&A[4][8],&A[4][9]);
	scanf("%d %d %d %d %d %d %d %d %d %d",&A[5][0],&A[5][1],&A[5][2],&A[5][3],&A[5][4],&A[5][5],&A[5][6],&A[5][7],&A[5][8],&A[5][9]);
	scanf("%d %d %d %d %d %d %d %d %d %d",&A[6][0],&A[6][1],&A[6][2],&A[6][3],&A[6][4],&A[6][5],&A[6][6],&A[6][7],&A[6][8],&A[6][9]);
	scanf("%d %d %d %d %d %d %d %d %d %d",&A[7][0],&A[7][1],&A[7][2],&A[7][3],&A[7][4],&A[7][5],&A[7][6],&A[7][7],&A[7][8],&A[7][9]);
	scanf("%d %d %d %d %d %d %d %d %d %d",&A[8][0],&A[8][1],&A[8][2],&A[8][3],&A[8][4],&A[8][5],&A[8][6],&A[8][7],&A[8][8],&A[8][9]);
	scanf("%d %d %d %d %d %d %d %d %d %d\n",&A[9][0],&A[9][1],&A[9][2],&A[9][3],&A[9][4],&A[9][5],&A[9][6],&A[9][7],&A[9][8],&A[9][9]);
	scanf("%c %c",&c,&d);
	C = functionFindMin(A[0], 10, 10, c, d);
	int counter = 0;
	while(C[counter]!=-1 && counter<10 && C[10]!=0){

		if(C[counter]==0 && C[counter+1]!=-1){
			printf("A-");
		}
		else if(C[counter]==1 && C[counter+1]!=-1 && counter!=9){
			printf("B-");
		}
        else if(C[counter]==2 && C[counter+1]!=-1 && counter!=9){
            printf("C-");
        }
        else if(C[counter]==3 && C[counter+1]!=-1 && counter!=9){
            printf("D-");
        }
        else if(C[counter]==4 && C[counter+1]!=-1 && counter!=9){
            printf("E-");
        }
        else if(C[counter]==5 && C[counter+1]!=-1 && counter!=9){
            printf("F-");
        }
        else if(C[counter]==6 && C[counter+1]!=-1 && counter!=9){
            printf("G-");
        }
        else if(C[counter]==7 && C[counter+1]!=-1 && counter!=9){
            printf("H-");
        }
        else if(C[counter]==8 && C[counter+1]!=-1 && counter!=9){
            printf("I-");
        }
        else if(C[counter]==9 && C[counter+1]!=-1 && counter!=9){
            printf("J-");
        }

        if(C[counter]==0 && C[counter+1]==-1){
            printf("A");
        }
        else if(C[counter]==1 && C[counter+1]==-1){
            printf("B");
        }
        else if(C[counter]==2 && C[counter+1]==-1){
            printf("C");
        }
        else if(C[counter]==3 && C[counter+1]==-1){
            printf("D");
        }
        else if(C[counter]==4 && C[counter+1]==-1){
            printf("E");
        }
        else if(C[counter]==5 && C[counter+1]==-1){
            printf("F");
        }
        else if(C[counter]==6 && C[counter+1]==-1){
            printf("G");
        }
        else if(C[counter]==7 && C[counter+1]==-1){
            printf("H");
        }
        else if(C[counter]==8 && C[counter+1]==-1){
            printf("I");
        }
        else if(C[counter]==9 && C[counter+1]==-1){
            printf("J");
        }

        if(C[9]==0){
            printf("A");
        }
        else if(C[9]==1){
            printf("B");
        }
        else if(C[9]==2){
            printf("C");
        }
        else if(C[9]==3){
            printf("D");
        }
        else if(C[9]==4){
            printf("E");
        }
        else if(C[9]==5){
            printf("F");
        }
        else if(C[9]==6){
            printf("G");
        }
        else if(C[9]==7){
            printf("H");
        }
        else if(C[9]==8){
            printf("I");
        }
        else if(C[9]==9){
            printf("J");
        }

		counter += 1;
	}
	if(C[10]==0){
		printf("iki sehir arasi gidilemez");
	}
	else{
		printf(" %d",C[10]);
	}
	return 0;
}
