//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTActionableImage-Protocol.h"

@class ComGoogleCommonBaseOptional, JBTActionableImage_IconOverlay, NSString;
@protocol JBTImage;

@interface JBTIActionableImageImpl : NSObject <JBTActionableImage>
{
    id <JBTImage> delegate_;
    ComGoogleCommonBaseOptional *action_;
    JBTActionableImage_IconOverlay *iconOverlay_;
}

- (void)dealloc;
- (id)getImageMetadataUrlForTimely;
- (int)getSecondaryColorSample;
- (int)getColorSample;
- (_Bool)shouldExpireFromCache;
- (void)getImageMetadataWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)hasImageMetadata;
- (id)getStockImageType;
- (_Bool)hasDensityImageUrl;
- (_Bool)hasImageUrl;
- (id)getImageUrlWithJBTImageUrlSettings:(id)arg1;
- (id)getIconOverlay;
- (id)getAction;
- (_Bool)hasAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
