//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebRTC/RTCVideoCapturerDelegate-Protocol.h>

@class NSString;

@interface RTCObjCVideoSourceAdapter : NSObject <RTCVideoCapturerDelegate>
{
    struct ObjCVideoTrackSource *_objCVideoTrackSource;
}

@property(nonatomic) struct ObjCVideoTrackSource *objCVideoTrackSource; // @synthesize objCVideoTrackSource=_objCVideoTrackSource;
- (void)capturer:(id)arg1 didCaptureVideoFrame:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

