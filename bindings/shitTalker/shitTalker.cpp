#include "pybind11/pybind11.h"
#include "TalkShit.h"
namespace py = pybind11;

PYBIND11_MODULE(cppShitTalker, m) {

    m.doc() = "PyBind11 module for shitTalker!";

    py::class_<TalkShit>(m, "CppTalkShit", "A class that talks shit and swallows spit.")
        .def(py::init())
        .def("learnPhrase", &TalkShit::learnPhrase, "DocString for learning inappropriate phrases.")
        .def("saySomethingStupid", &TalkShit::saySomethingStupid, 
             "DocString for saySomethign Stupid");
}