//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkLayer/NSObject-Protocol.h>

@class NSDictionary, NSURL;

@protocol TNLBackoffBehaviorProvider <NSObject>
- (struct TNLBackoffBehavior_T)tnl_backoffBehaviorForURL:(NSURL *)arg1 responseHeaders:(NSDictionary *)arg2;
@end

