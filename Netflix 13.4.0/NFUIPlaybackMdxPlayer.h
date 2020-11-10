//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PlaybackPlayerProtocol-Protocol.h"

@class MdxUiPlayerViewController, NSString, PlaybackRequest;
@protocol _TtP8ArgoCore15ACFSubscription_;

@interface NFUIPlaybackMdxPlayer : NSObject <PlaybackPlayerProtocol>
{
    MdxUiPlayerViewController *_viewController;
    PlaybackRequest *_playbackRequest;
    id <_TtP8ArgoCore15ACFSubscription_> _modelRequestOperation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_TtP8ArgoCore15ACFSubscription_> modelRequestOperation; // @synthesize modelRequestOperation=_modelRequestOperation;
@property(retain, nonatomic) PlaybackRequest *playbackRequest; // @synthesize playbackRequest=_playbackRequest;
@property(nonatomic) __weak MdxUiPlayerViewController *viewController; // @synthesize viewController=_viewController;
- (id)playerViewController;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismiss:(CDUnknownBlockType)arg1;
- (void)presentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)present:(CDUnknownBlockType)arg1;
- (void)configureWithPlaybackRequest:(id)arg1;
- (_Bool)dismissed;
- (_Bool)isBeingDismissed;
- (_Bool)isVisible;
- (void)pausePlayback:(_Bool)arg1 userInitiated:(_Bool)arg2;
- (void)stopPlaybackDismissing:(_Bool)arg1;
- (void)startPlayback:(id)arg1;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showAlert:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
