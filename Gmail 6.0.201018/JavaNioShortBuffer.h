//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaNioBuffer.h"

#import "JavaLangComparable-Protocol.h"

@class IOSShortArray, NSString;

@interface JavaNioShortBuffer : JavaNioBuffer <JavaLangComparable>
{
    IOSShortArray *hb_;
    int offset_;
    _Bool isReadOnly_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (int)compareWithShort:(short)arg1 withShort:(short)arg2;
+ (_Bool)equalsWithShort:(short)arg1 withShort:(short)arg2;
+ (id)wrapWithShortArray:(id)arg1;
+ (id)wrapWithShortArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
+ (id)allocateWithInt:(int)arg1;
- (void)dealloc;
- (id)order;
- (int)compareToWithId:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (_Bool)isDirect;
- (id)compact;
- (id)rewind;
- (id)flip;
- (id)clear;
- (id)reset;
- (id)mark;
- (id)limitWithInt:(int)arg1;
- (id)positionWithInt:(int)arg1;
- (int)arrayOffset;
- (id)array;
- (_Bool)hasArray;
- (id)putWithShortArray:(id)arg1;
- (id)putWithShortArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)putWithJavaNioShortBuffer:(id)arg1;
- (id)getWithShortArray:(id)arg1;
- (id)getWithShortArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)putWithInt:(int)arg1 withShort:(short)arg2;
- (short)getWithInt:(int)arg1;
- (id)putWithShort:(short)arg1;
- (short)get;
- (id)asReadOnlyBuffer;
- (id)duplicate;
- (id)slice;
- (id)initWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (id)initWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withShortArray:(id)arg5 withInt:(int)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
