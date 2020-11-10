//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTImageViewLoadingDelegate-Protocol.h"

@class CAGradientLayer, NSString, YTImageView;

@interface YTReelShelfItemCreationThumbnailView : UIView <YTImageViewLoadingDelegate>
{
    YTImageView *_imageView;
    CAGradientLayer *_backgroundLayer;
    CAGradientLayer *_scrimLayer;
    double _cornerRadius;
}

- (void).cxx_destruct;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) CAGradientLayer *scrimLayer; // @synthesize scrimLayer=_scrimLayer;
@property(retain, nonatomic) CAGradientLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) YTImageView *imageView; // @synthesize imageView=_imageView;
- (void)imageViewDidLoad:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

