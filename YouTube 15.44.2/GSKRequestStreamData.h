//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, S3Request;

@interface GSKRequestStreamData : NSObject
{
    NSData *_data;
    long long _bytesWritten;
    S3Request *_originalRequest;
}

+ (id)requestStreamDataWithData:(id)arg1 forRequest:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) S3Request *originalRequest; // @synthesize originalRequest=_originalRequest;
- (long long)writeToStream:(id)arg1;
@property(readonly, nonatomic) unsigned long long bytesRemaining;
- (id)initWithSerializedData:(id)arg1 forRequest:(id)arg2;

@end

