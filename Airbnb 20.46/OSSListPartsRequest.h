//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OSSRequest.h"

@class NSString;

@interface OSSListPartsRequest : OSSRequest
{
    int _maxParts;
    int _partNumberMarker;
    NSString *_bucketName;
    NSString *_objectKey;
    NSString *_uploadId;
}

- (void).cxx_destruct;
@property(nonatomic) int partNumberMarker; // @synthesize partNumberMarker=_partNumberMarker;
@property(nonatomic) int maxParts; // @synthesize maxParts=_maxParts;
@property(copy, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(copy, nonatomic) NSString *objectKey; // @synthesize objectKey=_objectKey;
@property(copy, nonatomic) NSString *bucketName; // @synthesize bucketName=_bucketName;

@end
