//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AspenUIComponents/UIAppearanceContainer-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIColor, UIFont;

@interface CircleStepBar : UIView <UIAppearanceContainer>
{
    _Bool _layersInitialized;
    _Bool _viewInitialized;
    _Bool _initialStepInProgressSet;
    _Bool _fontsSynchronized;
    UIColor *_progressColor;
    UIColor *_emptyColor;
    unsigned long long _numberOfSteps;
    double _lineHeightToCircleHeightRatio;
    NSArray *_statusTexts;
    UIColor *_blinkingBorderColor;
    UIFont *_numberFont;
    UIColor *_numberTextColor;
    UIFont *_statusFont;
    UIColor *_statusTextColor;
    unsigned long long _stepInProgress;
    NSMutableArray *_circleLayers;
    NSMutableArray *_lineLayers;
    NSMutableArray *_blinkingCircleLayers;
    NSMutableArray *_numberLabels;
    NSMutableArray *_statusLabels;
    long long _labelAndBlinkingCircleTransactionCounter;
}

- (void).cxx_destruct;
@property(nonatomic) long long labelAndBlinkingCircleTransactionCounter; // @synthesize labelAndBlinkingCircleTransactionCounter=_labelAndBlinkingCircleTransactionCounter;
@property(nonatomic) _Bool fontsSynchronized; // @synthesize fontsSynchronized=_fontsSynchronized;
@property(nonatomic) _Bool initialStepInProgressSet; // @synthesize initialStepInProgressSet=_initialStepInProgressSet;
@property(nonatomic) _Bool viewInitialized; // @synthesize viewInitialized=_viewInitialized;
@property(nonatomic) _Bool layersInitialized; // @synthesize layersInitialized=_layersInitialized;
@property(retain, nonatomic) NSMutableArray *statusLabels; // @synthesize statusLabels=_statusLabels;
@property(retain, nonatomic) NSMutableArray *numberLabels; // @synthesize numberLabels=_numberLabels;
@property(retain, nonatomic) NSMutableArray *blinkingCircleLayers; // @synthesize blinkingCircleLayers=_blinkingCircleLayers;
@property(retain, nonatomic) NSMutableArray *lineLayers; // @synthesize lineLayers=_lineLayers;
@property(retain, nonatomic) NSMutableArray *circleLayers; // @synthesize circleLayers=_circleLayers;
@property(nonatomic) unsigned long long stepInProgress; // @synthesize stepInProgress=_stepInProgress;
@property(retain, nonatomic) UIColor *statusTextColor; // @synthesize statusTextColor=_statusTextColor;
@property(retain, nonatomic) UIFont *statusFont; // @synthesize statusFont=_statusFont;
@property(retain, nonatomic) UIColor *numberTextColor; // @synthesize numberTextColor=_numberTextColor;
@property(retain, nonatomic) UIFont *numberFont; // @synthesize numberFont=_numberFont;
@property(retain, nonatomic) UIColor *blinkingBorderColor; // @synthesize blinkingBorderColor=_blinkingBorderColor;
@property(retain, nonatomic) NSArray *statusTexts; // @synthesize statusTexts=_statusTexts;
@property(nonatomic) double lineHeightToCircleHeightRatio; // @synthesize lineHeightToCircleHeightRatio=_lineHeightToCircleHeightRatio;
@property(nonatomic) unsigned long long numberOfSteps; // @synthesize numberOfSteps=_numberOfSteps;
@property(retain, nonatomic) UIColor *emptyColor; // @synthesize emptyColor=_emptyColor;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
- (void)showLabelAndBlinkingAnimationIfNeeded:(unsigned long long)arg1;
- (void)processCompleted;
- (void)setInitialStepInProgress:(unsigned long long)arg1;
- (id)setCircleLayerPositionWithArray:(id)arg1 index:(unsigned long long)arg2 diameter:(double)arg3 xPosition:(double)arg4 yPosition:(double)arg5 zPosition:(unsigned long long)arg6 fillColor:(id)arg7;
- (double)positionIndexOrientationRespectiveWithIndex:(unsigned long long)arg1 numberOfEntities:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)createLayerAndAddToArray:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

