//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTLProbeClient/NSObject-Protocol.h>

@class NSArray, NSURL;

@protocol FTLProbeFetcher <NSObject>
- (void)fetchURL:(NSURL *)arg1 withTimeout:(double)arg2 options:(NSArray *)arg3 completion:(void (^)(NSData *, NSURLResponse *, FTLProbeFetcherMetrics *, NSError *))arg4;
@end
