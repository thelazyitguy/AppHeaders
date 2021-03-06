//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HTMLKit/NSCopying-Protocol.h>

@class HTMLDocument, HTMLElement, NSMutableOrderedSet, NSOrderedSet, NSString;

@interface HTMLNode : NSObject <NSCopying>
{
    NSMutableOrderedSet *_childNodes;
    short _nodeType;
    HTMLDocument *_ownerDocument;
    NSString *_name;
    HTMLNode *_parentNode;
    NSString *_textContent;
    unsigned long long _length;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(copy, nonatomic) NSString *textContent; // @synthesize textContent=_textContent;
@property(nonatomic) __weak HTMLNode *parentNode; // @synthesize parentNode=_parentNode;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) short nodeType; // @synthesize nodeType=_nodeType;
- (id)debugQuickLookObject;
- (id)description;
- (id)treeDescription;
@property(copy, nonatomic) NSString *innerHTML;
@property(readonly, nonatomic) NSString *outerHTML;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)cloneNodeDeep:(_Bool)arg1;
- (void)ensureReplacementValidityOfChildNode:(id)arg1 withNode:(id)arg2;
- (void)ensurePreInsertionValidityOfNode:(id)arg1 beforeChildNode:(id)arg2;
- (id)elementsMatchingSelector:(id)arg1;
- (id)firstElementMatchingSelector:(id)arg1;
- (id)querySelectorAll:(id)arg1;
- (id)querySelector:(id)arg1;
- (id)nodeIteratorWithShowOptions:(unsigned long long)arg1 filterBlock:(CDUnknownBlockType)arg2;
- (id)nodeIteratorWithShowOptions:(unsigned long long)arg1 filter:(id)arg2;
- (id)nodeIterator;
- (void)enumerateChildElementsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateChildNodesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)containsNode:(id)arg1;
- (_Bool)isDescendantOfNode:(id)arg1;
- (unsigned short)compareDocumentPositionWithNode:(id)arg1;
- (void)removeAllChildNodes;
- (void)reparentChildNodesIntoNode:(id)arg1;
- (id)removeChildNodeAtIndex:(unsigned long long)arg1;
- (id)removeChildNode:(id)arg1;
- (void)removeFromParentNode;
- (void)replaceAllChildNodesWithNode:(id)arg1;
- (id)replaceChildNode:(id)arg1 withNode:(id)arg2;
- (id)insertNode:(id)arg1 beforeChildNode:(id)arg2;
- (void)appendNodes:(id)arg1;
- (id)appendNode:(id)arg1;
- (void)prependNodes:(id)arg1;
- (id)prependNode:(id)arg1;
- (unsigned long long)indexOfChildElement:(id)arg1;
- (id)childElementAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfChildNode:(id)arg1;
- (unsigned long long)childElementsCount;
- (id)childNodeAtIndex:(unsigned long long)arg1;
- (_Bool)isEmpty;
- (unsigned long long)childNodesCount;
- (_Bool)hasChildNodeOfType:(short)arg1;
- (_Bool)hasChildNodes;
- (id)asElement;
@property(readonly, nonatomic) unsigned long long index;
@property(readonly, nonatomic) HTMLElement *nextSiblingElement;
@property(readonly, nonatomic) HTMLElement *previousSiblingElement;
@property(readonly, nonatomic) HTMLNode *nextSibling;
@property(readonly, nonatomic) HTMLNode *previousSibling;
@property(readonly, nonatomic) HTMLNode *lastChild;
@property(readonly, nonatomic) HTMLNode *firstChild;
@property(readonly, nonatomic) __weak HTMLElement *parentElement;
@property(readonly, nonatomic) __weak HTMLNode *rootNode;
@property(nonatomic) __weak HTMLDocument *ownerDocument; // @synthesize ownerDocument=_ownerDocument;
@property(readonly, nonatomic) NSOrderedSet *childNodes;
- (id)initWithName:(id)arg1 type:(short)arg2;

@end

