//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@protocol ObjcCameraSampleBufferReceiver;

@protocol ObjcCameraWrapper <NSObject>
- (void)setCameraSampleBufferReceiver:(id <ObjcCameraSampleBufferReceiver>)arg1;
- (void)setFramerate:(int)arg1;
- (void)setVideoZoomFactor:(double)arg1;
- (_Bool)setFlashOn:(_Bool)arg1;
- (_Bool)isFlashSupported;
- (void)toggleCamera;
@end

