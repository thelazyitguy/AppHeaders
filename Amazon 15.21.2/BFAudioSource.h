//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BFVADConfig, NSString;
@protocol BFAudioSourceDelegate, OS_dispatch_queue;

@interface BFAudioSource : NSObject
{
    NSString *_contentType;
    long long _encoding;
    BFVADConfig *_vadConfig;
    NSObject<BFAudioSourceDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak NSObject<BFAudioSourceDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BFVADConfig *vadConfig; // @synthesize vadConfig=_vadConfig;
@property(readonly, nonatomic) long long encoding; // @synthesize encoding=_encoding;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
- (unsigned long long)audioBufferSize;
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)start;
- (id)initWithEncoding:(long long)arg1 voiceActivityDetectorConfiguration:(id)arg2;
- (id)initWithEncoding:(long long)arg1;

@end
