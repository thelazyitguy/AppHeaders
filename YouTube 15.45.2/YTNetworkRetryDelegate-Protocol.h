//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSError, NSURLRequest;

@protocol YTNetworkRetryDelegate <NSObject>
+ (id)new;
+ (id)alloc;
- (void)request:(NSURLRequest *)arg1 didFailWithError:(NSError *)arg2 retryCount:(unsigned long long)arg3;
@end
