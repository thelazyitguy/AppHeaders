//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TwitterAVCore/TAVCaptionSink-Protocol.h>

@class CALayer, NSMutableSet, UILayoutGuide;

@interface TAVCaptionContainerView : UIView <TAVCaptionSink>
{
    _Bool _useSingleBackgroundForCaptions;
    NSMutableSet *_availableCaptionViews;
    NSMutableSet *_usedCaptionViews;
    double _lastLayoutHeight;
    UILayoutGuide *_layoutGuide;
    CALayer *_backgroundLayer;
    struct UIEdgeInsets _captionInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
@property(nonatomic) double lastLayoutHeight; // @synthesize lastLayoutHeight=_lastLayoutHeight;
@property(retain, nonatomic) NSMutableSet *usedCaptionViews; // @synthesize usedCaptionViews=_usedCaptionViews;
@property(retain, nonatomic) NSMutableSet *availableCaptionViews; // @synthesize availableCaptionViews=_availableCaptionViews;
@property(nonatomic) struct UIEdgeInsets captionInsets; // @synthesize captionInsets=_captionInsets;
@property(nonatomic) _Bool useSingleBackgroundForCaptions; // @synthesize useSingleBackgroundForCaptions=_useSingleBackgroundForCaptions;
- (void)captionSourceDidUpdateWithCaptionModels:(id)arg1;
- (void)applyCaptionModel:(id)arg1 toCaptionView:(id)arg2;
- (void)applyCaptionModel:(id)arg1 toCaptionView:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)captionViewConstraintsForCaptionModel:(id)arg1 withCaptionView:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)addCaptionView:(id)arg1;
- (void)hideAllCaptionViews;
- (void)setUpLayoutGuide;
- (void)setUp;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

