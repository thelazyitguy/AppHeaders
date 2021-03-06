//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GOOGRTCVideoRenderer;

@interface RTCVideoRendererAdapter : NSObject
{
    struct unique_ptr<webrtc::VideoRendererAdapter, std::__1::default_delete<webrtc::VideoRendererAdapter>> _adapter;
    id <GOOGRTCVideoRenderer> _videoRenderer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <GOOGRTCVideoRenderer> videoRenderer; // @synthesize videoRenderer=_videoRenderer;
@property(readonly, nonatomic) VideoSinkInterface_a6f4a563 *nativeVideoRenderer;
- (id)initWithNativeRenderer:(id)arg1;

@end

