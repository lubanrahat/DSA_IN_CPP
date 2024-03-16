#include <wx/wx.h>

class MyFrame : public wxFrame {
public:
    MyFrame(const wxString& title)
        : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150)) {
        // Create a panel and a static text control
        wxPanel* panel = new wxPanel(this, wxID_ANY);
        wxStaticText* text = new wxStaticText(panel, wxID_ANY, wxT("Hello, World!"),
                                              wxPoint(20, 20));
    }
};

class MyApp : public wxApp {
public:
    virtual bool OnInit() {
        MyFrame* frame = new MyFrame(wxT("Hello World"));
        frame->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(MyApp);
