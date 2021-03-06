//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol RTCVideoRenderer;

__attribute__((visibility("hidden")))
@interface RTCVideoRendererAdapter : NSObject
{
    struct unique_ptr<webrtc::VideoRendererAdapter, std::__1::default_delete<webrtc::VideoRendererAdapter>> _adapter;
    id <RTCVideoRenderer> _videoRenderer;
}

@property(readonly, nonatomic) id <RTCVideoRenderer> videoRenderer; // @synthesize videoRenderer=_videoRenderer;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) VideoSinkInterface_f63caa8b *nativeVideoRenderer;
- (id)initWithNativeRenderer:(id)arg1;

@end

