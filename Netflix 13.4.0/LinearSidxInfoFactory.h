//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NFPlaylistGeneration/SidxInfoFactoryProtocol-Protocol.h>

@class NSString;

@interface LinearSidxInfoFactory : NSObject <SidxInfoFactoryProtocol>
{
    unsigned int _videoTargetDuration;
    unsigned int _audioTargetDuration;
}

@property(nonatomic) unsigned int audioTargetDuration; // @synthesize audioTargetDuration=_audioTargetDuration;
@property(nonatomic) unsigned int videoTargetDuration; // @synthesize videoTargetDuration=_videoTargetDuration;
- (id)videoLanguageOptions;
- (id)initWithConfig:(id)arg1;
- (id)sidxInfoWithFirstMoofOffset:(unsigned long long)arg1 timescale:(unsigned int)arg2 reference_count:(unsigned short)arg3 streamMediaType:(long long)arg4 isMcClearenStream:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

