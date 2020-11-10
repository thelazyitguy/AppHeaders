//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTShortsProjectArchive-Protocol.h"

@class NSArray, NSString;

@interface YTShortsCameraProjectStateArchive : NSObject <YTShortsProjectArchive>
{
    NSArray *_cameraAssetIDs;
    NSArray *_audioAssetIDs;
    NSArray *_audioModels;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *audioModels; // @synthesize audioModels=_audioModels;
@property(retain, nonatomic) NSArray *audioAssetIDs; // @synthesize audioAssetIDs=_audioAssetIDs;
@property(retain, nonatomic) NSArray *cameraAssetIDs; // @synthesize cameraAssetIDs=_cameraAssetIDs;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

