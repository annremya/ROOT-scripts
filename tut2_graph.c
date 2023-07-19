void tut2_graph()
{
    //Pass x and y values to arrays
    double x[5] = {1,2,3,4,5,6,7,8,9,10};
    double y[5] = {1,4,9,16,25,36,49,64,81,100};
    
    //read TGraph functions on the reference guide page
    TGraph *gr = new TGraph(5,x,y);

    TCanvas *c1 = new TCanvas();
    gr->Draw("AL");     //Line plot
    gr->Draw("AL*");    //Line-points * style point

    gr-> SetMarkerStyle(4); //Max till 8
    gr->SetMarkerSize(1);
    gr->Draw("ALP");    //Setting point of style 4

    //other ways to set point type
    gr-> SetMarkerStyle(kCircle);
    gr-> SetMarkerStyle(kFullCircle);

    gr->Draw("ACP"); //C draws a curve than a line (more smooth)
}