/*
 * The MIT License
 *
 * Copyright 2017-2018 Norwegian University of Technology
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING  FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include <fmicpp/fmi2/xml/ScalarVariableAttributes.hpp>

using namespace std;
using namespace fmicpp::fmi2::xml;

void IntegerAttribute::load(const ptree &node) {
    min = node.get_optional<int>("<xmlattr>.min");
    max = node.get_optional<int>("<xmlattr>.max");
    start = node.get_optional<int>("<xmlattr>.start");

    quantity = node.get_optional<string>("<xmlattr>.quantity");
}

void RealAttribute::load(const ptree &node) {
    min = node.get_optional<double>("<xmlattr>.min");
    max = node.get_optional<double>("<xmlattr>.max");
    start = node.get_optional<double>("<xmlattr>.start");
    nominal = node.get_optional<double>("<xmlattr>.nominal");

    quantity = node.get_optional<string>("<xmlattr>.quantity");
    unit = node.get_optional<string>("<xmlattr>.unit");
    displayUnit = node.get_optional<string>("<xmlattr>.displayUnit");

    derivative = node.get_optional<unsigned int>("<xmlattr>.derivative");

    reinit = node.get<bool>("<xmlattr>.reinit", false);
    unbounded = node.get<bool>("<xmlattr>.unbounded", false);
    relativeQuantity = node.get<bool>("<xmlattr>.relativeQuantity", false);

}

void StringAttribute::load(const ptree &node) {
    start = node.get_optional<string>("<xmlattr>.start");
}

void BooleanAttribute::load(const ptree &node) {
    start = node.get_optional<bool>("<xmlattr>.start");
}

void EnumerationAttribute::load(const ptree &node) {
    min = node.get_optional<int>("<xmlattr>.min");
    max = node.get_optional<int>("<xmlattr>.max");
    start = node.get_optional<int>("<xmlattr>.start");

    quantity = node.get_optional<string>("<xmlattr>.quantity");
}