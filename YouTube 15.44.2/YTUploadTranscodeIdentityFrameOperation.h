//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTUploadTranscodeFrameOperation-Protocol.h>

@class NSString;

@interface YTUploadTranscodeIdentityFrameOperation : NSObject <YTUploadTranscodeFrameOperation>
{
}

- (void)setUpAndWait;
- (void)willCancel;
- (struct __CVBuffer *)processedVideoFrameFromVideoFrame:(struct __CVBuffer *)arg1 timestamp:(CDStruct_1b6d18a9)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

