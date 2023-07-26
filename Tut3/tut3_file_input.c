void tut3_file_input()
{
    //Read values from a file and draw a histogram of the entries
    TH1F *hist = new TH1F("hist", "Histogram", 20, 0, 100); //20 bins-bin interval 5 (from 0-100)

    fstream file;
    file.open("tut3_data.txt", ios::in);

    double value;
    while(1)
    {
        file >> value;
        hist->Fill(value);
        if(file.eof()) break;
    }
    file.close();

    hist->GetXaxis()->SetTitle("Score");
    hist->GetYaxis()->SetTitle("Frequnecy");

    TCanvas *c1 = new TCanvas();
    hist->Draw();
}