//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAKAudioSourceProtocol-Protocol.h"

@class NSString;

@interface GSKAudioCaptureGAKShim : NSObject <GAKAudioSourceProtocol>
{
    struct AudioStreamBasicDescription _audioFormat;
}

- (void)removeSink:(id)arg1;
- (void)addSink:(id)arg1;
@property(readonly, nonatomic) const struct AudioStreamBasicDescription *audioFormat;
- (id)initWithAudioCaptureInterface:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

