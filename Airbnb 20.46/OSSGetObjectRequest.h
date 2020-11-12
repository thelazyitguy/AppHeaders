//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OSSRequest.h"

@class NSDictionary, NSString, NSURL, OSSRange;

@interface OSSGetObjectRequest : OSSRequest
{
    NSString *_bucketName;
    NSString *_objectKey;
    OSSRange *_range;
    NSURL *_downloadToFileURL;
    NSString *_xOssProcess;
    CDUnknownBlockType _downloadProgress;
    CDUnknownBlockType _onRecieveData;
    NSDictionary *_headerFields;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(copy, nonatomic) CDUnknownBlockType onRecieveData; // @synthesize onRecieveData=_onRecieveData;
@property(copy, nonatomic) CDUnknownBlockType downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(copy, nonatomic) NSString *xOssProcess; // @synthesize xOssProcess=_xOssProcess;
@property(retain, nonatomic) NSURL *downloadToFileURL; // @synthesize downloadToFileURL=_downloadToFileURL;
@property(retain, nonatomic) OSSRange *range; // @synthesize range=_range;
@property(copy, nonatomic) NSString *objectKey; // @synthesize objectKey=_objectKey;
@property(copy, nonatomic) NSString *bucketName; // @synthesize bucketName=_bucketName;

@end
