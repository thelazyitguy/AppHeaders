//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AVAudioSessionPortDescription, NSArray;

@protocol _TtP14AmazonChimeSDK12AudioSession_
- (_Bool)overrideOutputAudioPort:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setPreferredInput:(AVAudioSessionPortDescription *)arg1 error:(id *)arg2;
@property(nonatomic, readonly) NSArray *availableInputs;
@property(nonatomic, readonly) unsigned long long recordPermission;
@end
