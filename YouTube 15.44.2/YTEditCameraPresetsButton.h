//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTEditSpritedButton.h>

@interface YTEditCameraPresetsButton : YTEditSpritedButton
{
    YTEditSpritedButton *_inactiveButton;
    YTEditSpritedButton *_activeButton;
    _Bool _active;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)updateSpritedViews;
- (void)stateDidChange:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)seekSpritedAnimationToEnd;
- (void)seekSpritedAnimationToBeginning;
- (void)stopSpritedViewAnimation;
- (void)startSpritedViewAnimation;
- (void)setSelected:(_Bool)arg1;
- (id)init;

@end

