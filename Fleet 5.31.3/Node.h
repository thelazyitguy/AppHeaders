//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Document, NSString, NamedNodeMap, NodeList;

@interface Node : NSObject
{
    _Bool hasAttributes;
    _Bool hasChildNodes;
    int nodeType;
    NSString *nodeName;
    NSString *nodeValue;
    Node *parentNode;
    NodeList *childNodes;
    NamedNodeMap *attributes;
    Document *ownerDocument;
    NSString *localName;
    NSString *namespaceURI;
    NSString *prefix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix;
@property(retain, nonatomic) NSString *namespaceURI; // @synthesize namespaceURI;
@property(retain, nonatomic) NSString *localName; // @synthesize localName;
@property(nonatomic) _Bool hasChildNodes; // @synthesize hasChildNodes;
@property(nonatomic) _Bool hasAttributes; // @synthesize hasAttributes;
@property(nonatomic) __weak Document *ownerDocument; // @synthesize ownerDocument;
@property(retain, nonatomic) NamedNodeMap *attributes; // @synthesize attributes;
@property(retain, nonatomic) NodeList *childNodes; // @synthesize childNodes;
@property(nonatomic) __weak Node *parentNode; // @synthesize parentNode;
@property(nonatomic) int nodeType; // @synthesize nodeType;
@property(retain, nonatomic) NSString *nodeValue; // @synthesize nodeValue;
@property(retain, nonatomic) NSString *nodeName; // @synthesize nodeName;
- (void)appendXMLToString:(id)arg1 availableNamespaces:(id)arg2 activeNamespaces:(id)arg3;
- (id)description;
@property(readonly, nonatomic) __weak NSString *textContent;
- (_Bool)isSupportedFeature:(id)arg1 version:(id)arg2;
- (void)normalize;
- (id)cloneNode:(_Bool)arg1;
- (id)appendChild:(id)arg1;
- (id)removeChild:(id)arg1;
- (id)replaceChild:(id)arg1 oldChild:(id)arg2;
- (id)insertBefore:(id)arg1 refChild:(id)arg2;
@property(readonly, nonatomic) __weak Node *nextSibling;
@property(readonly, nonatomic) __weak Node *previousSibling;
@property(readonly, nonatomic) __weak Node *lastChild;
@property(readonly, nonatomic) __weak Node *firstChild;
- (id)initType:(int)arg1 name:(id)arg2 value:(id)arg3 inNamespace:(id)arg4;
- (id)initType:(int)arg1 name:(id)arg2 inNamespace:(id)arg3;
- (void)postInitNamespaceHandling:(id)arg1;
- (id)initType:(int)arg1 name:(id)arg2;
- (id)initType:(int)arg1 name:(id)arg2 value:(id)arg3;
- (id)init;

@end

