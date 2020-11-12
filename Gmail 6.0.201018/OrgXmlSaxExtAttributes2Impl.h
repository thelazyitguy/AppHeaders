//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrgXmlSaxHelpersAttributesImpl.h"

#import "OrgXmlSaxExtAttributes2-Protocol.h"

@class IOSBooleanArray, NSString;

@interface OrgXmlSaxExtAttributes2Impl : OrgXmlSaxHelpersAttributesImpl <OrgXmlSaxExtAttributes2>
{
    IOSBooleanArray *declared_;
    IOSBooleanArray *specified_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)setSpecifiedWithInt:(int)arg1 withBoolean:(_Bool)arg2;
- (void)setDeclaredWithInt:(int)arg1 withBoolean:(_Bool)arg2;
- (void)removeAttributeWithInt:(int)arg1;
- (void)addAttributeWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5;
- (void)setAttributesWithOrgXmlSaxAttributes:(id)arg1;
- (_Bool)isSpecifiedWithNSString:(id)arg1;
- (_Bool)isSpecifiedWithNSString:(id)arg1 withNSString:(id)arg2;
- (_Bool)isSpecifiedWithInt:(int)arg1;
- (_Bool)isDeclaredWithNSString:(id)arg1;
- (_Bool)isDeclaredWithNSString:(id)arg1 withNSString:(id)arg2;
- (_Bool)isDeclaredWithInt:(int)arg1;
- (id)initWithOrgXmlSaxAttributes:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
