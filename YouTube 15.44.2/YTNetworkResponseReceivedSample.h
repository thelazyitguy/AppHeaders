//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, YTMonotonicDate;

@interface YTNetworkResponseReceivedSample : NSObject
{
    NSString *_nonce;
    YTMonotonicDate *_requestDataReceivedDate;
    NSNumber *_contentLength;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *contentLength; // @synthesize contentLength=_contentLength;
@property(readonly, nonatomic) YTMonotonicDate *requestDataReceivedDate; // @synthesize requestDataReceivedDate=_requestDataReceivedDate;
@property(readonly, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
- (id)initWithNSURLRequest:(id)arg1 response:(id)arg2 receivedDate:(id)arg3;

@end

