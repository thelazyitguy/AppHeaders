//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YKFKeyRequest.h"

@class YKFAPDU;

@interface YKFKeyFIDO2Request : YKFKeyRequest
{
    int _retries;
    YKFAPDU *_apdu;
}

@property(retain, nonatomic) YKFAPDU *apdu; // @synthesize apdu=_apdu;
@property(nonatomic) int retries; // @synthesize retries=_retries;
- (void).cxx_destruct;
@property(readonly, nonatomic) double retryTimeInterval;
@property(readonly, nonatomic) _Bool shouldRetry;

@end
