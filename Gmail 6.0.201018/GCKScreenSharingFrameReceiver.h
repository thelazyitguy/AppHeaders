//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCKTimestampedPixelBuffer, GHKVideoCapture, NSString;
@protocol GCKScreenSharingFrameReceiverDelegate, GCKSharedIPCManager;

@interface GCKScreenSharingFrameReceiver : NSObject
{
    NSString *_sharedIPCPortName;
    GHKVideoCapture *_videoCapture;
    GCKTimestampedPixelBuffer *_lastPixelBuffer;
    double _lastFrameTimestamp;
    id <GCKSharedIPCManager> _sharedIPCManager;
    NSString *_appGroupName;
    _Bool _ipcInitialized;
    _Bool _isScreenSharingActive;
    double _frameInterval;
    id <GCKScreenSharingFrameReceiverDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GCKScreenSharingFrameReceiverDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isScreenSharingActive; // @synthesize isScreenSharingActive=_isScreenSharingActive;
@property(nonatomic) double frameInterval; // @synthesize frameInterval=_frameInterval;
@property(readonly, nonatomic) _Bool ipcInitialized; // @synthesize ipcInitialized=_ipcInitialized;
- (void)receivedVideoSampleData:(id)arg1;
- (void)provideLastFrameAgainIfNeeded;
- (void)sharingEnded;
- (void)sharingStarted;
- (void)cleanUpVideoCapture;
- (void)screenSharingStartedWithVideoCapture:(id)arg1;
- (void)dealloc;
- (id)initIPCWithPortName:(id)arg1 appGroupName:(id)arg2 sharedIPCManager:(id)arg3;

@end

