//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKError, GCKRequest;

@protocol GCKRequestDelegate <NSObject>

@optional
- (void)request:(GCKRequest *)arg1 didAbortWithReason:(long long)arg2;
- (void)request:(GCKRequest *)arg1 didFailWithError:(GCKError *)arg2;
- (void)requestDidComplete:(GCKRequest *)arg1;
@end

