//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol _TtP14AmazonChimeSDK15VideoRenderView_, _TtP14AmazonChimeSDK17VideoTileObserver_;

@protocol _TtP14AmazonChimeSDK25VideoTileControllerFacade_
- (void)resumeRemoteVideoTileWithTileId:(long long)arg1;
- (void)pauseRemoteVideoTileWithTileId:(long long)arg1;
- (void)removeVideoTileObserverWithObserver:(id <_TtP14AmazonChimeSDK17VideoTileObserver_>)arg1;
- (void)addVideoTileObserverWithObserver:(id <_TtP14AmazonChimeSDK17VideoTileObserver_>)arg1;
- (void)unbindVideoViewWithTileId:(long long)arg1;
- (void)bindVideoViewWithVideoView:(id <_TtP14AmazonChimeSDK15VideoRenderView_>)arg1 tileId:(long long)arg2;
@end

