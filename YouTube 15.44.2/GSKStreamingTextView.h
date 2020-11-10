//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GSKTextFrame, NSString, UIColor, UIFont;

@interface GSKStreamingTextView : UIView
{
    _Bool _isRightToLeft;
    _Bool _isAnimating;
    _Bool _isAnimatingBackward;
    _Bool _nextShouldAnimate;
    UIFont *_font;
    UIColor *_stableColor;
    UIColor *_unstableColor;
    UIColor *_fillColor;
    NSString *_currentPrefix;
    NSString *_currentSuffix;
    NSString *_previousPrefix;
    NSString *_previousSuffix;
    NSString *_nextPrefix;
    NSString *_nextSuffix;
    GSKTextFrame *_textFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GSKTextFrame *textFrame; // @synthesize textFrame=_textFrame;
@property(nonatomic) _Bool nextShouldAnimate; // @synthesize nextShouldAnimate=_nextShouldAnimate;
@property(copy, nonatomic) NSString *nextSuffix; // @synthesize nextSuffix=_nextSuffix;
@property(copy, nonatomic) NSString *nextPrefix; // @synthesize nextPrefix=_nextPrefix;
@property(nonatomic) _Bool isAnimatingBackward; // @synthesize isAnimatingBackward=_isAnimatingBackward;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(copy, nonatomic) NSString *previousSuffix; // @synthesize previousSuffix=_previousSuffix;
@property(copy, nonatomic) NSString *previousPrefix; // @synthesize previousPrefix=_previousPrefix;
@property(copy, nonatomic) NSString *currentSuffix; // @synthesize currentSuffix=_currentSuffix;
@property(copy, nonatomic) NSString *currentPrefix; // @synthesize currentPrefix=_currentPrefix;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) _Bool isRightToLeft; // @synthesize isRightToLeft=_isRightToLeft;
@property(retain, nonatomic) UIColor *unstableColor; // @synthesize unstableColor=_unstableColor;
@property(retain, nonatomic) UIColor *stableColor; // @synthesize stableColor=_stableColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) _Bool hasExtraParagraphLineSpacing;
- (id)text;
- (unsigned long long)commonPrefixIndex;
- (void)animateTextWipeIsBackward:(id)arg1;
- (void)removeAllOldCoverViews;
- (_Bool)addCoverViewsToTextPosition:(id)arg1 isBackward:(_Bool)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateUserInterfaceWithColorTheme:(id)arg1;
- (void)layoutText;
- (double)heightWithMaximumLineCount:(unsigned long long)arg1;
- (long long)currentLineCount;
- (void)animateForward;
- (void)animationFinished;
- (void)animateBackwardTo:(unsigned long long)arg1;
- (void)transitionToPrefix:(id)arg1 suffix:(id)arg2 shouldAnimate:(_Bool)arg3;
- (void)repaintAndClearAnimationState;
- (void)scheduleTransitionToNewPrefix:(id)arg1 newSuffix:(id)arg2 shouldAnimate:(_Bool)arg3;
- (void)transitionToNewStringIfPossibleAndNecessary;
@property(nonatomic) double lineHeight;
- (void)setStablePrefix:(id)arg1 unstableSuffix:(id)arg2 shouldAnimate:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)coverViewColor;

@end

