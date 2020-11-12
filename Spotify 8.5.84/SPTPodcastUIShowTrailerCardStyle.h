//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GLUELabelStyle, UIColor, UIImage;

@interface SPTPodcastUIShowTrailerCardStyle : NSObject
{
    double _imageViewCornerRadius;
    UIColor *_imageViewBackgroundColor;
    double _margin;
    double _subtitleMargin;
    UIColor *_progressViewColor;
    double _progressViewLineWidth;
    double _trailerLabelHeight;
    UIColor *_gradientColor;
    double _gradientHeight;
    struct CGSize _playIconSize;
    struct CGSize _pauseIconSize;
    struct CGSize _progressViewSize;
}

+ (struct CGSize)preferredImageSizeForContainerViewSize:(struct CGSize)arg1;
+ (struct CGSize)preferredViewSizeForContainerForModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
+ (double)textHeightForText:(id)arg1 componentWidth:(double)arg2 labelStyle:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) double gradientHeight; // @synthesize gradientHeight=_gradientHeight;
@property(readonly, nonatomic) UIColor *gradientColor; // @synthesize gradientColor=_gradientColor;
@property(readonly, nonatomic) double trailerLabelHeight; // @synthesize trailerLabelHeight=_trailerLabelHeight;
@property(readonly, nonatomic) double progressViewLineWidth; // @synthesize progressViewLineWidth=_progressViewLineWidth;
@property(readonly, nonatomic) struct CGSize progressViewSize; // @synthesize progressViewSize=_progressViewSize;
@property(readonly, nonatomic) UIColor *progressViewColor; // @synthesize progressViewColor=_progressViewColor;
@property(readonly, nonatomic) struct CGSize pauseIconSize; // @synthesize pauseIconSize=_pauseIconSize;
@property(readonly, nonatomic) struct CGSize playIconSize; // @synthesize playIconSize=_playIconSize;
@property(readonly, nonatomic) double subtitleMargin; // @synthesize subtitleMargin=_subtitleMargin;
@property(readonly, nonatomic) double margin; // @synthesize margin=_margin;
@property(readonly, nonatomic) UIColor *imageViewBackgroundColor; // @synthesize imageViewBackgroundColor=_imageViewBackgroundColor;
@property(readonly, nonatomic) double imageViewCornerRadius; // @synthesize imageViewCornerRadius=_imageViewCornerRadius;
- (id)extractColorFromImage:(id)arg1;
@property(readonly, nonatomic) UIImage *pauseImage;
@property(readonly, nonatomic) UIImage *playImage;
@property(readonly, nonatomic) GLUELabelStyle *subtitleLabelStyle;
@property(readonly, nonatomic) GLUELabelStyle *titleLabelStyle;
- (id)init;

@end
