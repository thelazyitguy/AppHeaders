//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/_TtC8libFunny15BaseContentView.h>

#import <Funny/WKYTPlayerViewDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface _TtC8libFunny18YoutubeContentView : _TtC8libFunny15BaseContentView <WKYTPlayerViewDelegate>
{
    // Error parsing type: , name: playerView
    // Error parsing type: , name: videoInfoView
    // Error parsing type: , name: timeLabel
    // Error parsing type: , name: descriptionLabel
    // Error parsing type: , name: isVideoFinished
    // Error parsing type: , name: isVideoLoaded
    // Error parsing type: , name: isVideoInFullscreen
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)playerView:(id)arg1 didChangeToState:(long long)arg2;
- (void)playerViewDidBecomeReady:(id)arg1;
- (void)onExitFullScreenWithNotification:(id)arg1;
- (void)onEnterFullScreenWithNotification:(id)arg1;

@end
