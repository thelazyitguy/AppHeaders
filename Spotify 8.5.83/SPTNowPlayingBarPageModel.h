//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP18ConnectUIV2Feature44SPTConnectUINowPlayingBarIntegrationObserver_-Protocol.h"

@protocol SPTNowPlayingBarPageModelDelegate, _TtP18ConnectUIV2Feature36SPTConnectUINowPlayingBarIntegration_;

@interface SPTNowPlayingBarPageModel : NSObject <_TtP18ConnectUIV2Feature44SPTConnectUINowPlayingBarIntegrationObserver_>
{
    _Bool _remoteDevicesVisible;
    id <SPTNowPlayingBarPageModelDelegate> _delegate;
    id <_TtP18ConnectUIV2Feature36SPTConnectUINowPlayingBarIntegration_> _connectIntegration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_TtP18ConnectUIV2Feature36SPTConnectUINowPlayingBarIntegration_> connectIntegration; // @synthesize connectIntegration=_connectIntegration;
@property(nonatomic, getter=isRemoteDevicesVisible) _Bool remoteDevicesVisible; // @synthesize remoteDevicesVisible=_remoteDevicesVisible;
@property(nonatomic) __weak id <SPTNowPlayingBarPageModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)shouldUpdateConnectStateViewVisibilityWithVisible:(_Bool)arg1;
- (id)initWithConnectIntegration:(id)arg1;

@end

