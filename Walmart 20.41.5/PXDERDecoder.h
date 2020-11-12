//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSNumber;

@interface PXDERDecoder : NSObject
{
    struct {
        unsigned int decodedData:1;
        unsigned int decodedIdentifier:1;
        unsigned int decodedContentLength:1;
        unsigned int decodedContent:1;
        unsigned int decodedNestedContent:1;
    } flags_;
    NSData *data_;
    NSNumber *derIdentifierTag_;
    long long derContentLength_;
    NSData *content_;
    NSArray *nestedContent_;
    NSData *rawData_;
    unsigned long long sizeOfIdentifier_;
    unsigned long long sizeOfContentLength_;
}

@property(nonatomic) unsigned long long sizeOfContentLength; // @synthesize sizeOfContentLength=sizeOfContentLength_;
@property(nonatomic) unsigned long long sizeOfIdentifier; // @synthesize sizeOfIdentifier=sizeOfIdentifier_;
@property(readonly, copy, nonatomic) NSData *rawData; // @synthesize rawData=rawData_;
- (void).cxx_destruct;
- (void)decodeNestedContentWithLength:(id)arg1;
- (void)decodeNestedContent;
- (void)decodeContent;
- (void)decodeData;
- (void)decodeContentLength;
- (void)decodeIdentifierTag;
- (int)examineFirstByte:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *nestedContent;
@property(readonly, copy, nonatomic) NSData *derContent;
@property(readonly, nonatomic) long long derContentLength;
@property(readonly, nonatomic) NSNumber *derIdentifierTag;
@property(readonly, nonatomic) int derIdentifierPrimitiveOrConstructed;
@property(readonly, nonatomic) int derIdentifierClass;
@property(readonly, copy, nonatomic) NSData *data;
- (id)description;
- (id)initWithData:(id)arg1;
- (void)dumpHierarchy;
- (void)dumpHierarchy:(int)arg1;

@end
