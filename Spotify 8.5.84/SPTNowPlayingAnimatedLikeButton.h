//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEButtonAnimatable.h"

@class NSSet, UINotificationFeedbackGenerator;

@interface SPTNowPlayingAnimatedLikeButton : GLUEButtonAnimatable
{
    _Bool _isUserInitiatedTransitionInProgress;
    UINotificationFeedbackGenerator *_feedbackGenerator;
    NSSet *_prideURIs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *prideURIs; // @synthesize prideURIs=_prideURIs;
@property(retain, nonatomic) UINotificationFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(nonatomic) _Bool isUserInitiatedTransitionInProgress; // @synthesize isUserInitiatedTransitionInProgress=_isUserInitiatedTransitionInProgress;
- (id)pridePlaylists;
- (void)setSelected:(_Bool)arg1 isUserInitated:(_Bool)arg2;
- (void)dealloc;
- (void)updateAnimation:(long long)arg1;
- (void)updateAnimationFortContextSource:(id)arg1;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end
