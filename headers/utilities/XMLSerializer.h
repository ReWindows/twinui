#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class XMLSerializer {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEvent@XMLSerializer@@YAJPEAUIXmlDocument@Dom@Xml@Data@Windows@@PEBG11W4XLSEventType@1@@Z
    long AddEvent(::Windows::Data::Xml::Dom::IXmlDocument *, unsigned short const *, unsigned short const *, unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOuterXML@XMLSerializer@@YAJPEBGW4XMLSkeletonType@1@PEAPEAUIXmlDocument@Dom@Xml@Data@Windows@@@Z
    long GetOuterXML(unsigned short const *, int, ::Windows::Data::Xml::Dom::IXmlDocument * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeLocalSuggestion@XMLSerializer@@YAJPEBG0PEAPEAG@Z
    long SerializeLocalSuggestion(unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StringifyDocument@XMLSerializer@@YAJPEAUIXmlDocument@Dom@Xml@Data@Windows@@PEAPEAG@Z
    long StringifyDocument(::Windows::Data::Xml::Dom::IXmlDocument *, unsigned short * *);
};
