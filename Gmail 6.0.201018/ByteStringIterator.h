//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleProtobufByteString_ByteIterator-Protocol.h"

@class ComGoogleProtobufByteString, NSString;

@interface ByteStringIterator : NSObject <ComGoogleProtobufByteString_ByteIterator>
{
    ComGoogleProtobufByteString *byteString_;
    int position_;
    int limit_;
}

- (void)dealloc;
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id)arg1;
- (void)remove;
- (BOOL)nextByte;
- (id)next;
- (_Bool)hasNext;
- (id)initWithComGoogleProtobufByteString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
