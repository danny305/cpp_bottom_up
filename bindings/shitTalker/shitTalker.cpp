#include "pybind11/pybind11.h"
#include "TalkShit.h"
namespace py = pybind11;

PYBIND11_MODULE(cppShitTalker, m) {
    py::class_<TalkShit>(m, "CppTalkShit")
        .def(py::init())
        .def("learnPhrase", &TalkShit::learnPhrase)
        .def("saySomethingStupid", &TalkShit::saySomethingStupid);
}