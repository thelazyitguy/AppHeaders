//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageAttachment-Protocol.h>

@class NSString, TFNTwitterMediaAsset, TFSTwitterEntityMedia;

@protocol TFNDirectMessageMediaAttachment <TFNDirectMessageAttachment>
@property(nonatomic, readonly) _Bool isAudioOnly;
@property(nonatomic, readonly) _Bool isPossiblySensitive;
@property(nonatomic, readonly) double duration;
@property(nonatomic, readonly) unsigned long long mediaType;
@property(nonatomic, readonly) TFNTwitterMediaAsset *mediaAsset;
@property(nonatomic, readonly) TFSTwitterEntityMedia *entity;
@property(nonatomic, readonly) struct CGSize imageDimensions;
@property(nonatomic, readonly) NSString *imageURLString;
@end
