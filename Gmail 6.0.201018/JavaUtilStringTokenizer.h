//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilEnumeration-Protocol.h"

@class IOSIntArray, NSString;

@interface JavaUtilStringTokenizer : NSObject <JavaUtilEnumeration>
{
    int currentPosition_;
    int newPosition_;
    int maxPosition_;
    NSString *str_;
    NSString *delimiters_;
    _Bool retDelims_;
    _Bool delimsChanged_;
    int maxDelimCodePoint_;
    _Bool hasSurrogates_;
    IOSIntArray *delimiterCodePoints_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)countTokens;
- (id)nextElement;
- (_Bool)hasMoreElements;
- (id)nextTokenWithNSString:(id)arg1;
- (id)nextToken;
- (_Bool)hasMoreTokens;
- (_Bool)isDelimiterWithInt:(int)arg1;
- (int)scanTokenWithInt:(int)arg1;
- (int)skipDelimitersWithInt:(int)arg1;
- (id)initWithNSString:(id)arg1;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withBoolean:(_Bool)arg3;
- (void)setMaxDelimCodePoint;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
