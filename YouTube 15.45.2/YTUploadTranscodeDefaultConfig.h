//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTUploadTranscodeConfig-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface YTUploadTranscodeDefaultConfig : NSObject <YTUploadTranscodeConfig>
{
    NSURL *_transcodeURL;
    NSDictionary *_videoSettings;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *videoSettings; // @synthesize videoSettings=_videoSettings;
@property(readonly, nonatomic) NSURL *transcodeURL; // @synthesize transcodeURL=_transcodeURL;
- (id)initWithTranscodeURL:(id)arg1 videoSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
