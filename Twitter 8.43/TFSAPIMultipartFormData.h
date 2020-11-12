//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSAPI/NSCopying-Protocol.h>

@class NSInputStream, NSMutableArray, NSString;

@interface TFSAPIMultipartFormData : NSObject <NSCopying>
{
    NSMutableArray *_parts;
    NSString *_frozenDataFilePath;
    unsigned long long _dataLength;
    NSString *_boundary;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *boundary; // @synthesize boundary=_boundary;
- (void)_writeToDataFile;
- (void)_appendFile:(id)arg1 toFileHandle:(id)arg2;
- (void)_writeString:(id)arg1 toFileHandle:(id)arg2;
- (void)_writeData:(id)arg1 toFileHandle:(id)arg2;
- (void)cleanUpDataFile;
- (void)addVideoDataPartWithFilePath:(id)arg1 name:(id)arg2;
- (void)addImageDataPartWithFilePath:(id)arg1 name:(id)arg2;
- (void)addImageDataPart:(id)arg1 name:(id)arg2;
- (void)addJSONDataPart:(id)arg1 name:(id)arg2;
- (void)addTextPart:(id)arg1 name:(id)arg2;
- (void)addDataPart:(id)arg1 name:(id)arg2;
@property(readonly, nonatomic) unsigned long long dataInputLength;
@property(readonly, nonatomic) NSInputStream *dataInputStream;
@property(readonly, nonatomic) NSString *frozenDataFilePath;
@property(readonly, nonatomic) NSString *contentTypeHeader;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMultipartFormDataParts:(id)arg1 boundary:(id)arg2;
- (id)init;

@end
