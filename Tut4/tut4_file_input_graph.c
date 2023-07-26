void tut4_file_input_graph()
{
    TGraph *gr = new TGraph();

    fstream file;
    file.open("tut4_data.txt", ios::in);
    while(1)
    {
        double x, y, dummy;
        file >> x >> y >> dummy;
        gr->SetPoint(gr->GetN(), x, y);

        if(file.eof()) break;
    }

    file.close();

    TCanvas *c1 = new TCanvas();

    gr->SetTitle("RDF");
    gr->GetXaxis()->SetTitle("r");
    gr->GetYaxis()->SetTitle("g(r)");

    gr->GetXaxis()->SetRangeUser(0,20);
    gr-> SetLineWidth(2);
    gr-> SetLineColor(kRed);

    gr->Draw("ACP"); //C draws a curve than a line (more smooth)
}