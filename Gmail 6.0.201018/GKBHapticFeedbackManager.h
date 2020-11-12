//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImpactFeedbackGenerator, UINotificationFeedbackGenerator, UISelectionFeedbackGenerator;

@interface GKBHapticFeedbackManager : NSObject
{
    UISelectionFeedbackGenerator *_selectionGenerator;
    UIImpactFeedbackGenerator *_lightImpactGenerator;
    UIImpactFeedbackGenerator *_impactGenerator;
    UIImpactFeedbackGenerator *_heavyImpactGenerator;
    UINotificationFeedbackGenerator *_notificationGenerator;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)hapticFeedbackEnabled;
- (void)initializeHapticEngine;
- (void)sleep;
- (void)prepareForHapticFeedback;
- (void)notificationOccurred:(long long)arg1;
- (void)heavyImpactOccurred;
- (void)impactOccurred;
- (void)lightImpactOccurred;
- (void)selectionChanged;
- (id)initPrivate;

@end
