//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class IANetworkingClient, NSDictionary, NSError, NSMutableData, NSURL;

@protocol IANetworkingClientDelegate <NSObject>
- (void)networkingClient:(IANetworkingClient *)arg1 failedWithError:(NSError *)arg2;
- (void)networkingClient:(IANetworkingClient *)arg1 succeededWithHTTPStatusCode:(long long)arg2 headers:(NSDictionary *)arg3 data:(NSMutableData *)arg4;

@optional
- (_Bool)networkingClient:(IANetworkingClient *)arg1 shouldRedirectToURL:(NSURL *)arg2;
@end

