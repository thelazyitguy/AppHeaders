//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OSSRequest.h"

@class NSData, NSString, NSURL;

@interface OSSUploadPartRequest : OSSRequest
{
    int _partNumber;
    NSString *_bucketName;
    NSString *_objectkey;
    NSString *_uploadId;
    NSString *_contentMd5;
    NSData *_uploadPartData;
    NSURL *_uploadPartFileURL;
    CDUnknownBlockType _uploadPartProgress;
    NSString *_contentSHA1;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *contentSHA1; // @synthesize contentSHA1=_contentSHA1;
@property(copy, nonatomic) CDUnknownBlockType uploadPartProgress; // @synthesize uploadPartProgress=_uploadPartProgress;
@property(retain, nonatomic) NSURL *uploadPartFileURL; // @synthesize uploadPartFileURL=_uploadPartFileURL;
@property(retain, nonatomic) NSData *uploadPartData; // @synthesize uploadPartData=_uploadPartData;
@property(copy, nonatomic) NSString *contentMd5; // @synthesize contentMd5=_contentMd5;
@property(nonatomic) int partNumber; // @synthesize partNumber=_partNumber;
@property(copy, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(copy, nonatomic) NSString *objectkey; // @synthesize objectkey=_objectkey;
@property(copy, nonatomic) NSString *bucketName; // @synthesize bucketName=_bucketName;

@end

