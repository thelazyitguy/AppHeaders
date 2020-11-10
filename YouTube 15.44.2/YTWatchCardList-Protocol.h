//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage, YTICommand, YTIFormattedString, YTIThumbnailDetails;

@protocol YTWatchCardList <NSObject>
@property(readonly, nonatomic) UIImage *thumbnailPlaceholderImage;
@property(readonly, nonatomic) struct CGSize thumbnailAspectRatio;
@property(readonly, nonatomic) unsigned long long itemCount;
@property(readonly, nonatomic) YTIFormattedString *title;
- (YTICommand *)navigationEndpointAtIndex:(unsigned long long)arg1;
- (YTIFormattedString *)subtitleAtIndex:(unsigned long long)arg1;
- (YTIFormattedString *)titleAtIndex:(unsigned long long)arg1;
- (YTIThumbnailDetails *)thumbnailAtIndex:(unsigned long long)arg1;
@end
