//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class BCBrowserChannelClient, NSArray, NSError;

@protocol BCBrowserChannelClientDelegate <NSObject>
- (void)browserChannel:(BCBrowserChannelClient *)arg1 failedWithError:(NSError *)arg2;
- (void)browserChannel:(BCBrowserChannelClient *)arg1 disconnectedWithPendingData:(NSArray *)arg2;
- (void)browserChannel:(BCBrowserChannelClient *)arg1 didReceiveMessage:(NSArray *)arg2 withId:(long long)arg3;
- (void)browserChannelConnected:(BCBrowserChannelClient *)arg1;
@end

