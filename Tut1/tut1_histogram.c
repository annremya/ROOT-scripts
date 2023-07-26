void tut1_histogram()
{
    //H-histogram, 1-1 Dimension, F-float (Can use I for integer values)
    //check ROOT reference guide-Histogram library-Histogram classes
    //TH1F (const char *name, const char *title, Int_t nbinsx, const Double_t *xbins)
    TH1F *hist = new TH1F("hist", "Histogram", 100, 0, 100);

    hist->Fill(30);
    hist->Fill(70);
    hist->Fill(55);

    hist->GetXaxis()->SetTitle("X Axis");
    hist->GetYaxis()->SetTitle("Y Axis");

    //Window in which histogram will be drawn
    TCanvas *c1 = new TCanvas();
    hist->Draw();
}