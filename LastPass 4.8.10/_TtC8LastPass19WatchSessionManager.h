//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCSessionDelegate-Protocol.h"

@interface _TtC8LastPass19WatchSessionManager : NSObject <WCSessionDelegate>
{
    // Error parsing type: , name: m_iSend
    // Error parsing type: , name: session
}

- (void).cxx_destruct;
- (void)sessionWatchStateDidChange:(id)arg1;
- (void)sessionDidDeactivate:(id)arg1;
- (void)sessionDidBecomeInactive:(id)arg1;
- (void)session:(id)arg1 activationDidCompleteWithState:(long long)arg2 error:(id)arg3;
- (id)init;

@end
