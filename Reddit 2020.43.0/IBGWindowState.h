//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIWindow;

@interface IBGWindowState : NSObject
{
    UIWindow *_currentWindow;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UIWindow *currentWindow; // @synthesize currentWindow=_currentWindow;
- (void).cxx_destruct;
- (_Bool)isSystemWindow:(id)arg1;
- (_Bool)isUserStepsLogableWindow:(id)arg1;
- (void)setCurrentSDKWindow:(id)arg1;
- (_Bool)isNotInstabugWindow:(id)arg1;
- (id)loadApplicationWindow;
- (id)applicationWindow;
- (id)loadCurrentView;
- (id)currentView;

@end

