//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTEditSpritedButton.h>

@class GIMMe, UIView;

@interface YTEditCameraEffectsButton : YTEditSpritedButton
{
    UIView *_newIndicator;
    _Bool _showNewIndicator;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showNewIndicator; // @synthesize showNewIndicator=_showNewIndicator;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)layoutSubviews;
- (void)updateShowNewIndicatorState;
- (void)setSelected:(_Bool)arg1;
- (id)init;

@end

