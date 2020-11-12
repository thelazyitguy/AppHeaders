//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVReplayControlsViewLayout : NSObject
{
    struct CGSize _containerSize;
    struct CGSize _playButtonSize;
    struct CGSize _activityIndicatorSize;
}

+ (id)ErrorSubtitleFont;
+ (id)ErrorTitleFont;
+ (double)ErrorTitleLineSpacing;
+ (id)AttributedStringWithErrorTitle:(id)arg1 Subtitle:(id)arg2;
@property(readonly, nonatomic) struct CGSize activityIndicatorSize; // @synthesize activityIndicatorSize=_activityIndicatorSize;
@property(readonly, nonatomic) struct CGSize playButtonSize; // @synthesize playButtonSize=_playButtonSize;
@property(readonly, nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(readonly, nonatomic) struct CGRect activityIndicatorFrame;
- (double)errorLabelHeight;
@property(readonly, nonatomic) struct CGRect errorLabelFrame;
@property(readonly, nonatomic) struct UIEdgeInsets playButtonHitTestEdgeInsets;
@property(readonly, nonatomic) struct CGRect playButtonFrame;
@property(readonly, nonatomic) struct CGSize fittingSize;
- (id)initWithContainerSize:(struct CGSize)arg1 playButtonSize:(struct CGSize)arg2 activityIndicatorSize:(struct CGSize)arg3;

@end
