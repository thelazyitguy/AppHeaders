//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTKeepAlivePersistentConnectionsToken, SPTNetworkConnectivityController;

@interface SPTSiriIntentsKeepAliveHandler : NSObject
{
    id <SPTNetworkConnectivityController> _networkController;
    id <SPTKeepAlivePersistentConnectionsToken> _keepAliveToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTKeepAlivePersistentConnectionsToken> keepAliveToken; // @synthesize keepAliveToken=_keepAliveToken;
@property(nonatomic) __weak id <SPTNetworkConnectivityController> networkController; // @synthesize networkController=_networkController;
- (void)keepAlivePersistentConnection:(_Bool)arg1;
- (void)dealloc;
- (id)initWithNetworkConnectivityController:(id)arg1;

@end

