//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Persona/Node.h>

@class NSString;

@interface Element : Node
{
    NSString *tagName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName;
- (_Bool)hasAttributeNS:(id)arg1 localName:(id)arg2;
- (_Bool)hasAttribute:(id)arg1;
- (id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2;
- (id)setAttributeNodeNS:(id)arg1;
- (id)getAttributeNodeNS:(id)arg1 localName:(id)arg2;
- (void)removeAttributeNS:(id)arg1 localName:(id)arg2;
- (void)setAttributeNS:(id)arg1 qualifiedName:(id)arg2 value:(id)arg3;
- (id)getAttributeNS:(id)arg1 localName:(id)arg2;
- (id)getElementsByTagName:(id)arg1;
- (id)removeAttributeNode:(id)arg1;
- (id)setAttributeNode:(id)arg1;
- (id)getAttributeNode:(id)arg1;
- (void)removeAttribute:(id)arg1;
- (void)setAttribute:(id)arg1 value:(id)arg2;
- (id)getAttribute:(id)arg1;
- (id)initWithQualifiedName:(id)arg1 inNameSpaceURI:(id)arg2 attributes:(id)arg3;
- (id)initWithLocalName:(id)arg1 attributes:(id)arg2;

@end
