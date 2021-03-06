//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OrgXmlpullV1XmlSerializer-Protocol.h"

@class IOSBooleanArray, IOSCharArray, IOSIntArray, IOSObjectArray, JavaIoWriter, NSString;

@interface OrgKxml2IoKXmlSerializer : NSObject <OrgXmlpullV1XmlSerializer>
{
    IOSCharArray *mText_;
    int mPos_;
    JavaIoWriter *writer_;
    _Bool pending_;
    int auto__;
    int depth_;
    IOSObjectArray *elementStack_;
    IOSIntArray *nspCounts_;
    IOSObjectArray *nspStack_;
    IOSBooleanArray *indent_;
    _Bool unicode_;
    NSString *encoding_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)reportInvalidCharacterWithChar:(unsigned short)arg1;
- (void)dealloc;
- (void)processingInstructionWithNSString:(id)arg1;
- (void)commentWithNSString:(id)arg1;
- (void)writeSurrogateWithChar:(unsigned short)arg1 withChar:(unsigned short)arg2;
- (void)cdsectWithNSString:(id)arg1;
- (id)textWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)textWithNSString:(id)arg1;
- (int)getDepth;
- (id)getName;
- (id)getNamespace;
- (id)endTagWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)flush;
- (id)attributeWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (id)startTagWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)startDocumentWithNSString:(id)arg1 withJavaLangBoolean:(id)arg2;
- (void)setOutputWithJavaIoOutputStream:(id)arg1 withNSString:(id)arg2;
- (void)setOutputWithJavaIoWriter:(id)arg1;
- (void)setPrefixWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)setPropertyWithNSString:(id)arg1 withId:(id)arg2;
- (void)setFeatureWithNSString:(id)arg1 withBoolean:(_Bool)arg2;
- (void)ignorableWhitespaceWithNSString:(id)arg1;
- (id)getPropertyWithNSString:(id)arg1;
- (id)getPrefixWithNSString:(id)arg1 withBoolean:(_Bool)arg2 withBoolean:(_Bool)arg3;
- (id)getPrefixWithNSString:(id)arg1 withBoolean:(_Bool)arg2;
- (_Bool)getFeatureWithNSString:(id)arg1;
- (void)entityRefWithNSString:(id)arg1;
- (void)endDocument;
- (void)docdeclWithNSString:(id)arg1;
- (void)writeEscapedWithNSString:(id)arg1 withInt:(int)arg2;
- (void)checkWithBoolean:(_Bool)arg1;
- (void)flushBuffer;
- (void)appendWithNSString:(id)arg1;
- (void)appendWithNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)appendWithChar:(unsigned short)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

