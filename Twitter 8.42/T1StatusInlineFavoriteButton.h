//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1StatusInlineActionButton.h>

@interface T1StatusInlineFavoriteButton : T1StatusInlineActionButton
{
    unsigned long long _showDisabledEducationForReason;
}

+ (id)tintColorForUIControlState:(unsigned long long)arg1;
+ (id)buttonImageNameForUIControlState:(unsigned long long)arg1;
@property(nonatomic) unsigned long long showDisabledEducationForReason; // @synthesize showDisabledEducationForReason=_showDisabledEducationForReason;
- (id)createImageView;
- (id)animationTypeForTransitionToSelectedState;
- (void)statusDidUpdate:(id)arg1 options:(unsigned long long)arg2 displayTextOptions:(unsigned long long)arg3 animated:(_Bool)arg4;
- (id)actionSheetTitle;
- (id)initWithOptions:(unsigned long long)arg1 overrideTintColor:(id)arg2 overrideSize:(id)arg3 overrideStrength:(id)arg4 account:(id)arg5;

@end

