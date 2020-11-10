//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class INKPBToolSize, NSString;

@interface INKPBLineEffectParams : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasTextureUri; // @dynamic hasTextureUri;
@property(nonatomic) _Bool hasTiledTextureScale; // @dynamic hasTiledTextureScale;
@property(nonatomic) _Bool hasUAnimationDurationSeconds; // @dynamic hasUAnimationDurationSeconds;
@property(nonatomic) _Bool hasWindingTexturePeriod; // @dynamic hasWindingTexturePeriod;
@property(copy, nonatomic) NSString *textureUri; // @dynamic textureUri;
@property(nonatomic) float tiledTextureScale; // @dynamic tiledTextureScale;
@property(nonatomic) float uAnimationDurationSeconds; // @dynamic uAnimationDurationSeconds;
@property(retain, nonatomic) INKPBToolSize *windingTexturePeriod; // @dynamic windingTexturePeriod;

@end

