//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>

@class AVURLAsset;

@interface TFNTwitterVideoSegment : NSObject <NSCopying>
{
    CDStruct_1b6d18a9 _duration;
    AVURLAsset *_asset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AVURLAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAsset:(id)arg1;
- (id)init;

@end

