void tut2_graph()
{
    double x[5] = {1,2,3,4,5};
    double y[5] = {1,4,9,16,25};
    
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